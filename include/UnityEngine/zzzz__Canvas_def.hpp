#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Canvas)
namespace UnityEngine {
struct Vector2;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct AdditionalCanvasShaderChannels;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class __Canvas__WillRenderCanvases;
}
namespace UnityEngine {
class Camera;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
struct RenderMode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class __Canvas__WillRenderCanvases;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Canvas);
MARK_REF_PTR_T(::UnityEngine::__Canvas__WillRenderCanvases);
// Type: ::WillRenderCanvases
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15661))
// CS Name: ::Canvas::WillRenderCanvases*
class CORDL_TYPE __Canvas__WillRenderCanvases : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::__Canvas__WillRenderCanvases* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2eab5a4 size 0xbc virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2eab660 size 0x14 virtual true final false
  inline void Invoke();

  // Ctor Parameters [CppParam { name: "", ty: "__Canvas__WillRenderCanvases", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Canvas__WillRenderCanvases(__Canvas__WillRenderCanvases&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Canvas__WillRenderCanvases", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Canvas__WillRenderCanvases(__Canvas__WillRenderCanvases const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Canvas__WillRenderCanvases();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Canvas__WillRenderCanvases, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::Canvas
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10187))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15662))
// CS Name: ::UnityEngine::Canvas*
class CORDL_TYPE Canvas : public ::UnityEngine::Behaviour {
public:
  // Declarations
  using WillRenderCanvases = ::UnityEngine::__Canvas__WillRenderCanvases;

  /// @brief Field preWillRenderCanvases, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_preWillRenderCanvases, put = setStaticF_preWillRenderCanvases))::UnityEngine::__Canvas__WillRenderCanvases* preWillRenderCanvases;

  /// @brief Field willRenderCanvases, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_willRenderCanvases, put = setStaticF_willRenderCanvases))::UnityEngine::__Canvas__WillRenderCanvases* willRenderCanvases;

  /// @brief Field <externBeginRenderOverlays>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__externBeginRenderOverlays_k__BackingField,
                             put = setStaticF__externBeginRenderOverlays_k__BackingField))::System::Action_1<int32_t>* _externBeginRenderOverlays_k__BackingField;

  /// @brief Field <externRenderOverlaysBefore>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__externRenderOverlaysBefore_k__BackingField,
                             put = setStaticF__externRenderOverlaysBefore_k__BackingField))::System::Action_2<int32_t, int32_t>* _externRenderOverlaysBefore_k__BackingField;

  /// @brief Field <externEndRenderOverlays>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__externEndRenderOverlays_k__BackingField,
                             put = setStaticF__externEndRenderOverlays_k__BackingField))::System::Action_1<int32_t>* _externEndRenderOverlays_k__BackingField;

  __declspec(property(get = get_renderMode, put = set_renderMode))::UnityEngine::RenderMode renderMode;

  __declspec(property(get = get_isRootCanvas)) bool isRootCanvas;

  __declspec(property(get = get_pixelRect))::UnityEngine::Rect pixelRect;

  __declspec(property(get = get_scaleFactor, put = set_scaleFactor)) float_t scaleFactor;

  __declspec(property(get = get_referencePixelsPerUnit, put = set_referencePixelsPerUnit)) float_t referencePixelsPerUnit;

  __declspec(property(get = get_overridePixelPerfect, put = set_overridePixelPerfect)) bool overridePixelPerfect;

  __declspec(property(get = get_pixelPerfect, put = set_pixelPerfect)) bool pixelPerfect;

  __declspec(property(get = get_planeDistance, put = set_planeDistance)) float_t planeDistance;

  __declspec(property(get = get_renderOrder)) int32_t renderOrder;

  __declspec(property(get = get_overrideSorting, put = set_overrideSorting)) bool overrideSorting;

  __declspec(property(get = get_sortingOrder, put = set_sortingOrder)) int32_t sortingOrder;

  __declspec(property(get = get_targetDisplay, put = set_targetDisplay)) int32_t targetDisplay;

  __declspec(property(get = get_sortingLayerID, put = set_sortingLayerID)) int32_t sortingLayerID;

  __declspec(property(get = get_cachedSortingLayerValue)) int32_t cachedSortingLayerValue;

  __declspec(property(get = get_additionalShaderChannels, put = set_additionalShaderChannels))::UnityEngine::AdditionalCanvasShaderChannels additionalShaderChannels;

  __declspec(property(get = get_sortingLayerName, put = set_sortingLayerName))::StringW sortingLayerName;

  __declspec(property(get = get_rootCanvas))::UnityEngine::Canvas* rootCanvas;

  __declspec(property(get = get_renderingDisplaySize))::UnityEngine::Vector2 renderingDisplaySize;

  __declspec(property(get = get_worldCamera, put = set_worldCamera))::UnityEngine::Camera* worldCamera;

  __declspec(property(get = get_normalizedSortingGridSize, put = set_normalizedSortingGridSize)) float_t normalizedSortingGridSize;

  __declspec(property(get = get_sortingGridNormalizedSize, put = set_sortingGridNormalizedSize)) int32_t sortingGridNormalizedSize;

  static inline void setStaticF_preWillRenderCanvases(::UnityEngine::__Canvas__WillRenderCanvases* value);

  static inline ::UnityEngine::__Canvas__WillRenderCanvases* getStaticF_preWillRenderCanvases();

  static inline void setStaticF_willRenderCanvases(::UnityEngine::__Canvas__WillRenderCanvases* value);

  static inline ::UnityEngine::__Canvas__WillRenderCanvases* getStaticF_willRenderCanvases();

  static inline void setStaticF__externBeginRenderOverlays_k__BackingField(::System::Action_1<int32_t>* value);

  static inline ::System::Action_1<int32_t>* getStaticF__externBeginRenderOverlays_k__BackingField();

  static inline void setStaticF__externRenderOverlaysBefore_k__BackingField(::System::Action_2<int32_t, int32_t>* value);

  static inline ::System::Action_2<int32_t, int32_t>* getStaticF__externRenderOverlaysBefore_k__BackingField();

  static inline void setStaticF__externEndRenderOverlays_k__BackingField(::System::Action_1<int32_t>* value);

  static inline ::System::Action_1<int32_t>* getStaticF__externEndRenderOverlays_k__BackingField();

  /// @brief Method add_preWillRenderCanvases addr 0x2eaa420 size 0xb8 virtual false final false
  static inline void add_preWillRenderCanvases(::UnityEngine::__Canvas__WillRenderCanvases* value);

  /// @brief Method remove_preWillRenderCanvases addr 0x2eaa4d8 size 0xb8 virtual false final false
  static inline void remove_preWillRenderCanvases(::UnityEngine::__Canvas__WillRenderCanvases* value);

  /// @brief Method add_willRenderCanvases addr 0x2eaa590 size 0xbc virtual false final false
  static inline void add_willRenderCanvases(::UnityEngine::__Canvas__WillRenderCanvases* value);

  /// @brief Method remove_willRenderCanvases addr 0x2eaa64c size 0xbc virtual false final false
  static inline void remove_willRenderCanvases(::UnityEngine::__Canvas__WillRenderCanvases* value);

  /// @brief Method get_renderMode addr 0x2eaa708 size 0x3c virtual false final false
  inline ::UnityEngine::RenderMode get_renderMode();

  /// @brief Method set_renderMode addr 0x2eaa744 size 0x44 virtual false final false
  inline void set_renderMode(::UnityEngine::RenderMode value);

  /// @brief Method get_isRootCanvas addr 0x2eaa788 size 0x3c virtual false final false
  inline bool get_isRootCanvas();

  /// @brief Method get_pixelRect addr 0x2eaa7c4 size 0x58 virtual false final false
  inline ::UnityEngine::Rect get_pixelRect();

  /// @brief Method get_scaleFactor addr 0x2eaa860 size 0x3c virtual false final false
  inline float_t get_scaleFactor();

  /// @brief Method set_scaleFactor addr 0x2eaa89c size 0x4c virtual false final false
  inline void set_scaleFactor(float_t value);

  /// @brief Method get_referencePixelsPerUnit addr 0x2eaa8e8 size 0x3c virtual false final false
  inline float_t get_referencePixelsPerUnit();

  /// @brief Method set_referencePixelsPerUnit addr 0x2eaa924 size 0x4c virtual false final false
  inline void set_referencePixelsPerUnit(float_t value);

  /// @brief Method get_overridePixelPerfect addr 0x2eaa970 size 0x3c virtual false final false
  inline bool get_overridePixelPerfect();

  /// @brief Method set_overridePixelPerfect addr 0x2eaa9ac size 0x44 virtual false final false
  inline void set_overridePixelPerfect(bool value);

  /// @brief Method get_pixelPerfect addr 0x2eaa9f0 size 0x3c virtual false final false
  inline bool get_pixelPerfect();

  /// @brief Method set_pixelPerfect addr 0x2eaaa2c size 0x44 virtual false final false
  inline void set_pixelPerfect(bool value);

  /// @brief Method get_planeDistance addr 0x2eaaa70 size 0x3c virtual false final false
  inline float_t get_planeDistance();

  /// @brief Method set_planeDistance addr 0x2eaaaac size 0x4c virtual false final false
  inline void set_planeDistance(float_t value);

  /// @brief Method get_renderOrder addr 0x2eaaaf8 size 0x3c virtual false final false
  inline int32_t get_renderOrder();

  /// @brief Method get_overrideSorting addr 0x2eaab34 size 0x3c virtual false final false
  inline bool get_overrideSorting();

  /// @brief Method set_overrideSorting addr 0x2eaab70 size 0x44 virtual false final false
  inline void set_overrideSorting(bool value);

  /// @brief Method get_sortingOrder addr 0x2eaabb4 size 0x3c virtual false final false
  inline int32_t get_sortingOrder();

  /// @brief Method set_sortingOrder addr 0x2eaabf0 size 0x44 virtual false final false
  inline void set_sortingOrder(int32_t value);

  /// @brief Method get_targetDisplay addr 0x2eaac34 size 0x3c virtual false final false
  inline int32_t get_targetDisplay();

  /// @brief Method set_targetDisplay addr 0x2eaac70 size 0x44 virtual false final false
  inline void set_targetDisplay(int32_t value);

  /// @brief Method get_sortingLayerID addr 0x2eaacb4 size 0x3c virtual false final false
  inline int32_t get_sortingLayerID();

  /// @brief Method set_sortingLayerID addr 0x2eaacf0 size 0x44 virtual false final false
  inline void set_sortingLayerID(int32_t value);

  /// @brief Method get_cachedSortingLayerValue addr 0x2eaad34 size 0x3c virtual false final false
  inline int32_t get_cachedSortingLayerValue();

  /// @brief Method get_additionalShaderChannels addr 0x2eaad70 size 0x3c virtual false final false
  inline ::UnityEngine::AdditionalCanvasShaderChannels get_additionalShaderChannels();

  /// @brief Method set_additionalShaderChannels addr 0x2eaadac size 0x44 virtual false final false
  inline void set_additionalShaderChannels(::UnityEngine::AdditionalCanvasShaderChannels value);

  /// @brief Method get_sortingLayerName addr 0x2eaadf0 size 0x3c virtual false final false
  inline ::StringW get_sortingLayerName();

  /// @brief Method set_sortingLayerName addr 0x2eaae2c size 0x44 virtual false final false
  inline void set_sortingLayerName(::StringW value);

  /// @brief Method get_rootCanvas addr 0x2eaae70 size 0x3c virtual false final false
  inline ::UnityEngine::Canvas* get_rootCanvas();

  /// @brief Method get_renderingDisplaySize addr 0x2eaaeac size 0x4c virtual false final false
  inline ::UnityEngine::Vector2 get_renderingDisplaySize();

  /// @brief Method get_externBeginRenderOverlays addr 0x2eaaf3c size 0x48 virtual false final false
  static inline ::System::Action_1<int32_t>* get_externBeginRenderOverlays();

  /// @brief Method set_externBeginRenderOverlays addr 0x2eaaf84 size 0x4c virtual false final false
  static inline void set_externBeginRenderOverlays(::System::Action_1<int32_t>* value);

  /// @brief Method get_externRenderOverlaysBefore addr 0x2eaafd0 size 0x48 virtual false final false
  static inline ::System::Action_2<int32_t, int32_t>* get_externRenderOverlaysBefore();

  /// @brief Method set_externRenderOverlaysBefore addr 0x2eab018 size 0x4c virtual false final false
  static inline void set_externRenderOverlaysBefore(::System::Action_2<int32_t, int32_t>* value);

  /// @brief Method get_externEndRenderOverlays addr 0x2eab064 size 0x48 virtual false final false
  static inline ::System::Action_1<int32_t>* get_externEndRenderOverlays();

  /// @brief Method set_externEndRenderOverlays addr 0x2eab0ac size 0x4c virtual false final false
  static inline void set_externEndRenderOverlays(::System::Action_1<int32_t>* value);

  /// @brief Method SetExternalCanvasEnabled addr 0x2eab0f8 size 0x3c virtual false final false
  static inline void SetExternalCanvasEnabled(bool enabled);

  /// @brief Method get_worldCamera addr 0x2eab134 size 0x3c virtual false final false
  inline ::UnityEngine::Camera* get_worldCamera();

  /// @brief Method set_worldCamera addr 0x2eab170 size 0x44 virtual false final false
  inline void set_worldCamera(::UnityEngine::Camera* value);

  /// @brief Method get_normalizedSortingGridSize addr 0x2eab1b4 size 0x3c virtual false final false
  inline float_t get_normalizedSortingGridSize();

  /// @brief Method set_normalizedSortingGridSize addr 0x2eab1f0 size 0x4c virtual false final false
  inline void set_normalizedSortingGridSize(float_t value);

  /// @brief Method get_sortingGridNormalizedSize addr 0x2eab23c size 0x3c virtual false final false
  inline int32_t get_sortingGridNormalizedSize();

  /// @brief Method set_sortingGridNormalizedSize addr 0x2eab278 size 0x44 virtual false final false
  inline void set_sortingGridNormalizedSize(int32_t value);

  /// @brief Method GetDefaultCanvasTextMaterial addr 0x2eab2bc size 0x28 virtual false final false
  static inline ::UnityEngine::Material* GetDefaultCanvasTextMaterial();

  /// @brief Method GetDefaultCanvasMaterial addr 0x2eab2e4 size 0x28 virtual false final false
  static inline ::UnityEngine::Material* GetDefaultCanvasMaterial();

  /// @brief Method GetETC1SupportedCanvasMaterial addr 0x2eab30c size 0x28 virtual false final false
  static inline ::UnityEngine::Material* GetETC1SupportedCanvasMaterial();

  /// @brief Method UpdateCanvasRectTransform addr 0x2eab334 size 0x44 virtual false final false
  inline void UpdateCanvasRectTransform(bool alignWithCamera);

  /// @brief Method ForceUpdateCanvases addr 0x2eab378 size 0x10 virtual false final false
  static inline void ForceUpdateCanvases();

  /// @brief Method SendPreWillRenderCanvases addr 0x2eab388 size 0x64 virtual false final false
  static inline void SendPreWillRenderCanvases();

  /// @brief Method SendWillRenderCanvases addr 0x2eab3ec size 0x64 virtual false final false
  static inline void SendWillRenderCanvases();

  /// @brief Method BeginRenderExtraOverlays addr 0x2eab450 size 0x6c virtual false final false
  static inline void BeginRenderExtraOverlays(int32_t displayIndex);

  /// @brief Method RenderExtraOverlaysBefore addr 0x2eab4bc size 0x74 virtual false final false
  static inline void RenderExtraOverlaysBefore(int32_t displayIndex, int32_t sortingOrder);

  /// @brief Method EndRenderExtraOverlays addr 0x2eab530 size 0x6c virtual false final false
  static inline void EndRenderExtraOverlays(int32_t displayIndex);

  static inline ::UnityEngine::Canvas* New_ctor();

  /// @brief Method .ctor addr 0x2eab59c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_pixelRect_Injected addr 0x2eaa81c size 0x44 virtual false final false
  inline void get_pixelRect_Injected(ByRef<::UnityEngine::Rect> ret);

  /// @brief Method get_renderingDisplaySize_Injected addr 0x2eaaef8 size 0x44 virtual false final false
  inline void get_renderingDisplaySize_Injected(ByRef<::UnityEngine::Vector2> ret);

  // Ctor Parameters [CppParam { name: "", ty: "Canvas", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Canvas(Canvas&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Canvas", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Canvas(Canvas const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Canvas();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Canvas, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Canvas);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Canvas*, "UnityEngine", "Canvas");
NEED_NO_BOX(::UnityEngine::__Canvas__WillRenderCanvases);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Canvas__WillRenderCanvases*, "UnityEngine", "Canvas/WillRenderCanvases");
