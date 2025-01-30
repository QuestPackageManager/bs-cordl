#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/BeatAvatarVisualController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatAvatarVisualController)
namespace BeatSaber::BeatAvatarSDK {
class AvatarData;
}
namespace BeatSaber::BeatAvatarSDK {
struct AvatarPart;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarPartsModel;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarPropertyBlockColorSetter;
}
namespace BeatSaber::BeatAvatarSDK {
class BeatAvatarVisualController_HighlighterDelegate;
}
namespace BeatSaber::BeatAvatarSDK {
class MulticolorAvatarPartPropertyBlockSetter;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
struct Color;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class SpriteRenderer;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class BeatAvatarVisualController;
}
namespace BeatSaber::BeatAvatarSDK {
class BeatAvatarVisualController_HighlighterDelegate;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController);
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate);
// Dependencies System.MulticastDelegate
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarSDK.BeatAvatarVisualController/HighlighterDelegate
class CORDL_TYPE BeatAvatarVisualController_HighlighterDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x225c020, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool highlighted, int32_t uvSegmentNumber, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x225c0e0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x225c008, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool highlighted, int32_t uvSegmentNumber);

  static inline ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x225b590, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatAvatarVisualController_HighlighterDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarVisualController_HighlighterDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatAvatarVisualController_HighlighterDelegate(BeatAvatarVisualController_HighlighterDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarVisualController_HighlighterDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatAvatarVisualController_HighlighterDelegate(BeatAvatarVisualController_HighlighterDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18159 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate, 0x80>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarSDK.BeatAvatarVisualController
class CORDL_TYPE BeatAvatarVisualController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using HighlighterDelegate = ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate;

  /// @brief Field _avatarData, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarData, put = __cordl_internal_set__avatarData)) ::BeatSaber::BeatAvatarSDK::AvatarData* _avatarData;

  /// @brief Field _avatarPartHighlightSetters, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarPartHighlightSetters, put = __cordl_internal_set__avatarPartHighlightSetters)) ::System::Collections::Generic::Dictionary_2<
      ::BeatSaber::BeatAvatarSDK::AvatarPart, ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*>* _avatarPartHighlightSetters;

  /// @brief Field _avatarPartsModel, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarPartsModel, put = __cordl_internal_set__avatarPartsModel)) ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* _avatarPartsModel;

  /// @brief Field _bodyMeshFilter, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__bodyMeshFilter, put = __cordl_internal_set__bodyMeshFilter)) ::UnityW<::UnityEngine::MeshFilter> _bodyMeshFilter;

  /// @brief Field _clothesPropertyBlockSetter, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__clothesPropertyBlockSetter,
                      put = __cordl_internal_set__clothesPropertyBlockSetter)) ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter>
      _clothesPropertyBlockSetter;

  /// @brief Field _currentHighlighter, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__currentHighlighter,
                      put = __cordl_internal_set__currentHighlighter)) ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate* _currentHighlighter;

  /// @brief Field _eyesSprite, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__eyesSprite, put = __cordl_internal_set__eyesSprite)) ::UnityW<::UnityEngine::SpriteRenderer> _eyesSprite;

  /// @brief Field _facialHairMeshFilter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__facialHairMeshFilter, put = __cordl_internal_set__facialHairMeshFilter)) ::UnityW<::UnityEngine::MeshFilter> _facialHairMeshFilter;

  /// @brief Field _facialHairPropertyBlockColorSetter, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__facialHairPropertyBlockColorSetter,
                      put = __cordl_internal_set__facialHairPropertyBlockColorSetter)) ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter>
      _facialHairPropertyBlockColorSetter;

  /// @brief Field _glassesMeshFilter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__glassesMeshFilter, put = __cordl_internal_set__glassesMeshFilter)) ::UnityW<::UnityEngine::MeshFilter> _glassesMeshFilter;

  /// @brief Field _glassesPropertyBlockColorSetter, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__glassesPropertyBlockColorSetter,
                      put = __cordl_internal_set__glassesPropertyBlockColorSetter)) ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter>
      _glassesPropertyBlockColorSetter;

  /// @brief Field _headTopMeshFilter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__headTopMeshFilter, put = __cordl_internal_set__headTopMeshFilter)) ::UnityW<::UnityEngine::MeshFilter> _headTopMeshFilter;

  /// @brief Field _headTopPropertyBlockColorSetter, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__headTopPropertyBlockColorSetter,
                      put = __cordl_internal_set__headTopPropertyBlockColorSetter)) ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter>
      _headTopPropertyBlockColorSetter;

  /// @brief Field _leftHandPropertyBlockSetter, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__leftHandPropertyBlockSetter,
                      put = __cordl_internal_set__leftHandPropertyBlockSetter)) ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter>
      _leftHandPropertyBlockSetter;

  /// @brief Field _leftHandsHairMeshFilter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__leftHandsHairMeshFilter, put = __cordl_internal_set__leftHandsHairMeshFilter)) ::UnityW<::UnityEngine::MeshFilter> _leftHandsHairMeshFilter;

  /// @brief Field _lightColor, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get__lightColor, put = __cordl_internal_set__lightColor)) ::UnityEngine::Color _lightColor;

  /// @brief Field _mouthSprite, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__mouthSprite, put = __cordl_internal_set__mouthSprite)) ::UnityW<::UnityEngine::SpriteRenderer> _mouthSprite;

  /// @brief Field _rightHandPropertyBlockSetter, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__rightHandPropertyBlockSetter,
                      put = __cordl_internal_set__rightHandPropertyBlockSetter)) ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter>
      _rightHandPropertyBlockSetter;

  /// @brief Field _rightHandsHairMeshFilter, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__rightHandsHairMeshFilter, put = __cordl_internal_set__rightHandsHairMeshFilter)) ::UnityW<::UnityEngine::MeshFilter> _rightHandsHairMeshFilter;

  /// @brief Field _skinPropertyBlockColorSetter, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__skinPropertyBlockColorSetter,
                      put = __cordl_internal_set__skinPropertyBlockColorSetter)) ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter>
      _skinPropertyBlockColorSetter;

  /// @brief Method Awake, addr 0x225b324, size 0x26c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method DisableEditedPartHighlight, addr 0x225bf6c, size 0x34, virtual false, abstract: false, final false
  inline void DisableEditedPartHighlight();

  /// @brief Method HighlightEditedPart, addr 0x225bed0, size 0x9c, virtual false, abstract: false, final false
  inline void HighlightEditedPart(::BeatSaber::BeatAvatarSDK::AvatarPart editPart, int32_t uvSegment);

  static inline ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController* New_ctor();

  /// @brief Method SetHandsHighlight, addr 0x225bfa0, size 0x48, virtual false, abstract: false, final false
  inline void SetHandsHighlight(bool highlighted, int32_t uvSegment);

  /// @brief Method SetLightColor, addr 0x225bcf4, size 0xc, virtual false, abstract: false, final false
  inline void SetLightColor(::UnityEngine::Color color);

  /// @brief Method UpdateAvatarColors, addr 0x225ba68, size 0x28c, virtual false, abstract: false, final false
  inline void UpdateAvatarColors();

  /// @brief Method UpdateAvatarVisual, addr 0x225b61c, size 0x44c, virtual false, abstract: false, final false
  inline void UpdateAvatarVisual(::BeatSaber::BeatAvatarSDK::AvatarData* avatarData);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarData* const& __cordl_internal_get__avatarData() const;

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarData*& __cordl_internal_get__avatarData();

  constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*>* const&
  __cordl_internal_get__avatarPartHighlightSetters() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*>*&
  __cordl_internal_get__avatarPartHighlightSetters();

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* const& __cordl_internal_get__avatarPartsModel() const;

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModel*& __cordl_internal_get__avatarPartsModel();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__bodyMeshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__bodyMeshFilter();

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter> const& __cordl_internal_get__clothesPropertyBlockSetter() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter>& __cordl_internal_get__clothesPropertyBlockSetter();

  constexpr ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate* const& __cordl_internal_get__currentHighlighter() const;

  constexpr ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*& __cordl_internal_get__currentHighlighter();

  constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__eyesSprite() const;

  constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__eyesSprite();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__facialHairMeshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__facialHairMeshFilter();

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter> const& __cordl_internal_get__facialHairPropertyBlockColorSetter() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter>& __cordl_internal_get__facialHairPropertyBlockColorSetter();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__glassesMeshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__glassesMeshFilter();

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter> const& __cordl_internal_get__glassesPropertyBlockColorSetter() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter>& __cordl_internal_get__glassesPropertyBlockColorSetter();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__headTopMeshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__headTopMeshFilter();

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter> const& __cordl_internal_get__headTopPropertyBlockColorSetter() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter>& __cordl_internal_get__headTopPropertyBlockColorSetter();

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter> const& __cordl_internal_get__leftHandPropertyBlockSetter() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter>& __cordl_internal_get__leftHandPropertyBlockSetter();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__leftHandsHairMeshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__leftHandsHairMeshFilter();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__lightColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__lightColor();

  constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__mouthSprite() const;

  constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__mouthSprite();

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter> const& __cordl_internal_get__rightHandPropertyBlockSetter() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter>& __cordl_internal_get__rightHandPropertyBlockSetter();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__rightHandsHairMeshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__rightHandsHairMeshFilter();

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter> const& __cordl_internal_get__skinPropertyBlockColorSetter() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter>& __cordl_internal_get__skinPropertyBlockColorSetter();

  constexpr void __cordl_internal_set__avatarData(::BeatSaber::BeatAvatarSDK::AvatarData* value);

  constexpr void __cordl_internal_set__avatarPartHighlightSetters(
      ::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*>* value);

  constexpr void __cordl_internal_set__avatarPartsModel(::BeatSaber::BeatAvatarSDK::AvatarPartsModel* value);

  constexpr void __cordl_internal_set__bodyMeshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set__clothesPropertyBlockSetter(::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter> value);

  constexpr void __cordl_internal_set__currentHighlighter(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate* value);

  constexpr void __cordl_internal_set__eyesSprite(::UnityW<::UnityEngine::SpriteRenderer> value);

  constexpr void __cordl_internal_set__facialHairMeshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set__facialHairPropertyBlockColorSetter(::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter> value);

  constexpr void __cordl_internal_set__glassesMeshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set__glassesPropertyBlockColorSetter(::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter> value);

  constexpr void __cordl_internal_set__headTopMeshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set__headTopPropertyBlockColorSetter(::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter> value);

  constexpr void __cordl_internal_set__leftHandPropertyBlockSetter(::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter> value);

  constexpr void __cordl_internal_set__leftHandsHairMeshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set__lightColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__mouthSprite(::UnityW<::UnityEngine::SpriteRenderer> value);

  constexpr void __cordl_internal_set__rightHandPropertyBlockSetter(::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter> value);

  constexpr void __cordl_internal_set__rightHandsHairMeshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set__skinPropertyBlockColorSetter(::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter> value);

  /// @brief Method .ctor, addr 0x225bff8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatAvatarVisualController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarVisualController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatAvatarVisualController(BeatAvatarVisualController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarVisualController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatAvatarVisualController(BeatAvatarVisualController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18160 };

  /// @brief Field _headTopMeshFilter, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ____headTopMeshFilter;

  /// @brief Field _glassesMeshFilter, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ____glassesMeshFilter;

  /// @brief Field _facialHairMeshFilter, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ____facialHairMeshFilter;

  /// @brief Field _leftHandsHairMeshFilter, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ____leftHandsHairMeshFilter;

  /// @brief Field _rightHandsHairMeshFilter, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ____rightHandsHairMeshFilter;

  /// @brief Field _eyesSprite, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SpriteRenderer> ____eyesSprite;

  /// @brief Field _mouthSprite, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SpriteRenderer> ____mouthSprite;

  /// @brief Field _bodyMeshFilter, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ____bodyMeshFilter;

  /// @brief Field _headTopPropertyBlockColorSetter, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter> ____headTopPropertyBlockColorSetter;

  /// @brief Field _glassesPropertyBlockColorSetter, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter> ____glassesPropertyBlockColorSetter;

  /// @brief Field _facialHairPropertyBlockColorSetter, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter> ____facialHairPropertyBlockColorSetter;

  /// @brief Field _skinPropertyBlockColorSetter, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter> ____skinPropertyBlockColorSetter;

  /// @brief Field _clothesPropertyBlockSetter, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter> ____clothesPropertyBlockSetter;

  /// @brief Field _leftHandPropertyBlockSetter, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter> ____leftHandPropertyBlockSetter;

  /// @brief Field _rightHandPropertyBlockSetter, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter> ____rightHandPropertyBlockSetter;

  /// @brief Field _avatarPartsModel, offset: 0x98, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* ____avatarPartsModel;

  /// @brief Field _avatarPartHighlightSetters, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*>* ____avatarPartHighlightSetters;

  /// @brief Field _lightColor, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Color ____lightColor;

  /// @brief Field _avatarData, offset: 0xb8, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarData* ____avatarData;

  /// @brief Field _currentHighlighter, offset: 0xc0, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate* ____currentHighlighter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____headTopMeshFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____glassesMeshFilter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____facialHairMeshFilter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____leftHandsHairMeshFilter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____rightHandsHairMeshFilter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____eyesSprite) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____mouthSprite) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____bodyMeshFilter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____headTopPropertyBlockColorSetter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____glassesPropertyBlockColorSetter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____facialHairPropertyBlockColorSetter) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____skinPropertyBlockColorSetter) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____clothesPropertyBlockSetter) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____leftHandPropertyBlockSetter) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____rightHandPropertyBlockSetter) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____avatarPartsModel) == 0x98, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____avatarPartHighlightSetters) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____lightColor) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____avatarData) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____currentHighlighter) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, 0xc8>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*, "BeatSaber.BeatAvatarSDK", "BeatAvatarVisualController");
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*, "BeatSaber.BeatAvatarSDK", "BeatAvatarVisualController/HighlighterDelegate");
