#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatAvatarVisualController)
namespace UnityEngine {
class SpriteRenderer;
}
namespace BeatSaber::BeatAvatarSDK {
class __BeatAvatarVisualController__HighlighterDelegate;
}
namespace BeatSaber::BeatAvatarSDK {
class MulticolorAvatarPartPropertyBlockSetter;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarPartsModel;
}
namespace BeatSaber::BeatAvatarSDK {
struct AvatarPart;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarPropertyBlockColorSetter;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
struct Color;
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
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class BeatAvatarVisualController;
}
namespace BeatSaber::BeatAvatarSDK {
class __BeatAvatarVisualController__HighlighterDelegate;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController);
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::__BeatAvatarVisualController__HighlighterDelegate);
// Type: ::HighlighterDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15694))
// CS Name: ::BeatAvatarVisualController::HighlighterDelegate*
class CORDL_TYPE __BeatAvatarVisualController__HighlighterDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::BeatSaber::BeatAvatarSDK::__BeatAvatarVisualController__HighlighterDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xe1b588, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0xe1c018, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool highlighted, int32_t uvSegmentNumber);

  /// @brief Method BeginInvoke, addr 0xe1c030, size 0xbc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool highlighted, int32_t uvSegmentNumber, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xe1c0ec, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatAvatarVisualController__HighlighterDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatAvatarVisualController__HighlighterDelegate(__BeatAvatarVisualController__HighlighterDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatAvatarVisualController__HighlighterDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatAvatarVisualController__HighlighterDelegate(__BeatAvatarVisualController__HighlighterDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatAvatarVisualController__HighlighterDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::__BeatAvatarVisualController__HighlighterDelegate, 0x80>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
// Type: BeatSaber.BeatAvatarSDK::BeatAvatarVisualController
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15695))
// CS Name: ::BeatSaber.BeatAvatarSDK::BeatAvatarVisualController*
class CORDL_TYPE BeatAvatarVisualController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using HighlighterDelegate = ::BeatSaber::BeatAvatarSDK::__BeatAvatarVisualController__HighlighterDelegate;

  /// @brief Field _headTopMeshFilter, offset 0x18, size 0x8
  __declspec(property(get = __get__headTopMeshFilter, put = __set__headTopMeshFilter))::UnityEngine::MeshFilter* _headTopMeshFilter;

  /// @brief Field _glassesMeshFilter, offset 0x20, size 0x8
  __declspec(property(get = __get__glassesMeshFilter, put = __set__glassesMeshFilter))::UnityEngine::MeshFilter* _glassesMeshFilter;

  /// @brief Field _facialHairMeshFilter, offset 0x28, size 0x8
  __declspec(property(get = __get__facialHairMeshFilter, put = __set__facialHairMeshFilter))::UnityEngine::MeshFilter* _facialHairMeshFilter;

  /// @brief Field _leftHandsHairMeshFilter, offset 0x30, size 0x8
  __declspec(property(get = __get__leftHandsHairMeshFilter, put = __set__leftHandsHairMeshFilter))::UnityEngine::MeshFilter* _leftHandsHairMeshFilter;

  /// @brief Field _rightHandsHairMeshFilter, offset 0x38, size 0x8
  __declspec(property(get = __get__rightHandsHairMeshFilter, put = __set__rightHandsHairMeshFilter))::UnityEngine::MeshFilter* _rightHandsHairMeshFilter;

  /// @brief Field _eyesSprite, offset 0x40, size 0x8
  __declspec(property(get = __get__eyesSprite, put = __set__eyesSprite))::UnityEngine::SpriteRenderer* _eyesSprite;

  /// @brief Field _mouthSprite, offset 0x48, size 0x8
  __declspec(property(get = __get__mouthSprite, put = __set__mouthSprite))::UnityEngine::SpriteRenderer* _mouthSprite;

  /// @brief Field _bodyMeshFilter, offset 0x50, size 0x8
  __declspec(property(get = __get__bodyMeshFilter, put = __set__bodyMeshFilter))::UnityEngine::MeshFilter* _bodyMeshFilter;

  /// @brief Field _headTopPropertyBlockColorSetter, offset 0x58, size 0x8
  __declspec(property(get = __get__headTopPropertyBlockColorSetter,
                      put = __set__headTopPropertyBlockColorSetter))::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter* _headTopPropertyBlockColorSetter;

  /// @brief Field _glassesPropertyBlockColorSetter, offset 0x60, size 0x8
  __declspec(property(get = __get__glassesPropertyBlockColorSetter,
                      put = __set__glassesPropertyBlockColorSetter))::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter* _glassesPropertyBlockColorSetter;

  /// @brief Field _facialHairPropertyBlockColorSetter, offset 0x68, size 0x8
  __declspec(property(get = __get__facialHairPropertyBlockColorSetter,
                      put = __set__facialHairPropertyBlockColorSetter))::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter* _facialHairPropertyBlockColorSetter;

  /// @brief Field _skinPropertyBlockColorSetter, offset 0x70, size 0x8
  __declspec(property(get = __get__skinPropertyBlockColorSetter, put = __set__skinPropertyBlockColorSetter))::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter* _skinPropertyBlockColorSetter;

  /// @brief Field _clothesPropertyBlockSetter, offset 0x78, size 0x8
  __declspec(property(get = __get__clothesPropertyBlockSetter,
                      put = __set__clothesPropertyBlockSetter))::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter* _clothesPropertyBlockSetter;

  /// @brief Field _leftHandPropertyBlockSetter, offset 0x80, size 0x8
  __declspec(property(get = __get__leftHandPropertyBlockSetter,
                      put = __set__leftHandPropertyBlockSetter))::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter* _leftHandPropertyBlockSetter;

  /// @brief Field _rightHandPropertyBlockSetter, offset 0x88, size 0x8
  __declspec(property(get = __get__rightHandPropertyBlockSetter,
                      put = __set__rightHandPropertyBlockSetter))::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter* _rightHandPropertyBlockSetter;

  /// @brief Field _avatarPartsModel, offset 0x90, size 0x8
  __declspec(property(get = __get__avatarPartsModel, put = __set__avatarPartsModel))::BeatSaber::BeatAvatarSDK::AvatarPartsModel* _avatarPartsModel;

  /// @brief Field _avatarPartHighlightSetters, offset 0x98, size 0x8
  __declspec(property(get = __get__avatarPartHighlightSetters, put = __set__avatarPartHighlightSetters))::System::Collections::Generic::Dictionary_2<
      ::BeatSaber::BeatAvatarSDK::AvatarPart, ::BeatSaber::BeatAvatarSDK::__BeatAvatarVisualController__HighlighterDelegate*>* _avatarPartHighlightSetters;

  /// @brief Field _lightColor, offset 0xa0, size 0x10
  __declspec(property(get = __get__lightColor, put = __set__lightColor))::UnityEngine::Color _lightColor;

  /// @brief Field _avatarData, offset 0xb0, size 0x8
  __declspec(property(get = __get__avatarData, put = __set__avatarData))::BeatSaber::BeatAvatarSDK::AvatarData* _avatarData;

  /// @brief Field _currentHighlighter, offset 0xb8, size 0x8
  __declspec(property(get = __get__currentHighlighter, put = __set__currentHighlighter))::BeatSaber::BeatAvatarSDK::__BeatAvatarVisualController__HighlighterDelegate* _currentHighlighter;

  constexpr ::UnityEngine::MeshFilter*& __get__headTopMeshFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& __get__headTopMeshFilter() const;

  constexpr void __set__headTopMeshFilter(::UnityEngine::MeshFilter* value);

  constexpr ::UnityEngine::MeshFilter*& __get__glassesMeshFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& __get__glassesMeshFilter() const;

  constexpr void __set__glassesMeshFilter(::UnityEngine::MeshFilter* value);

  constexpr ::UnityEngine::MeshFilter*& __get__facialHairMeshFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& __get__facialHairMeshFilter() const;

  constexpr void __set__facialHairMeshFilter(::UnityEngine::MeshFilter* value);

  constexpr ::UnityEngine::MeshFilter*& __get__leftHandsHairMeshFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& __get__leftHandsHairMeshFilter() const;

  constexpr void __set__leftHandsHairMeshFilter(::UnityEngine::MeshFilter* value);

  constexpr ::UnityEngine::MeshFilter*& __get__rightHandsHairMeshFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& __get__rightHandsHairMeshFilter() const;

  constexpr void __set__rightHandsHairMeshFilter(::UnityEngine::MeshFilter* value);

  constexpr ::UnityEngine::SpriteRenderer*& __get__eyesSprite();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> const& __get__eyesSprite() const;

  constexpr void __set__eyesSprite(::UnityEngine::SpriteRenderer* value);

  constexpr ::UnityEngine::SpriteRenderer*& __get__mouthSprite();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> const& __get__mouthSprite() const;

  constexpr void __set__mouthSprite(::UnityEngine::SpriteRenderer* value);

  constexpr ::UnityEngine::MeshFilter*& __get__bodyMeshFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& __get__bodyMeshFilter() const;

  constexpr void __set__bodyMeshFilter(::UnityEngine::MeshFilter* value);

  constexpr ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*& __get__headTopPropertyBlockColorSetter();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*> const& __get__headTopPropertyBlockColorSetter() const;

  constexpr void __set__headTopPropertyBlockColorSetter(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter*& __get__glassesPropertyBlockColorSetter();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter*> const& __get__glassesPropertyBlockColorSetter() const;

  constexpr void __set__glassesPropertyBlockColorSetter(::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter*& __get__facialHairPropertyBlockColorSetter();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter*> const& __get__facialHairPropertyBlockColorSetter() const;

  constexpr void __set__facialHairPropertyBlockColorSetter(::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter*& __get__skinPropertyBlockColorSetter();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter*> const& __get__skinPropertyBlockColorSetter() const;

  constexpr void __set__skinPropertyBlockColorSetter(::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter* value);

  constexpr ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*& __get__clothesPropertyBlockSetter();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*> const& __get__clothesPropertyBlockSetter() const;

  constexpr void __set__clothesPropertyBlockSetter(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter* value);

  constexpr ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*& __get__leftHandPropertyBlockSetter();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*> const& __get__leftHandPropertyBlockSetter() const;

  constexpr void __set__leftHandPropertyBlockSetter(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter* value);

  constexpr ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*& __get__rightHandPropertyBlockSetter();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*> const& __get__rightHandPropertyBlockSetter() const;

  constexpr void __set__rightHandPropertyBlockSetter(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModel*& __get__avatarPartsModel();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPartsModel*> const& __get__avatarPartsModel() const;

  constexpr void __set__avatarPartsModel(::BeatSaber::BeatAvatarSDK::AvatarPartsModel* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::BeatSaber::BeatAvatarSDK::__BeatAvatarVisualController__HighlighterDelegate*>*&
  __get__avatarPartHighlightSetters();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::BeatSaber::BeatAvatarSDK::__BeatAvatarVisualController__HighlighterDelegate*>*> const&
  __get__avatarPartHighlightSetters() const;

  constexpr void __set__avatarPartHighlightSetters(
      ::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::BeatSaber::BeatAvatarSDK::__BeatAvatarVisualController__HighlighterDelegate*>* value);

  constexpr ::UnityEngine::Color& __get__lightColor();

  constexpr ::UnityEngine::Color const& __get__lightColor() const;

  constexpr void __set__lightColor(::UnityEngine::Color value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarData*& __get__avatarData();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarData*> const& __get__avatarData() const;

  constexpr void __set__avatarData(::BeatSaber::BeatAvatarSDK::AvatarData* value);

  constexpr ::BeatSaber::BeatAvatarSDK::__BeatAvatarVisualController__HighlighterDelegate*& __get__currentHighlighter();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::__BeatAvatarVisualController__HighlighterDelegate*> const& __get__currentHighlighter() const;

  constexpr void __set__currentHighlighter(::BeatSaber::BeatAvatarSDK::__BeatAvatarVisualController__HighlighterDelegate* value);

  /// @brief Method Awake, addr 0xe1b2fc, size 0x28c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method UpdateAvatarVisual, addr 0xe1b64c, size 0x424, virtual false, abstract: false, final false
  inline void UpdateAvatarVisual(::BeatSaber::BeatAvatarSDK::AvatarData* avatarData);

  /// @brief Method SetLightColor, addr 0xe1bd04, size 0xc, virtual false, abstract: false, final false
  inline void SetLightColor(::UnityEngine::Color color);

  /// @brief Method UpdateAvatarColors, addr 0xe1ba70, size 0x294, virtual false, abstract: false, final false
  inline void UpdateAvatarColors();

  /// @brief Method HighlightEditedPart, addr 0xe1bee0, size 0x9c, virtual false, abstract: false, final false
  inline void HighlightEditedPart(::BeatSaber::BeatAvatarSDK::AvatarPart editPart, int32_t uvSegment);

  /// @brief Method DisableEditedPartHighlight, addr 0xe1bf7c, size 0x34, virtual false, abstract: false, final false
  inline void DisableEditedPartHighlight();

  /// @brief Method SetHandsHighlight, addr 0xe1bfb0, size 0x48, virtual false, abstract: false, final false
  inline void SetHandsHighlight(bool highlighted, int32_t uvSegment);

  static inline ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController* New_ctor();

  /// @brief Method .ctor, addr 0xe1c008, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarVisualController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatAvatarVisualController(BeatAvatarVisualController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarVisualController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatAvatarVisualController(BeatAvatarVisualController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatAvatarVisualController();

public:
  /// @brief Field _headTopMeshFilter, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::MeshFilter* ____headTopMeshFilter;

  /// @brief Field _glassesMeshFilter, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::MeshFilter* ____glassesMeshFilter;

  /// @brief Field _facialHairMeshFilter, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::MeshFilter* ____facialHairMeshFilter;

  /// @brief Field _leftHandsHairMeshFilter, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::MeshFilter* ____leftHandsHairMeshFilter;

  /// @brief Field _rightHandsHairMeshFilter, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::MeshFilter* ____rightHandsHairMeshFilter;

  /// @brief Field _eyesSprite, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::SpriteRenderer* ____eyesSprite;

  /// @brief Field _mouthSprite, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::SpriteRenderer* ____mouthSprite;

  /// @brief Field _bodyMeshFilter, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::MeshFilter* ____bodyMeshFilter;

  /// @brief Field _headTopPropertyBlockColorSetter, offset: 0x58, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter* ____headTopPropertyBlockColorSetter;

  /// @brief Field _glassesPropertyBlockColorSetter, offset: 0x60, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter* ____glassesPropertyBlockColorSetter;

  /// @brief Field _facialHairPropertyBlockColorSetter, offset: 0x68, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter* ____facialHairPropertyBlockColorSetter;

  /// @brief Field _skinPropertyBlockColorSetter, offset: 0x70, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter* ____skinPropertyBlockColorSetter;

  /// @brief Field _clothesPropertyBlockSetter, offset: 0x78, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter* ____clothesPropertyBlockSetter;

  /// @brief Field _leftHandPropertyBlockSetter, offset: 0x80, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter* ____leftHandPropertyBlockSetter;

  /// @brief Field _rightHandPropertyBlockSetter, offset: 0x88, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter* ____rightHandPropertyBlockSetter;

  /// @brief Field _avatarPartsModel, offset: 0x90, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* ____avatarPartsModel;

  /// @brief Field _avatarPartHighlightSetters, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::BeatSaber::BeatAvatarSDK::__BeatAvatarVisualController__HighlighterDelegate*>* ____avatarPartHighlightSetters;

  /// @brief Field _lightColor, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::Color ____lightColor;

  /// @brief Field _avatarData, offset: 0xb0, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarData* ____avatarData;

  /// @brief Field _currentHighlighter, offset: 0xb8, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::__BeatAvatarVisualController__HighlighterDelegate* ____currentHighlighter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, 0xc0>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____headTopMeshFilter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____glassesMeshFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____facialHairMeshFilter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____leftHandsHairMeshFilter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____rightHandsHairMeshFilter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____eyesSprite) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____mouthSprite) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____bodyMeshFilter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____headTopPropertyBlockColorSetter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____glassesPropertyBlockColorSetter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____facialHairPropertyBlockColorSetter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____skinPropertyBlockColorSetter) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____clothesPropertyBlockSetter) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____leftHandPropertyBlockSetter) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____rightHandPropertyBlockSetter) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____avatarPartsModel) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____avatarPartHighlightSetters) == 0x98, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____lightColor) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____avatarData) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController, ____currentHighlighter) == 0xb8, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*, "BeatSaber.BeatAvatarSDK", "BeatAvatarVisualController");
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::__BeatAvatarVisualController__HighlighterDelegate);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::__BeatAvatarVisualController__HighlighterDelegate*, "BeatSaber.BeatAvatarSDK", "BeatAvatarVisualController/HighlighterDelegate");
