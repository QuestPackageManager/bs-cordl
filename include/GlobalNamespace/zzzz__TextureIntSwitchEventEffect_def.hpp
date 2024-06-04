#pragma once
// IWYU pragma private; include "GlobalNamespace/TextureIntSwitchEventEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureIntSwitchEventEffect)
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
struct __TextureIntSwitchEventEffect__TextureValueTuple;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace GlobalNamespace {
class TextureIntSwitchEventEffect;
}
namespace GlobalNamespace {
struct __TextureIntSwitchEventEffect__TextureValueTuple;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextureIntSwitchEventEffect);
MARK_VAL_T(::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple);
// Type: ::TextureValueTuple
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::TextureIntSwitchEventEffect::TextureValueTuple
struct CORDL_TYPE __TextureIntSwitchEventEffect__TextureValueTuple {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextureIntSwitchEventEffect__TextureValueTuple();

  // Ctor Parameters [CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }]
  constexpr __TextureIntSwitchEventEffect__TextureValueTuple(int32_t value, ::UnityW<::UnityEngine::Texture> texture) noexcept;

  /// @brief Field value, offset: 0x0, size: 0x4, def value: None
  int32_t value;

  /// @brief Field texture, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> texture;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple, value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple, texture) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TextureIntSwitchEventEffect
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TextureIntSwitchEventEffect*
class CORDL_TYPE TextureIntSwitchEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using TextureValueTuple = ::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple;

  /// @brief Field _beatmapCallbacksController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _beatmapEventType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__beatmapEventType, put = __cordl_internal_set__beatmapEventType))::GlobalNamespace::BasicBeatmapEventType _beatmapEventType;

  /// @brief Field _defaultIndex, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultIndex, put = __cordl_internal_set__defaultIndex)) int32_t _defaultIndex;

  /// @brief Field _materialPropertyBlockController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController))::UnityW<::GlobalNamespace::MaterialPropertyBlockController> _materialPropertyBlockController;

  /// @brief Field _texturePropertyId, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__texturePropertyId, put = __cordl_internal_set__texturePropertyId)) int32_t _texturePropertyId;

  /// @brief Field _texturePropertyName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__texturePropertyName, put = __cordl_internal_set__texturePropertyName))::StringW _texturePropertyName;

  /// @brief Field _textureValueTuples, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__textureValueTuples,
                      put = __cordl_internal_set__textureValueTuples))::ArrayW<::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple,
                                                                               ::Array<::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple>*> _textureValueTuples;

  /// @brief Field _valueToTextureMap, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__valueToTextureMap,
                      put = __cordl_internal_set__valueToTextureMap))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Texture>>* _valueToTextureMap;

  /// @brief Method HandleBasicBeatmapEventData, addr 0x26e9fd4, size 0x18, virtual false, abstract: false, final false
  inline void HandleBasicBeatmapEventData(::GlobalNamespace::BasicBeatmapEventData* data);

  /// @brief Method Initialize, addr 0x26e9d34, size 0x1b4, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  static inline ::GlobalNamespace::TextureIntSwitchEventEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x26e9fb8, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetTextureByIndex, addr 0x26e9ee8, size 0xd0, virtual false, abstract: false, final false
  inline void SetTextureByIndex(int32_t value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__beatmapEventType() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__beatmapEventType();

  constexpr int32_t const& __cordl_internal_get__defaultIndex() const;

  constexpr int32_t& __cordl_internal_get__defaultIndex();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr int32_t const& __cordl_internal_get__texturePropertyId() const;

  constexpr int32_t& __cordl_internal_get__texturePropertyId();

  constexpr ::StringW const& __cordl_internal_get__texturePropertyName() const;

  constexpr ::StringW& __cordl_internal_get__texturePropertyName();

  constexpr ::ArrayW<::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple, ::Array<::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple>*> const&
  __cordl_internal_get__textureValueTuples() const;

  constexpr ::ArrayW<::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple, ::Array<::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple>*>&
  __cordl_internal_get__textureValueTuples();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Texture>>*& __cordl_internal_get__valueToTextureMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Texture>>*> const& __cordl_internal_get__valueToTextureMap() const;

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__defaultIndex(int32_t value);

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr void __cordl_internal_set__texturePropertyId(int32_t value);

  constexpr void __cordl_internal_set__texturePropertyName(::StringW value);

  constexpr void __cordl_internal_set__textureValueTuples(
      ::ArrayW<::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple, ::Array<::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple>*> value);

  constexpr void __cordl_internal_set__valueToTextureMap(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Texture>>* value);

  /// @brief Method .ctor, addr 0x26e9fec, size 0x1008, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureIntSwitchEventEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureIntSwitchEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureIntSwitchEventEffect(TextureIntSwitchEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureIntSwitchEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureIntSwitchEventEffect(TextureIntSwitchEventEffect const&) = delete;

  /// @brief Field _materialPropertyBlockController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field _texturePropertyName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____texturePropertyName;

  /// @brief Field _beatmapEventType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____beatmapEventType;

  /// @brief Field _defaultIndex, offset: 0x2c, size: 0x4, def value: None
  int32_t ____defaultIndex;

  /// @brief Field _textureValueTuples, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple, ::Array<::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple>*> ____textureValueTuples;

  /// @brief Field _beatmapCallbacksController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  /// @brief Field _texturePropertyId, offset: 0x48, size: 0x4, def value: None
  int32_t ____texturePropertyId;

  /// @brief Field _valueToTextureMap, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Texture>>* ____valueToTextureMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextureIntSwitchEventEffect, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureIntSwitchEventEffect, ____materialPropertyBlockController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureIntSwitchEventEffect, ____texturePropertyName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureIntSwitchEventEffect, ____beatmapEventType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureIntSwitchEventEffect, ____defaultIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureIntSwitchEventEffect, ____textureValueTuples) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureIntSwitchEventEffect, ____beatmapCallbacksController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureIntSwitchEventEffect, ____beatmapDataCallbackWrapper) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureIntSwitchEventEffect, ____texturePropertyId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureIntSwitchEventEffect, ____valueToTextureMap) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextureIntSwitchEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextureIntSwitchEventEffect*, "", "TextureIntSwitchEventEffect");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple, "", "TextureIntSwitchEventEffect/TextureValueTuple");
