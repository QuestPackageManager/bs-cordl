#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomFogSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomFogSO)
namespace GlobalNamespace {
class BloomFogEnvironmentParams;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomFogSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomFogSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomFogSO
class CORDL_TYPE BloomFogSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _autoExposureLimit, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__autoExposureLimit, put = __cordl_internal_set__autoExposureLimit)) float_t _autoExposureLimit;

  /// @brief Field _bloomFogEnabled, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__bloomFogEnabled, put = __cordl_internal_set__bloomFogEnabled)) bool _bloomFogEnabled;

  /// @brief Field _customFogAttenuationID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__customFogAttenuationID, put = setStaticF__customFogAttenuationID)) int32_t _customFogAttenuationID;

  /// @brief Field _customFogHeightFogHeightID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__customFogHeightFogHeightID, put = setStaticF__customFogHeightFogHeightID)) int32_t _customFogHeightFogHeightID;

  /// @brief Field _customFogHeightFogStartYID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__customFogHeightFogStartYID, put = setStaticF__customFogHeightFogStartYID)) int32_t _customFogHeightFogStartYID;

  /// @brief Field _customFogOffsetID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__customFogOffsetID, put = setStaticF__customFogOffsetID)) int32_t _customFogOffsetID;

  /// @brief Field _defaultFogParams, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultFogParams, put = __cordl_internal_set__defaultFogParams)) ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> _defaultFogParams;

  /// @brief Field _legacyAutoExposureEnabled, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__legacyAutoExposureEnabled, put = __cordl_internal_set__legacyAutoExposureEnabled)) bool _legacyAutoExposureEnabled;

  /// @brief Field _noteSpawnIntensity, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__noteSpawnIntensity, put = __cordl_internal_set__noteSpawnIntensity)) float_t _noteSpawnIntensity;

  /// @brief Field _transition, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__transition, put = __cordl_internal_set__transition)) float_t _transition;

  /// @brief Field _transitionFogParams, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__transitionFogParams, put = __cordl_internal_set__transitionFogParams)) ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> _transitionFogParams;

  __declspec(property(get = get_autoExposureLimit)) float_t autoExposureLimit;

  __declspec(property(get = get_bloomFogEnabled, put = set_bloomFogEnabled)) bool bloomFogEnabled;

  __declspec(property(get = get_defaultForParams, put = set_defaultForParams)) ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> defaultForParams;

  __declspec(property(get = get_legacyAutoExposureEnabled, put = set_legacyAutoExposureEnabled)) bool legacyAutoExposureEnabled;

  __declspec(property(get = get_noteSpawnIntensity)) float_t noteSpawnIntensity;

  __declspec(property(get = get_transition, put = set_transition)) float_t transition;

  __declspec(property(get = get_transitionFogParams, put = set_transitionFogParams)) ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> transitionFogParams;

  static inline ::GlobalNamespace::BloomFogSO* New_ctor();

  /// @brief Method OnEnable, addr 0x56ac85c, size 0x34, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SetParams, addr 0x56ac890, size 0x1bc, virtual false, abstract: false, final false
  inline void SetParams(float_t attenuation, float_t offset, float_t heightFogStartY, float_t heightFogHeight, float_t autoExposureLimit, float_t noteSpawnIntensity);

  /// @brief Method Setup, addr 0x56ac104, size 0x8, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::BloomFogEnvironmentParams* defaultFogParams);

  /// @brief Method UpdateKeyword, addr 0x56ac7dc, size 0x60, virtual false, abstract: false, final false
  inline void UpdateKeyword();

  /// @brief Method UpdateShaderParams, addr 0x56ac210, size 0x198, virtual false, abstract: false, final false
  inline void UpdateShaderParams();

  constexpr float_t const& __cordl_internal_get__autoExposureLimit() const;

  constexpr float_t& __cordl_internal_get__autoExposureLimit();

  constexpr bool const& __cordl_internal_get__bloomFogEnabled() const;

  constexpr bool& __cordl_internal_get__bloomFogEnabled();

  constexpr ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> const& __cordl_internal_get__defaultFogParams() const;

  constexpr ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams>& __cordl_internal_get__defaultFogParams();

  constexpr bool const& __cordl_internal_get__legacyAutoExposureEnabled() const;

  constexpr bool& __cordl_internal_get__legacyAutoExposureEnabled();

  constexpr float_t const& __cordl_internal_get__noteSpawnIntensity() const;

  constexpr float_t& __cordl_internal_get__noteSpawnIntensity();

  constexpr float_t const& __cordl_internal_get__transition() const;

  constexpr float_t& __cordl_internal_get__transition();

  constexpr ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> const& __cordl_internal_get__transitionFogParams() const;

  constexpr ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams>& __cordl_internal_get__transitionFogParams();

  constexpr void __cordl_internal_set__autoExposureLimit(float_t value);

  constexpr void __cordl_internal_set__bloomFogEnabled(bool value);

  constexpr void __cordl_internal_set__defaultFogParams(::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> value);

  constexpr void __cordl_internal_set__legacyAutoExposureEnabled(bool value);

  constexpr void __cordl_internal_set__noteSpawnIntensity(float_t value);

  constexpr void __cordl_internal_set__transition(float_t value);

  constexpr void __cordl_internal_set__transitionFogParams(::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> value);

  /// @brief Method .ctor, addr 0x56aca4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__customFogAttenuationID();

  static inline int32_t getStaticF__customFogHeightFogHeightID();

  static inline int32_t getStaticF__customFogHeightFogStartYID();

  static inline int32_t getStaticF__customFogOffsetID();

  /// @brief Method get_autoExposureLimit, addr 0x56ac84c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_autoExposureLimit();

  /// @brief Method get_bloomFogEnabled, addr 0x56ac83c, size 0x8, virtual false, abstract: false, final false
  inline bool get_bloomFogEnabled();

  /// @brief Method get_defaultForParams, addr 0x56ac7cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> get_defaultForParams();

  /// @brief Method get_legacyAutoExposureEnabled, addr 0x56ac844, size 0x8, virtual false, abstract: false, final false
  inline bool get_legacyAutoExposureEnabled();

  /// @brief Method get_noteSpawnIntensity, addr 0x56ac854, size 0x8, virtual false, abstract: false, final false
  inline float_t get_noteSpawnIntensity();

  /// @brief Method get_transition, addr 0x56ac7c4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_transition();

  /// @brief Method get_transitionFogParams, addr 0x56ac7d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> get_transitionFogParams();

  static inline void setStaticF__customFogAttenuationID(int32_t value);

  static inline void setStaticF__customFogHeightFogHeightID(int32_t value);

  static inline void setStaticF__customFogHeightFogStartYID(int32_t value);

  static inline void setStaticF__customFogOffsetID(int32_t value);

  /// @brief Method set_bloomFogEnabled, addr 0x56ac1d8, size 0x1c, virtual false, abstract: false, final false
  inline void set_bloomFogEnabled(bool value);

  /// @brief Method set_defaultForParams, addr 0x56ac5e0, size 0xa0, virtual false, abstract: false, final false
  inline void set_defaultForParams(::GlobalNamespace::BloomFogEnvironmentParams* value);

  /// @brief Method set_legacyAutoExposureEnabled, addr 0x56ac1f4, size 0x1c, virtual false, abstract: false, final false
  inline void set_legacyAutoExposureEnabled(bool value);

  /// @brief Method set_transition, addr 0x56ac0ec, size 0x18, virtual false, abstract: false, final false
  inline void set_transition(float_t value);

  /// @brief Method set_transitionFogParams, addr 0x56ac458, size 0x9c, virtual false, abstract: false, final false
  inline void set_transitionFogParams(::GlobalNamespace::BloomFogEnvironmentParams* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomFogSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomFogSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomFogSO(BloomFogSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomFogSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomFogSO(BloomFogSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19640 };

  /// @brief Field kBloomFogEnabledKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString kBloomFogEnabledKeyword{ u"ENABLE_BLOOM_FOG" };

  /// @brief Field _bloomFogEnabled, offset: 0x18, size: 0x1, def value: None
  bool ____bloomFogEnabled;

  /// @brief Field _legacyAutoExposureEnabled, offset: 0x19, size: 0x1, def value: None
  bool ____legacyAutoExposureEnabled;

  /// @brief Field _transition, offset: 0x1c, size: 0x4, def value: None
  float_t ____transition;

  /// @brief Field _autoExposureLimit, offset: 0x20, size: 0x4, def value: None
  float_t ____autoExposureLimit;

  /// @brief Field _noteSpawnIntensity, offset: 0x24, size: 0x4, def value: None
  float_t ____noteSpawnIntensity;

  /// @brief Field _defaultFogParams, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> ____defaultFogParams;

  /// @brief Field _transitionFogParams, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> ____transitionFogParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomFogSO, ____bloomFogEnabled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogSO, ____legacyAutoExposureEnabled) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogSO, ____transition) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogSO, ____autoExposureLimit) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogSO, ____noteSpawnIntensity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogSO, ____defaultFogParams) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogSO, ____transitionFogParams) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomFogSO, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomFogSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogSO*, "", "BloomFogSO");
