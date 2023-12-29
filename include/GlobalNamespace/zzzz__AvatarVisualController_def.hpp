#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarVisualController)
namespace GlobalNamespace {
class AvatarPartsModel;
}
namespace GlobalNamespace {
class MulticolorAvatarPartPropertyBlockSetter;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class AvatarData;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct __EditAvatarViewController__AvatarEditPart;
}
namespace GlobalNamespace {
class AvatarPropertyBlockColorSetter;
}
namespace GlobalNamespace {
class __AvatarVisualController__HighlighterDelegate;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarVisualController;
}
namespace GlobalNamespace {
class __AvatarVisualController__HighlighterDelegate;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarVisualController);
MARK_REF_PTR_T(::GlobalNamespace::__AvatarVisualController__HighlighterDelegate);
// Type: ::HighlighterDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4087))
// CS Name: ::AvatarVisualController::HighlighterDelegate*
class CORDL_TYPE __AvatarVisualController__HighlighterDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__AvatarVisualController__HighlighterDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x20d4f14 size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x20d58d8 size 0x18 virtual true final false
  inline void Invoke(bool highlighted, int32_t uvSegmentNumber);

  /// @brief Method BeginInvoke addr 0x20d58f0 size 0xbc virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(bool highlighted, int32_t uvSegmentNumber, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x20d59ac size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarVisualController__HighlighterDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AvatarVisualController__HighlighterDelegate(__AvatarVisualController__HighlighterDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarVisualController__HighlighterDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AvatarVisualController__HighlighterDelegate(__AvatarVisualController__HighlighterDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AvatarVisualController__HighlighterDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AvatarVisualController__HighlighterDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::AvatarVisualController
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10178)), TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4088))
// CS Name: ::AvatarVisualController*
class CORDL_TYPE AvatarVisualController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using HighlighterDelegate = ::GlobalNamespace::__AvatarVisualController__HighlighterDelegate;

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
                      put = __set__headTopPropertyBlockColorSetter))::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* _headTopPropertyBlockColorSetter;

  /// @brief Field _glassesPropertyBlockColorSetter, offset 0x60, size 0x8
  __declspec(property(get = __get__glassesPropertyBlockColorSetter, put = __set__glassesPropertyBlockColorSetter))::GlobalNamespace::AvatarPropertyBlockColorSetter* _glassesPropertyBlockColorSetter;

  /// @brief Field _facialHairPropertyBlockColorSetter, offset 0x68, size 0x8
  __declspec(property(get = __get__facialHairPropertyBlockColorSetter,
                      put = __set__facialHairPropertyBlockColorSetter))::GlobalNamespace::AvatarPropertyBlockColorSetter* _facialHairPropertyBlockColorSetter;

  /// @brief Field _skinPropertyBlockColorSetter, offset 0x70, size 0x8
  __declspec(property(get = __get__skinPropertyBlockColorSetter, put = __set__skinPropertyBlockColorSetter))::GlobalNamespace::AvatarPropertyBlockColorSetter* _skinPropertyBlockColorSetter;

  /// @brief Field _clothesPropertyBlockSetter, offset 0x78, size 0x8
  __declspec(property(get = __get__clothesPropertyBlockSetter, put = __set__clothesPropertyBlockSetter))::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* _clothesPropertyBlockSetter;

  /// @brief Field _leftHandPropertyBlockSetter, offset 0x80, size 0x8
  __declspec(property(get = __get__leftHandPropertyBlockSetter, put = __set__leftHandPropertyBlockSetter))::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* _leftHandPropertyBlockSetter;

  /// @brief Field _rightHandPropertyBlockSetter, offset 0x88, size 0x8
  __declspec(property(get = __get__rightHandPropertyBlockSetter, put = __set__rightHandPropertyBlockSetter))::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* _rightHandPropertyBlockSetter;

  /// @brief Field _avatarPartsModel, offset 0x90, size 0x8
  __declspec(property(get = __get__avatarPartsModel, put = __set__avatarPartsModel))::GlobalNamespace::AvatarPartsModel* _avatarPartsModel;

  /// @brief Field _avatarPartHighlightSetters, offset 0x98, size 0x8
  __declspec(property(get = __get__avatarPartHighlightSetters, put = __set__avatarPartHighlightSetters))::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, ::GlobalNamespace::__AvatarVisualController__HighlighterDelegate*>* _avatarPartHighlightSetters;

  /// @brief Field _lightColor, offset 0xa0, size 0x10
  __declspec(property(get = __get__lightColor, put = __set__lightColor))::UnityEngine::Color _lightColor;

  /// @brief Field _avatarData, offset 0xb0, size 0x8
  __declspec(property(get = __get__avatarData, put = __set__avatarData))::GlobalNamespace::AvatarData* _avatarData;

  /// @brief Field _currentHighlighter, offset 0xb8, size 0x8
  __declspec(property(get = __get__currentHighlighter, put = __set__currentHighlighter))::GlobalNamespace::__AvatarVisualController__HighlighterDelegate* _currentHighlighter;

  __declspec(property(get = get_lightColor))::UnityEngine::Color lightColor;

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

  constexpr ::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*& __get__headTopPropertyBlockColorSetter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*> const& __get__headTopPropertyBlockColorSetter() const;

  constexpr void __set__headTopPropertyBlockColorSetter(::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* value);

  constexpr ::GlobalNamespace::AvatarPropertyBlockColorSetter*& __get__glassesPropertyBlockColorSetter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPropertyBlockColorSetter*> const& __get__glassesPropertyBlockColorSetter() const;

  constexpr void __set__glassesPropertyBlockColorSetter(::GlobalNamespace::AvatarPropertyBlockColorSetter* value);

  constexpr ::GlobalNamespace::AvatarPropertyBlockColorSetter*& __get__facialHairPropertyBlockColorSetter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPropertyBlockColorSetter*> const& __get__facialHairPropertyBlockColorSetter() const;

  constexpr void __set__facialHairPropertyBlockColorSetter(::GlobalNamespace::AvatarPropertyBlockColorSetter* value);

  constexpr ::GlobalNamespace::AvatarPropertyBlockColorSetter*& __get__skinPropertyBlockColorSetter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPropertyBlockColorSetter*> const& __get__skinPropertyBlockColorSetter() const;

  constexpr void __set__skinPropertyBlockColorSetter(::GlobalNamespace::AvatarPropertyBlockColorSetter* value);

  constexpr ::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*& __get__clothesPropertyBlockSetter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*> const& __get__clothesPropertyBlockSetter() const;

  constexpr void __set__clothesPropertyBlockSetter(::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* value);

  constexpr ::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*& __get__leftHandPropertyBlockSetter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*> const& __get__leftHandPropertyBlockSetter() const;

  constexpr void __set__leftHandPropertyBlockSetter(::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* value);

  constexpr ::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*& __get__rightHandPropertyBlockSetter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*> const& __get__rightHandPropertyBlockSetter() const;

  constexpr void __set__rightHandPropertyBlockSetter(::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* value);

  constexpr ::GlobalNamespace::AvatarPartsModel*& __get__avatarPartsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPartsModel*> const& __get__avatarPartsModel() const;

  constexpr void __set__avatarPartsModel(::GlobalNamespace::AvatarPartsModel* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, ::GlobalNamespace::__AvatarVisualController__HighlighterDelegate*>*&
  __get__avatarPartHighlightSetters();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, ::GlobalNamespace::__AvatarVisualController__HighlighterDelegate*>*> const&
  __get__avatarPartHighlightSetters() const;

  constexpr void __set__avatarPartHighlightSetters(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, ::GlobalNamespace::__AvatarVisualController__HighlighterDelegate*>* value);

  constexpr ::UnityEngine::Color& __get__lightColor();

  constexpr ::UnityEngine::Color const& __get__lightColor() const;

  constexpr void __set__lightColor(::UnityEngine::Color value);

  constexpr ::GlobalNamespace::AvatarData*& __get__avatarData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarData*> const& __get__avatarData() const;

  constexpr void __set__avatarData(::GlobalNamespace::AvatarData* value);

  constexpr ::GlobalNamespace::__AvatarVisualController__HighlighterDelegate*& __get__currentHighlighter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AvatarVisualController__HighlighterDelegate*> const& __get__currentHighlighter() const;

  constexpr void __set__currentHighlighter(::GlobalNamespace::__AvatarVisualController__HighlighterDelegate* value);

  /// @brief Method get_lightColor addr 0x20d4c7c size 0xc virtual false final false
  inline ::UnityEngine::Color get_lightColor();

  /// @brief Method Awake addr 0x20d4c88 size 0x28c virtual false final false
  inline void Awake();

  /// @brief Method UpdateAvatarVisual addr 0x20d4fd8 size 0x354 virtual false final false
  inline void UpdateAvatarVisual(::GlobalNamespace::AvatarData* avatarData);

  /// @brief Method SetLightColor addr 0x20d55c4 size 0xc virtual false final false
  inline void SetLightColor(::UnityEngine::Color color);

  /// @brief Method UpdateAvatarColors addr 0x20d532c size 0x298 virtual false final false
  inline void UpdateAvatarColors();

  /// @brief Method HighlightEditedPart addr 0x20d57a0 size 0x9c virtual false final false
  inline void HighlightEditedPart(::GlobalNamespace::__EditAvatarViewController__AvatarEditPart editPart, int32_t uvSegment);

  /// @brief Method DisableEditedPartHighlight addr 0x20d583c size 0x34 virtual false final false
  inline void DisableEditedPartHighlight();

  /// @brief Method SetHandsHighlight addr 0x20d5870 size 0x48 virtual false final false
  inline void SetHandsHighlight(bool highlighted, int32_t uvSegment);

  static inline ::GlobalNamespace::AvatarVisualController* New_ctor();

  /// @brief Method .ctor addr 0x20d58c8 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarVisualController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarVisualController(AvatarVisualController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarVisualController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarVisualController(AvatarVisualController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarVisualController();

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
  ::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* ____headTopPropertyBlockColorSetter;

  /// @brief Field _glassesPropertyBlockColorSetter, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::AvatarPropertyBlockColorSetter* ____glassesPropertyBlockColorSetter;

  /// @brief Field _facialHairPropertyBlockColorSetter, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::AvatarPropertyBlockColorSetter* ____facialHairPropertyBlockColorSetter;

  /// @brief Field _skinPropertyBlockColorSetter, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::AvatarPropertyBlockColorSetter* ____skinPropertyBlockColorSetter;

  /// @brief Field _clothesPropertyBlockSetter, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* ____clothesPropertyBlockSetter;

  /// @brief Field _leftHandPropertyBlockSetter, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* ____leftHandPropertyBlockSetter;

  /// @brief Field _rightHandPropertyBlockSetter, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* ____rightHandPropertyBlockSetter;

  /// @brief Field _avatarPartsModel, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::AvatarPartsModel* ____avatarPartsModel;

  /// @brief Field _avatarPartHighlightSetters, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, ::GlobalNamespace::__AvatarVisualController__HighlighterDelegate*>*
      ____avatarPartHighlightSetters;

  /// @brief Field _lightColor, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::Color ____lightColor;

  /// @brief Field _avatarData, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::AvatarData* ____avatarData;

  /// @brief Field _currentHighlighter, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::__AvatarVisualController__HighlighterDelegate* ____currentHighlighter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarVisualController, 0xc0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarVisualController, ____headTopMeshFilter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarVisualController, ____glassesMeshFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarVisualController, ____facialHairMeshFilter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarVisualController, ____leftHandsHairMeshFilter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarVisualController, ____rightHandsHairMeshFilter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarVisualController, ____eyesSprite) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarVisualController, ____mouthSprite) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarVisualController, ____bodyMeshFilter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarVisualController, ____headTopPropertyBlockColorSetter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarVisualController, ____glassesPropertyBlockColorSetter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarVisualController, ____facialHairPropertyBlockColorSetter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarVisualController, ____skinPropertyBlockColorSetter) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarVisualController, ____clothesPropertyBlockSetter) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarVisualController, ____leftHandPropertyBlockSetter) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarVisualController, ____rightHandPropertyBlockSetter) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarVisualController, ____avatarPartsModel) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarVisualController, ____avatarPartHighlightSetters) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarVisualController, ____lightColor) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarVisualController, ____avatarData) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarVisualController, ____currentHighlighter) == 0xb8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarVisualController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarVisualController*, "", "AvatarVisualController");
NEED_NO_BOX(::GlobalNamespace::__AvatarVisualController__HighlighterDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AvatarVisualController__HighlighterDelegate*, "", "AvatarVisualController/HighlighterDelegate");
