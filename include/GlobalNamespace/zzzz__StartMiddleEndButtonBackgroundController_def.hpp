#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StartMiddleEndButtonBackgroundController)
namespace UnityEngine {
class Sprite;
}
namespace HMUI {
class ImageView;
}
// Forward declare root types
namespace GlobalNamespace {
class StartMiddleEndButtonBackgroundController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StartMiddleEndButtonBackgroundController);
// Type: ::StartMiddleEndButtonBackgroundController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5436))
// CS Name: ::StartMiddleEndButtonBackgroundController*
class CORDL_TYPE StartMiddleEndButtonBackgroundController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _startSprite, offset 0x18, size 0x8
  __declspec(property(get = __get__startSprite, put = __set__startSprite))::UnityEngine::Sprite* _startSprite;

  /// @brief Field _middleSprite, offset 0x20, size 0x8
  __declspec(property(get = __get__middleSprite, put = __set__middleSprite))::UnityEngine::Sprite* _middleSprite;

  /// @brief Field _endSprite, offset 0x28, size 0x8
  __declspec(property(get = __get__endSprite, put = __set__endSprite))::UnityEngine::Sprite* _endSprite;

  /// @brief Field _image, offset 0x30, size 0x8
  __declspec(property(get = __get__image, put = __set__image))::HMUI::ImageView* _image;

  constexpr ::UnityEngine::Sprite*& __get__startSprite();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__startSprite() const;

  constexpr void __set__startSprite(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get__middleSprite();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__middleSprite() const;

  constexpr void __set__middleSprite(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get__endSprite();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__endSprite() const;

  constexpr void __set__endSprite(::UnityEngine::Sprite* value);

  constexpr ::HMUI::ImageView*& __get__image();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& __get__image() const;

  constexpr void __set__image(::HMUI::ImageView* value);

  /// @brief Method SetStartSprite, addr 0x227c6b4, size 0x24, virtual false, abstract: false, final false
  inline void SetStartSprite();

  /// @brief Method SetMiddleSprite, addr 0x227c6d8, size 0x24, virtual false, abstract: false, final false
  inline void SetMiddleSprite();

  /// @brief Method SetEndSprite, addr 0x227c6fc, size 0x24, virtual false, abstract: false, final false
  inline void SetEndSprite();

  static inline ::GlobalNamespace::StartMiddleEndButtonBackgroundController* New_ctor();

  /// @brief Method .ctor, addr 0x227c720, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StartMiddleEndButtonBackgroundController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StartMiddleEndButtonBackgroundController(StartMiddleEndButtonBackgroundController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StartMiddleEndButtonBackgroundController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StartMiddleEndButtonBackgroundController(StartMiddleEndButtonBackgroundController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StartMiddleEndButtonBackgroundController();

public:
  /// @brief Field _startSprite, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____startSprite;

  /// @brief Field _middleSprite, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____middleSprite;

  /// @brief Field _endSprite, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____endSprite;

  /// @brief Field _image, offset: 0x30, size: 0x8, def value: None
  ::HMUI::ImageView* ____image;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StartMiddleEndButtonBackgroundController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StartMiddleEndButtonBackgroundController, ____startSprite) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StartMiddleEndButtonBackgroundController, ____middleSprite) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StartMiddleEndButtonBackgroundController, ____endSprite) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StartMiddleEndButtonBackgroundController, ____image) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StartMiddleEndButtonBackgroundController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StartMiddleEndButtonBackgroundController*, "", "StartMiddleEndButtonBackgroundController");
