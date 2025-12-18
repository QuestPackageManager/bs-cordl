#pragma once
// IWYU pragma private; include "GlobalNamespace/BakedLightsNormalizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BakedLightsNormalizer)
namespace GlobalNamespace {
struct LightConstants_BakeId;
}
namespace GlobalNamespace {
class LightmapLightWithIds;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BakedLightsNormalizer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BakedLightsNormalizer);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BakedLightsNormalizer
class CORDL_TYPE BakedLightsNormalizer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _grayscaleCalculatedOnce, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get__grayscaleCalculatedOnce, put = __cordl_internal_set__grayscaleCalculatedOnce)) bool _grayscaleCalculatedOnce;

  /// @brief Field _grayscaleTotal, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__grayscaleTotal, put = __cordl_internal_set__grayscaleTotal)) float_t _grayscaleTotal;

  /// @brief Field _lastCalculatedOnFrame, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__lastCalculatedOnFrame, put = __cordl_internal_set__lastCalculatedOnFrame)) int32_t _lastCalculatedOnFrame;

  /// @brief Field _lightmapDictInitialized, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__lightmapDictInitialized, put = __cordl_internal_set__lightmapDictInitialized)) bool _lightmapDictInitialized;

  /// @brief Field _lightmapLightDict, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lightmapLightDict,
                      put = __cordl_internal_set__lightmapLightDict)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LightConstants_BakeId,
                                                                                                                   ::UnityW<::GlobalNamespace::LightmapLightWithIds>>* _lightmapLightDict;

  /// @brief Field _maxTotalIntensity, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__maxTotalIntensity, put = __cordl_internal_set__maxTotalIntensity)) float_t _maxTotalIntensity;

  /// @brief Field _newUpdates, offset 0x3d, size 0x1
  __declspec(property(get = __cordl_internal_get__newUpdates, put = __cordl_internal_set__newUpdates)) bool _newUpdates;

  __declspec(property(
      get = get_lightmapLightDict)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LightConstants_BakeId, ::UnityW<::GlobalNamespace::LightmapLightWithIds>>* lightmapLightDict;

  __declspec(property(get = get_maxTotalIntensity)) float_t maxTotalIntensity;

  /// @brief Method GetLightmapLights, addr 0x56b8b14, size 0x124, virtual false, abstract: false, final false
  inline void GetLightmapLights();

  /// @brief Method GetNormalizationMultiplier, addr 0x56b8c38, size 0x70, virtual false, abstract: false, final false
  inline float_t GetNormalizationMultiplier();

  /// @brief Method LateUpdate, addr 0x56b88ac, size 0x5c, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::BakedLightsNormalizer* New_ctor();

  /// @brief Method UpdateGrayscaleTotal, addr 0x56b8908, size 0x20c, virtual false, abstract: false, final false
  inline void UpdateGrayscaleTotal();

  constexpr bool const& __cordl_internal_get__grayscaleCalculatedOnce() const;

  constexpr bool& __cordl_internal_get__grayscaleCalculatedOnce();

  constexpr float_t const& __cordl_internal_get__grayscaleTotal() const;

  constexpr float_t& __cordl_internal_get__grayscaleTotal();

  constexpr int32_t const& __cordl_internal_get__lastCalculatedOnFrame() const;

  constexpr int32_t& __cordl_internal_get__lastCalculatedOnFrame();

  constexpr bool const& __cordl_internal_get__lightmapDictInitialized() const;

  constexpr bool& __cordl_internal_get__lightmapDictInitialized();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LightConstants_BakeId, ::UnityW<::GlobalNamespace::LightmapLightWithIds>>* const&
  __cordl_internal_get__lightmapLightDict() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LightConstants_BakeId, ::UnityW<::GlobalNamespace::LightmapLightWithIds>>*& __cordl_internal_get__lightmapLightDict();

  constexpr float_t const& __cordl_internal_get__maxTotalIntensity() const;

  constexpr float_t& __cordl_internal_get__maxTotalIntensity();

  constexpr bool const& __cordl_internal_get__newUpdates() const;

  constexpr bool& __cordl_internal_get__newUpdates();

  constexpr void __cordl_internal_set__grayscaleCalculatedOnce(bool value);

  constexpr void __cordl_internal_set__grayscaleTotal(float_t value);

  constexpr void __cordl_internal_set__lastCalculatedOnFrame(int32_t value);

  constexpr void __cordl_internal_set__lightmapDictInitialized(bool value);

  constexpr void
  __cordl_internal_set__lightmapLightDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LightConstants_BakeId, ::UnityW<::GlobalNamespace::LightmapLightWithIds>>* value);

  constexpr void __cordl_internal_set__maxTotalIntensity(float_t value);

  constexpr void __cordl_internal_set__newUpdates(bool value);

  /// @brief Method .ctor, addr 0x56b8ca8, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_lightmapLightDict, addr 0x56b889c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LightConstants_BakeId, ::UnityW<::GlobalNamespace::LightmapLightWithIds>>* get_lightmapLightDict();

  /// @brief Method get_maxTotalIntensity, addr 0x56b88a4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxTotalIntensity();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BakedLightsNormalizer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BakedLightsNormalizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BakedLightsNormalizer(BakedLightsNormalizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BakedLightsNormalizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BakedLightsNormalizer(BakedLightsNormalizer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19701 };

  /// @brief Field kMaxFramesWithoutUpdate offset 0xffffffff size 0x4
  static constexpr int32_t kMaxFramesWithoutUpdate{ static_cast<int32_t>(0x5) };

  /// @brief Field _maxTotalIntensity, offset: 0x20, size: 0x4, def value: None
  float_t ____maxTotalIntensity;

  /// @brief Field _lightmapLightDict, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LightConstants_BakeId, ::UnityW<::GlobalNamespace::LightmapLightWithIds>>* ____lightmapLightDict;

  /// @brief Field _lightmapDictInitialized, offset: 0x30, size: 0x1, def value: None
  bool ____lightmapDictInitialized;

  /// @brief Field _grayscaleTotal, offset: 0x34, size: 0x4, def value: None
  float_t ____grayscaleTotal;

  /// @brief Field _lastCalculatedOnFrame, offset: 0x38, size: 0x4, def value: None
  int32_t ____lastCalculatedOnFrame;

  /// @brief Field _grayscaleCalculatedOnce, offset: 0x3c, size: 0x1, def value: None
  bool ____grayscaleCalculatedOnce;

  /// @brief Field _newUpdates, offset: 0x3d, size: 0x1, def value: None
  bool ____newUpdates;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BakedLightsNormalizer, ____maxTotalIntensity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakedLightsNormalizer, ____lightmapLightDict) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakedLightsNormalizer, ____lightmapDictInitialized) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakedLightsNormalizer, ____grayscaleTotal) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakedLightsNormalizer, ____lastCalculatedOnFrame) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakedLightsNormalizer, ____grayscaleCalculatedOnce) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakedLightsNormalizer, ____newUpdates) == 0x3d, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BakedLightsNormalizer, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BakedLightsNormalizer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakedLightsNormalizer*, "", "BakedLightsNormalizer");
