#pragma once
// IWYU pragma private; include "GlobalNamespace/StartMiddleEndButtonBackgroundController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StartMiddleEndButtonBackgroundController)
namespace HMUI {
class ImageView;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class StartMiddleEndButtonBackgroundController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StartMiddleEndButtonBackgroundController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StartMiddleEndButtonBackgroundController
class CORDL_TYPE StartMiddleEndButtonBackgroundController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _endSprite, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__endSprite, put = __cordl_internal_set__endSprite)) ::UnityW<::UnityEngine::Sprite> _endSprite;

  /// @brief Field _image, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__image, put = __cordl_internal_set__image)) ::UnityW<::HMUI::ImageView> _image;

  /// @brief Field _middleSprite, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__middleSprite, put = __cordl_internal_set__middleSprite)) ::UnityW<::UnityEngine::Sprite> _middleSprite;

  /// @brief Field _startSprite, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__startSprite, put = __cordl_internal_set__startSprite)) ::UnityW<::UnityEngine::Sprite> _startSprite;

  static inline ::GlobalNamespace::StartMiddleEndButtonBackgroundController* New_ctor();

  /// @brief Method SetEndSprite, addr 0x3c003b8, size 0x24, virtual false, abstract: false, final false
  inline void SetEndSprite();

  /// @brief Method SetMiddleSprite, addr 0x3c00394, size 0x24, virtual false, abstract: false, final false
  inline void SetMiddleSprite();

  /// @brief Method SetStartSprite, addr 0x3c00370, size 0x24, virtual false, abstract: false, final false
  inline void SetStartSprite();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__endSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__endSprite();

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__image() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__image();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__middleSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__middleSprite();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__startSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__startSprite();

  constexpr void __cordl_internal_set__endSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__image(::UnityW<::HMUI::ImageView> value);

  constexpr void __cordl_internal_set__middleSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__startSprite(::UnityW<::UnityEngine::Sprite> value);

  /// @brief Method .ctor, addr 0x3c003dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StartMiddleEndButtonBackgroundController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StartMiddleEndButtonBackgroundController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StartMiddleEndButtonBackgroundController(StartMiddleEndButtonBackgroundController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StartMiddleEndButtonBackgroundController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StartMiddleEndButtonBackgroundController(StartMiddleEndButtonBackgroundController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4767 };

  /// @brief Field _startSprite, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____startSprite;

  /// @brief Field _middleSprite, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____middleSprite;

  /// @brief Field _endSprite, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____endSprite;

  /// @brief Field _image, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____image;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StartMiddleEndButtonBackgroundController, ____startSprite) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StartMiddleEndButtonBackgroundController, ____middleSprite) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StartMiddleEndButtonBackgroundController, ____endSprite) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StartMiddleEndButtonBackgroundController, ____image) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StartMiddleEndButtonBackgroundController, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StartMiddleEndButtonBackgroundController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StartMiddleEndButtonBackgroundController*, "", "StartMiddleEndButtonBackgroundController");
