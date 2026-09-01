#pragma once
// IWYU pragma private; include "GlobalNamespace\LightColorEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightColorEventHandler)
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
class IBpmController;
}
namespace GlobalNamespace {
class LightColorBeatmapEventData;
}
namespace GlobalNamespace {
class LightColorEventHandler_GetColorDelegate;
}
namespace GlobalNamespace {
class LightColorEventHandler_InitData;
}
namespace GlobalNamespace {
class LightWithIdManager;
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
namespace Tweening {
class FloatTween;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorEventHandler;
}
namespace GlobalNamespace {
class LightColorEventHandler_GetColorDelegate;
}
namespace GlobalNamespace {
class LightColorEventHandler_InitData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LightColorEventHandler*);
MARK_REF_T(::GlobalNamespace::LightColorEventHandler_GetColorDelegate*);
MARK_REF_T(::GlobalNamespace::LightColorEventHandler_InitData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightColorEventHandler*, "", "LightColorEventHandler");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightColorEventHandler_GetColorDelegate*, "", "LightColorEventHandler/GetColorDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightColorEventHandler_InitData*, "", "LightColorEventHandler/InitData");
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightColorEventHandler/GetColorDelegate
class CORDL_TYPE LightColorEventHandler_GetColorDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x59936c4, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5993784, size 0x28, virtual true, abstract: false, final false
  inline ::UnityEngine::Color EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x59936b0, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::Color Invoke(::GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness);

  static inline ::GlobalNamespace::LightColorEventHandler_GetColorDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5991a88, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorEventHandler_GetColorDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightColorEventHandler_GetColorDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorEventHandler_GetColorDelegate(LightColorEventHandler_GetColorDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorEventHandler_GetColorDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorEventHandler_GetColorDelegate(LightColorEventHandler_GetColorDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5837 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LightColorEventHandler_GetColorDelegate) == 0x80, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightColorEventHandler/InitData
class CORDL_TYPE LightColorEventHandler_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field bpmController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_bpmController, put = __cordl_internal_set_bpmController)) ::GlobalNamespace::IBpmController* bpmController;

  /// @brief Field colorManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_colorManager, put = __cordl_internal_set_colorManager)) ::GlobalNamespace::ColorManager* colorManager;

  /// @brief Field elementId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_elementId, put = __cordl_internal_set_elementId)) int32_t elementId;

  /// @brief Field getColor, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_getColor, put = __cordl_internal_set_getColor)) ::GlobalNamespace::LightColorEventHandler_GetColorDelegate* getColor;

  /// @brief Field groupId, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_groupId, put = __cordl_internal_set_groupId)) int32_t groupId;

  /// @brief Field lightId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_lightId, put = __cordl_internal_set_lightId)) int32_t lightId;

  /// @brief Field lightManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_lightManager, put = __cordl_internal_set_lightManager)) ::UnityW<::GlobalNamespace::LightWithIdManager> lightManager;

  /// @brief Field tweeningManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_tweeningManager, put = __cordl_internal_set_tweeningManager)) ::UnityW<::Tweening::SongTimeTweeningManager> tweeningManager;

  static inline ::GlobalNamespace::LightColorEventHandler_InitData* New_ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightWithIdManager* lightManager,
                                                                             ::Tweening::SongTimeTweeningManager* tweeningManager, ::GlobalNamespace::ColorManager* colorManager,
                                                                             ::GlobalNamespace::IBpmController* bpmController, ::GlobalNamespace::LightColorEventHandler_GetColorDelegate* getColor);

  static inline ::GlobalNamespace::LightColorEventHandler_InitData* New_ctor(int32_t lightId, ::GlobalNamespace::LightWithIdManager* lightManager, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                             ::GlobalNamespace::ColorManager* colorManager, ::GlobalNamespace::IBpmController* bpmController,
                                                                             ::GlobalNamespace::LightColorEventHandler_GetColorDelegate* getColor);

  constexpr ::GlobalNamespace::IBpmController* const& __cordl_internal_get_bpmController() const;

  constexpr ::GlobalNamespace::IBpmController*& __cordl_internal_get_bpmController();

  constexpr ::GlobalNamespace::ColorManager* const& __cordl_internal_get_colorManager() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get_colorManager();

  constexpr int32_t const& __cordl_internal_get_elementId() const;

  constexpr int32_t& __cordl_internal_get_elementId();

  constexpr ::GlobalNamespace::LightColorEventHandler_GetColorDelegate* const& __cordl_internal_get_getColor() const;

  constexpr ::GlobalNamespace::LightColorEventHandler_GetColorDelegate*& __cordl_internal_get_getColor();

  constexpr int32_t const& __cordl_internal_get_groupId() const;

  constexpr int32_t& __cordl_internal_get_groupId();

  constexpr int32_t const& __cordl_internal_get_lightId() const;

  constexpr int32_t& __cordl_internal_get_lightId();

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& __cordl_internal_get_lightManager() const;

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& __cordl_internal_get_lightManager();

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& __cordl_internal_get_tweeningManager() const;

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& __cordl_internal_get_tweeningManager();

  constexpr void __cordl_internal_set_bpmController(::GlobalNamespace::IBpmController* value);

  constexpr void __cordl_internal_set_colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set_elementId(int32_t value);

  constexpr void __cordl_internal_set_getColor(::GlobalNamespace::LightColorEventHandler_GetColorDelegate* value);

  constexpr void __cordl_internal_set_groupId(int32_t value);

  constexpr void __cordl_internal_set_lightId(int32_t value);

  constexpr void __cordl_internal_set_lightManager(::UnityW<::GlobalNamespace::LightWithIdManager> value);

  constexpr void __cordl_internal_set_tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value);

  /// @brief Method .ctor, addr 0x5991af4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightWithIdManager* lightManager, ::Tweening::SongTimeTweeningManager* tweeningManager,
                    ::GlobalNamespace::ColorManager* colorManager, ::GlobalNamespace::IBpmController* bpmController, ::GlobalNamespace::LightColorEventHandler_GetColorDelegate* getColor);

  /// @brief Method .ctor, addr 0x59937ac, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t lightId, ::GlobalNamespace::LightWithIdManager* lightManager, ::Tweening::SongTimeTweeningManager* tweeningManager, ::GlobalNamespace::ColorManager* colorManager,
                    ::GlobalNamespace::IBpmController* bpmController, ::GlobalNamespace::LightColorEventHandler_GetColorDelegate* getColor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorEventHandler_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightColorEventHandler_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorEventHandler_InitData(LightColorEventHandler_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorEventHandler_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorEventHandler_InitData(LightColorEventHandler_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5838 };

  /// @brief Field lightId, offset: 0x10, size: 0x4, def value: None
  int32_t ___lightId;

  /// @brief Field groupId, offset: 0x14, size: 0x4, def value: None
  int32_t ___groupId;

  /// @brief Field elementId, offset: 0x18, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field lightManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightWithIdManager> ___lightManager;

  /// @brief Field tweeningManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Tweening::SongTimeTweeningManager> ___tweeningManager;

  /// @brief Field colorManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ___colorManager;

  /// @brief Field bpmController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IBpmController* ___bpmController;

  /// @brief Field getColor, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::LightColorEventHandler_GetColorDelegate* ___getColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightColorEventHandler_InitData, ___lightId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler_InitData, ___groupId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler_InitData, ___elementId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler_InitData, ___lightManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler_InitData, ___tweeningManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler_InitData, ___colorManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler_InitData, ___bpmController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler_InitData, ___getColor) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightColorEventHandler_InitData) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightColorEventHandler
class CORDL_TYPE LightColorEventHandler : public ::System::Object {
public:
  // Declarations
  using GetColorDelegate = ::GlobalNamespace::LightColorEventHandler_GetColorDelegate;

  using InitData = ::GlobalNamespace::LightColorEventHandler_InitData;

  /// @brief Field _alternativeFromColor, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get__alternativeFromColor, put = __cordl_internal_set__alternativeFromColor)) ::UnityEngine::Color _alternativeFromColor;

  /// @brief Field _alternativeToColor, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get__alternativeToColor, put = __cordl_internal_set__alternativeToColor)) ::UnityEngine::Color _alternativeToColor;

  /// @brief Field _bpmController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__bpmController, put = __cordl_internal_set__bpmController)) ::GlobalNamespace::IBpmController* _bpmController;

  /// @brief Field _colorManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _elementId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__elementId, put = __cordl_internal_set__elementId)) int32_t _elementId;

  /// @brief Field _floatTween, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__floatTween, put = __cordl_internal_set__floatTween)) ::Tweening::FloatTween* _floatTween;

  /// @brief Field _fromColor, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__fromColor, put = __cordl_internal_set__fromColor)) ::UnityEngine::Color _fromColor;

  /// @brief Field _fromStrobeBrightness, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__fromStrobeBrightness, put = __cordl_internal_set__fromStrobeBrightness)) float_t _fromStrobeBrightness;

  /// @brief Field _fromStrobeFrequency, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__fromStrobeFrequency, put = __cordl_internal_set__fromStrobeFrequency)) float_t _fromStrobeFrequency;

  /// @brief Field _getColor, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__getColor, put = __cordl_internal_set__getColor)) ::GlobalNamespace::LightColorEventHandler_GetColorDelegate* _getColor;

  /// @brief Field _groupId, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__groupId, put = __cordl_internal_set__groupId)) int32_t _groupId;

  /// @brief Field _lightId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__lightId, put = __cordl_internal_set__lightId)) int32_t _lightId;

  /// @brief Field _lightManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightManager, put = __cordl_internal_set__lightManager)) ::UnityW<::GlobalNamespace::LightWithIdManager> _lightManager;

  /// @brief Field _strobeFade, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get__strobeFade, put = __cordl_internal_set__strobeFade)) bool _strobeFade;

  /// @brief Field _toColor, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get__toColor, put = __cordl_internal_set__toColor)) ::UnityEngine::Color _toColor;

  /// @brief Field _toStrobeBrightness, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__toStrobeBrightness, put = __cordl_internal_set__toStrobeBrightness)) float_t _toStrobeBrightness;

  /// @brief Field _toStrobeFrequency, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get__toStrobeFrequency, put = __cordl_internal_set__toStrobeFrequency)) float_t _toStrobeFrequency;

  /// @brief Field _tweeningManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager)) ::UnityW<::Tweening::SongTimeTweeningManager> _tweeningManager;

  /// @brief Field _usingBoostColors, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get__usingBoostColors, put = __cordl_internal_set__usingBoostColors)) bool _usingBoostColors;

  /// @brief Method Cleanup, addr 0x598f804, size 0x8c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method HandleColorEvent, addr 0x599257c, size 0x448, virtual false, abstract: false, final false
  inline void HandleColorEvent(::GlobalNamespace::LightColorBeatmapEventData* currentEventData);

  static inline ::GlobalNamespace::LightColorEventHandler* New_ctor(::GlobalNamespace::LightColorEventHandler_InitData* initData);

  /// @brief Method SetColor, addr 0x59933ac, size 0x19c, virtual false, abstract: false, final false
  inline void SetColor(float_t t);

  /// @brief Method SetData, addr 0x5993548, size 0x168, virtual false, abstract: false, final false
  inline void SetData(::UnityEngine::Color fromColor, ::UnityEngine::Color toColor, ::UnityEngine::Color alternativeFromColor, ::UnityEngine::Color alternativeToColor, float_t fromStrobeBeatFrequency,
                      float_t toStrobeBeatFrequency, float_t fromStrobeBrightness, float_t toStrobeBrightness, bool strobeFade);

  /// @brief Method UseBoostColors, addr 0x5992ca0, size 0x160, virtual false, abstract: false, final false
  inline void UseBoostColors(bool useBoostColors);

  constexpr ::UnityEngine::Color const& __cordl_internal_get__alternativeFromColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__alternativeFromColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__alternativeToColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__alternativeToColor();

  constexpr ::GlobalNamespace::IBpmController* const& __cordl_internal_get__bpmController() const;

  constexpr ::GlobalNamespace::IBpmController*& __cordl_internal_get__bpmController();

  constexpr ::GlobalNamespace::ColorManager* const& __cordl_internal_get__colorManager() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr int32_t const& __cordl_internal_get__elementId() const;

  constexpr int32_t& __cordl_internal_get__elementId();

  constexpr ::Tweening::FloatTween* const& __cordl_internal_get__floatTween() const;

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__floatTween();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__fromColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__fromColor();

  constexpr float_t const& __cordl_internal_get__fromStrobeBrightness() const;

  constexpr float_t& __cordl_internal_get__fromStrobeBrightness();

  constexpr float_t const& __cordl_internal_get__fromStrobeFrequency() const;

  constexpr float_t& __cordl_internal_get__fromStrobeFrequency();

  constexpr ::GlobalNamespace::LightColorEventHandler_GetColorDelegate* const& __cordl_internal_get__getColor() const;

  constexpr ::GlobalNamespace::LightColorEventHandler_GetColorDelegate*& __cordl_internal_get__getColor();

  constexpr int32_t const& __cordl_internal_get__groupId() const;

  constexpr int32_t& __cordl_internal_get__groupId();

  constexpr int32_t const& __cordl_internal_get__lightId() const;

  constexpr int32_t& __cordl_internal_get__lightId();

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& __cordl_internal_get__lightManager() const;

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& __cordl_internal_get__lightManager();

  constexpr bool const& __cordl_internal_get__strobeFade() const;

  constexpr bool& __cordl_internal_get__strobeFade();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__toColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__toColor();

  constexpr float_t const& __cordl_internal_get__toStrobeBrightness() const;

  constexpr float_t& __cordl_internal_get__toStrobeBrightness();

  constexpr float_t const& __cordl_internal_get__toStrobeFrequency() const;

  constexpr float_t& __cordl_internal_get__toStrobeFrequency();

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr bool const& __cordl_internal_get__usingBoostColors() const;

  constexpr bool& __cordl_internal_get__usingBoostColors();

  constexpr void __cordl_internal_set__alternativeFromColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__alternativeToColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__bpmController(::GlobalNamespace::IBpmController* value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__elementId(int32_t value);

  constexpr void __cordl_internal_set__floatTween(::Tweening::FloatTween* value);

  constexpr void __cordl_internal_set__fromColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__fromStrobeBrightness(float_t value);

  constexpr void __cordl_internal_set__fromStrobeFrequency(float_t value);

  constexpr void __cordl_internal_set__getColor(::GlobalNamespace::LightColorEventHandler_GetColorDelegate* value);

  constexpr void __cordl_internal_set__groupId(int32_t value);

  constexpr void __cordl_internal_set__lightId(int32_t value);

  constexpr void __cordl_internal_set__lightManager(::UnityW<::GlobalNamespace::LightWithIdManager> value);

  constexpr void __cordl_internal_set__strobeFade(bool value);

  constexpr void __cordl_internal_set__toColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__toStrobeBrightness(float_t value);

  constexpr void __cordl_internal_set__toStrobeFrequency(float_t value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value);

  constexpr void __cordl_internal_set__usingBoostColors(bool value);

  /// @brief Method .ctor, addr 0x5991b10, size 0x2ac, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::LightColorEventHandler_InitData* initData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightColorEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorEventHandler(LightColorEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorEventHandler(LightColorEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5839 };

  /// @brief Field _lightId, offset: 0x10, size: 0x4, def value: None
  int32_t ____lightId;

  /// @brief Field _groupId, offset: 0x14, size: 0x4, def value: None
  int32_t ____groupId;

  /// @brief Field _elementId, offset: 0x18, size: 0x4, def value: None
  int32_t ____elementId;

  /// @brief Field _lightManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightWithIdManager> ____lightManager;

  /// @brief Field _tweeningManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Tweening::SongTimeTweeningManager> ____tweeningManager;

  /// @brief Field _colorManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _bpmController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IBpmController* ____bpmController;

  /// @brief Field _getColor, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::LightColorEventHandler_GetColorDelegate* ____getColor;

  /// @brief Field _floatTween, offset: 0x48, size: 0x8, def value: None
  ::Tweening::FloatTween* ____floatTween;

  /// @brief Field _fromColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ____fromColor;

  /// @brief Field _toColor, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color ____toColor;

  /// @brief Field _alternativeFromColor, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Color ____alternativeFromColor;

  /// @brief Field _alternativeToColor, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Color ____alternativeToColor;

  /// @brief Field _fromStrobeFrequency, offset: 0x90, size: 0x4, def value: None
  float_t ____fromStrobeFrequency;

  /// @brief Field _toStrobeFrequency, offset: 0x94, size: 0x4, def value: None
  float_t ____toStrobeFrequency;

  /// @brief Field _fromStrobeBrightness, offset: 0x98, size: 0x4, def value: None
  float_t ____fromStrobeBrightness;

  /// @brief Field _toStrobeBrightness, offset: 0x9c, size: 0x4, def value: None
  float_t ____toStrobeBrightness;

  /// @brief Field _strobeFade, offset: 0xa0, size: 0x1, def value: None
  bool ____strobeFade;

  /// @brief Field _usingBoostColors, offset: 0xa1, size: 0x1, def value: None
  bool ____usingBoostColors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightColorEventHandler, ____lightId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler, ____groupId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler, ____elementId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler, ____lightManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler, ____tweeningManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler, ____colorManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler, ____bpmController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler, ____getColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler, ____floatTween) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler, ____fromColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler, ____toColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler, ____alternativeFromColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler, ____alternativeToColor) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler, ____fromStrobeFrequency) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler, ____toStrobeFrequency) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler, ____fromStrobeBrightness) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler, ____toStrobeBrightness) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler, ____strobeFade) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorEventHandler, ____usingBoostColors) == 0xa1, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightColorEventHandler) == 0xa8, "Size mismatch!");

} // namespace GlobalNamespace
