#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedLightColorGroupEffect)
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
namespace GlobalNamespace {
class LightColorBeatmapEventData;
}
namespace GlobalNamespace {
class __BufferedLightColorGroupEffect__InitData;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
struct Vector4;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class LightGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class BufferedLightColorGroupEffect;
}
namespace GlobalNamespace {
class __BufferedLightColorGroupEffect__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BufferedLightColorGroupEffect);
MARK_REF_PTR_T(::GlobalNamespace::__BufferedLightColorGroupEffect__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4918))
// CS Name: ::BufferedLightColorGroupEffect::InitData*
class CORDL_TYPE __BufferedLightColorGroupEffect__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field lightGroup, offset 0x10, size 0x8
  __declspec(property(get = __get_lightGroup, put = __set_lightGroup))::GlobalNamespace::LightGroup* lightGroup;

  /// @brief Field materialPropertyBlockController, offset 0x18, size 0x8
  __declspec(property(get = __get_materialPropertyBlockController, put = __set_materialPropertyBlockController))::GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;

  constexpr ::GlobalNamespace::LightGroup*& __get_lightGroup();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightGroup*> const& __get_lightGroup() const;

  constexpr void __set_lightGroup(::GlobalNamespace::LightGroup* value);

  constexpr ::GlobalNamespace::MaterialPropertyBlockController*& __get_materialPropertyBlockController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const& __get_materialPropertyBlockController() const;

  constexpr void __set_materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value);

  static inline ::GlobalNamespace::__BufferedLightColorGroupEffect__InitData* New_ctor(::GlobalNamespace::LightGroup* lightGroup,
                                                                                       ::GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController);

  /// @brief Method .ctor addr 0x23a7e20 size 0x2c virtual false final false
  inline void _ctor(::GlobalNamespace::LightGroup* lightGroup, ::GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController);

  // Ctor Parameters [CppParam { name: "", ty: "__BufferedLightColorGroupEffect__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BufferedLightColorGroupEffect__InitData(__BufferedLightColorGroupEffect__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BufferedLightColorGroupEffect__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BufferedLightColorGroupEffect__InitData(__BufferedLightColorGroupEffect__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BufferedLightColorGroupEffect__InitData();

public:
  /// @brief Field lightGroup, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::LightGroup* ___lightGroup;

  /// @brief Field materialPropertyBlockController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MaterialPropertyBlockController* ___materialPropertyBlockController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BufferedLightColorGroupEffect__InitData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BufferedLightColorGroupEffect
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 90, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4919))
// CS Name: ::BufferedLightColorGroupEffect*
class CORDL_TYPE BufferedLightColorGroupEffect : public ::System::Object {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__BufferedLightColorGroupEffect__InitData;

  /// @brief Field _colorManager, offset 0x10, size 0x8
  __declspec(property(get = __get__colorManager, put = __set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _materialPropertyBlockController, offset 0x18, size 0x8
  __declspec(property(get = __get__materialPropertyBlockController, put = __set__materialPropertyBlockController))::GlobalNamespace::MaterialPropertyBlockController* _materialPropertyBlockController;

  /// @brief Field _beatmapCallbacksController, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _colorBoostBeatmapDataCallbackWrapper, offset 0x28, size 0x8
  __declspec(property(get = __get__colorBoostBeatmapDataCallbackWrapper,
                      put = __set__colorBoostBeatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _colorBoostBeatmapDataCallbackWrapper;

  /// @brief Field _lightColorBeatmapEventCallbackWrappers, offset 0x30, size 0x8
  __declspec(property(get = __get__lightColorBeatmapEventCallbackWrappers,
                      put = __set__lightColorBeatmapEventCallbackWrappers))::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*,
                                                                                    ::Array<::GlobalNamespace::BeatmapDataCallbackWrapper*>*> _lightColorBeatmapEventCallbackWrappers;

  /// @brief Field _lastIndex, offset 0x38, size 0x4
  __declspec(property(get = __get__lastIndex, put = __set__lastIndex)) int32_t _lastIndex;

  /// @brief Field _timesBuffer, offset 0x40, size 0x8
  __declspec(property(get = __get__timesBuffer, put = __set__timesBuffer))::ArrayW<float_t, ::Array<float_t>*> _timesBuffer;

  /// @brief Field _colorsBuffer, offset 0x48, size 0x8
  __declspec(property(get = __get__colorsBuffer, put = __set__colorsBuffer))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _colorsBuffer;

  /// @brief Field _elementIdsBuffer, offset 0x50, size 0x8
  __declspec(property(get = __get__elementIdsBuffer, put = __set__elementIdsBuffer))::ArrayW<float_t, ::Array<float_t>*> _elementIdsBuffer;

  /// @brief Field _useBoostColors, offset 0x58, size 0x1
  __declspec(property(get = __get__useBoostColors, put = __set__useBoostColors)) bool _useBoostColors;

  /// @brief Field _didReceiveEventThisFrame, offset 0x59, size 0x1
  __declspec(property(get = __get__didReceiveEventThisFrame, put = __set__didReceiveEventThisFrame)) bool _didReceiveEventThisFrame;

  /// @brief Field _timesBufferPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__timesBufferPropertyId, put = setStaticF__timesBufferPropertyId)) int32_t _timesBufferPropertyId;

  /// @brief Field _colorBufferPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__colorBufferPropertyId, put = setStaticF__colorBufferPropertyId)) int32_t _colorBufferPropertyId;

  /// @brief Field _elementIdBufferPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__elementIdBufferPropertyId, put = setStaticF__elementIdBufferPropertyId)) int32_t _elementIdBufferPropertyId;

  constexpr ::GlobalNamespace::ColorManager*& __get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __get__colorManager() const;

  constexpr void __set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr ::GlobalNamespace::MaterialPropertyBlockController*& __get__materialPropertyBlockController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const& __get__materialPropertyBlockController() const;

  constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__colorBoostBeatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__colorBoostBeatmapDataCallbackWrapper() const;

  constexpr void __set__colorBoostBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr ::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*, ::Array<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>& __get__lightColorBeatmapEventCallbackWrappers();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*, ::Array<::GlobalNamespace::BeatmapDataCallbackWrapper*>*> const& __get__lightColorBeatmapEventCallbackWrappers() const;

  constexpr void __set__lightColorBeatmapEventCallbackWrappers(::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*, ::Array<::GlobalNamespace::BeatmapDataCallbackWrapper*>*> value);

  constexpr int32_t& __get__lastIndex();

  constexpr int32_t const& __get__lastIndex() const;

  constexpr void __set__lastIndex(int32_t value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__timesBuffer();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__timesBuffer() const;

  constexpr void __set__timesBuffer(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __get__colorsBuffer();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __get__colorsBuffer() const;

  constexpr void __set__colorsBuffer(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__elementIdsBuffer();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__elementIdsBuffer() const;

  constexpr void __set__elementIdsBuffer(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr bool& __get__useBoostColors();

  constexpr bool const& __get__useBoostColors() const;

  constexpr void __set__useBoostColors(bool value);

  constexpr bool& __get__didReceiveEventThisFrame();

  constexpr bool const& __get__didReceiveEventThisFrame() const;

  constexpr void __set__didReceiveEventThisFrame(bool value);

  static inline void setStaticF__timesBufferPropertyId(int32_t value);

  static inline int32_t getStaticF__timesBufferPropertyId();

  static inline void setStaticF__colorBufferPropertyId(int32_t value);

  static inline int32_t getStaticF__colorBufferPropertyId();

  static inline void setStaticF__elementIdBufferPropertyId(int32_t value);

  static inline int32_t getStaticF__elementIdBufferPropertyId();

  static inline ::GlobalNamespace::BufferedLightColorGroupEffect* New_ctor(::GlobalNamespace::__BufferedLightColorGroupEffect__InitData* initData, ::GlobalNamespace::ColorManager* colorManager,
                                                                           ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  /// @brief Method .ctor addr 0x23a76c0 size 0x348 virtual false final false
  inline void _ctor(::GlobalNamespace::__BufferedLightColorGroupEffect__InitData* initData, ::GlobalNamespace::ColorManager* colorManager,
                    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  /// @brief Method Cleanup addr 0x23a7a08 size 0x11c virtual false final false
  inline void Cleanup();

  /// @brief Method HandleColorBoostBeatmapEvent addr 0x23a7b24 size 0x1c virtual false final false
  inline void HandleColorBoostBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData* colorBoost);

  /// @brief Method HandleColorChangeBeatmapEvent addr 0x23a7b40 size 0xdc virtual false final false
  inline void HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData* currentEvent);

  /// @brief Method HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame addr 0x23a7c1c size 0x108 virtual false final false
  inline void HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame();

  /// @brief Method GetColor addr 0x23a7d24 size 0x34 virtual true final false
  inline ::UnityEngine::Color GetColor(::GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness);

  // Ctor Parameters [CppParam { name: "", ty: "BufferedLightColorGroupEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferedLightColorGroupEffect(BufferedLightColorGroupEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferedLightColorGroupEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferedLightColorGroupEffect(BufferedLightColorGroupEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedLightColorGroupEffect();

public:
  /// @brief Field _colorManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _materialPropertyBlockController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MaterialPropertyBlockController* ____materialPropertyBlockController;

  /// @brief Field _beatmapCallbacksController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _colorBoostBeatmapDataCallbackWrapper, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____colorBoostBeatmapDataCallbackWrapper;

  /// @brief Field _lightColorBeatmapEventCallbackWrappers, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*, ::Array<::GlobalNamespace::BeatmapDataCallbackWrapper*>*> ____lightColorBeatmapEventCallbackWrappers;

  /// @brief Field _lastIndex, offset: 0x38, size: 0x4, def value: None
  int32_t ____lastIndex;

  /// @brief Field _timesBuffer, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____timesBuffer;

  /// @brief Field _colorsBuffer, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____colorsBuffer;

  /// @brief Field _elementIdsBuffer, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____elementIdsBuffer;

  /// @brief Field _useBoostColors, offset: 0x58, size: 0x1, def value: None
  bool ____useBoostColors;

  /// @brief Field _didReceiveEventThisFrame, offset: 0x59, size: 0x1, def value: None
  bool ____didReceiveEventThisFrame;

  /// @brief Field kBufferSize offset 0xffffffff size 0x4
  static constexpr int32_t kBufferSize{ static_cast<int32_t>(0x18) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BufferedLightColorGroupEffect, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BufferedLightColorGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BufferedLightColorGroupEffect*, "", "BufferedLightColorGroupEffect");
NEED_NO_BOX(::GlobalNamespace::__BufferedLightColorGroupEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BufferedLightColorGroupEffect__InitData*, "", "BufferedLightColorGroupEffect/InitData");
