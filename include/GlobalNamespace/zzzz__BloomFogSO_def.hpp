#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
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
// Type: ::BloomFogSO
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14672))
// CS Name: ::BloomFogSO*
class CORDL_TYPE BloomFogSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _bloomFogEnabled, offset 0x18, size 0x1
  __declspec(property(get = __get__bloomFogEnabled, put = __set__bloomFogEnabled)) bool _bloomFogEnabled;

  /// @brief Field _transition, offset 0x1c, size 0x4
  __declspec(property(get = __get__transition, put = __set__transition)) float_t _transition;

  /// @brief Field _autoExposureLimit, offset 0x20, size 0x4
  __declspec(property(get = __get__autoExposureLimit, put = __set__autoExposureLimit)) float_t _autoExposureLimit;

  /// @brief Field _noteSpawnIntensity, offset 0x24, size 0x4
  __declspec(property(get = __get__noteSpawnIntensity, put = __set__noteSpawnIntensity)) float_t _noteSpawnIntensity;

  /// @brief Field _defaultFogParams, offset 0x28, size 0x8
  __declspec(property(get = __get__defaultFogParams, put = __set__defaultFogParams))::GlobalNamespace::BloomFogEnvironmentParams* _defaultFogParams;

  /// @brief Field _transitionFogParams, offset 0x30, size 0x8
  __declspec(property(get = __get__transitionFogParams, put = __set__transitionFogParams))::GlobalNamespace::BloomFogEnvironmentParams* _transitionFogParams;

  /// @brief Field _customFogAttenuationID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__customFogAttenuationID, put = setStaticF__customFogAttenuationID)) int32_t _customFogAttenuationID;

  /// @brief Field _customFogOffsetID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__customFogOffsetID, put = setStaticF__customFogOffsetID)) int32_t _customFogOffsetID;

  /// @brief Field _customFogHeightFogStartYID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__customFogHeightFogStartYID, put = setStaticF__customFogHeightFogStartYID)) int32_t _customFogHeightFogStartYID;

  /// @brief Field _customFogHeightFogHeightID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__customFogHeightFogHeightID, put = setStaticF__customFogHeightFogHeightID)) int32_t _customFogHeightFogHeightID;

  __declspec(property(get = get_transition, put = set_transition)) float_t transition;

  __declspec(property(get = get_defaultForParams, put = set_defaultForParams))::GlobalNamespace::BloomFogEnvironmentParams* defaultForParams;

  __declspec(property(get = get_transitionFogParams, put = set_transitionFogParams))::GlobalNamespace::BloomFogEnvironmentParams* transitionFogParams;

  __declspec(property(get = get_bloomFogEnabled, put = set_bloomFogEnabled)) bool bloomFogEnabled;

  __declspec(property(get = get_autoExposureLimit)) float_t autoExposureLimit;

  __declspec(property(get = get_noteSpawnIntensity)) float_t noteSpawnIntensity;

  constexpr bool& __get__bloomFogEnabled();

  constexpr bool const& __get__bloomFogEnabled() const;

  constexpr void __set__bloomFogEnabled(bool value);

  constexpr float_t& __get__transition();

  constexpr float_t const& __get__transition() const;

  constexpr void __set__transition(float_t value);

  constexpr float_t& __get__autoExposureLimit();

  constexpr float_t const& __get__autoExposureLimit() const;

  constexpr void __set__autoExposureLimit(float_t value);

  constexpr float_t& __get__noteSpawnIntensity();

  constexpr float_t const& __get__noteSpawnIntensity() const;

  constexpr void __set__noteSpawnIntensity(float_t value);

  constexpr ::GlobalNamespace::BloomFogEnvironmentParams*& __get__defaultFogParams();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogEnvironmentParams*> const& __get__defaultFogParams() const;

  constexpr void __set__defaultFogParams(::GlobalNamespace::BloomFogEnvironmentParams* value);

  constexpr ::GlobalNamespace::BloomFogEnvironmentParams*& __get__transitionFogParams();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogEnvironmentParams*> const& __get__transitionFogParams() const;

  constexpr void __set__transitionFogParams(::GlobalNamespace::BloomFogEnvironmentParams* value);

  static inline void setStaticF__customFogAttenuationID(int32_t value);

  static inline int32_t getStaticF__customFogAttenuationID();

  static inline void setStaticF__customFogOffsetID(int32_t value);

  static inline int32_t getStaticF__customFogOffsetID();

  static inline void setStaticF__customFogHeightFogStartYID(int32_t value);

  static inline int32_t getStaticF__customFogHeightFogStartYID();

  static inline void setStaticF__customFogHeightFogHeightID(int32_t value);

  static inline int32_t getStaticF__customFogHeightFogHeightID();

  /// @brief Method set_transition addr 0x1facf14 size 0x18 virtual false final false
  inline void set_transition(float_t value);

  /// @brief Method get_transition addr 0x1fad5c8 size 0x8 virtual false final false
  inline float_t get_transition();

  /// @brief Method get_defaultForParams addr 0x1fad5d0 size 0x8 virtual false final false
  inline ::GlobalNamespace::BloomFogEnvironmentParams* get_defaultForParams();

  /// @brief Method set_defaultForParams addr 0x1fad3f0 size 0x9c virtual false final false
  inline void set_defaultForParams(::GlobalNamespace::BloomFogEnvironmentParams* value);

  /// @brief Method get_transitionFogParams addr 0x1fad5d8 size 0x8 virtual false final false
  inline ::GlobalNamespace::BloomFogEnvironmentParams* get_transitionFogParams();

  /// @brief Method set_transitionFogParams addr 0x1fad230 size 0x98 virtual false final false
  inline void set_transitionFogParams(::GlobalNamespace::BloomFogEnvironmentParams* value);

  /// @brief Method set_bloomFogEnabled addr 0x1facf7c size 0x78 virtual false final false
  inline void set_bloomFogEnabled(bool value);

  /// @brief Method get_bloomFogEnabled addr 0x1fad5e0 size 0x8 virtual false final false
  inline bool get_bloomFogEnabled();

  /// @brief Method get_autoExposureLimit addr 0x1fad5e8 size 0x8 virtual false final false
  inline float_t get_autoExposureLimit();

  /// @brief Method get_noteSpawnIntensity addr 0x1fad5f0 size 0x8 virtual false final false
  inline float_t get_noteSpawnIntensity();

  /// @brief Method Setup addr 0x1facf2c size 0x8 virtual false final false
  inline void Setup(::GlobalNamespace::BloomFogEnvironmentParams* defaultFogParams);

  /// @brief Method OnEnable addr 0x1fad5f8 size 0x1c virtual true final false
  inline void OnEnable();

  /// @brief Method UpdateShaderParams addr 0x1facff4 size 0x198 virtual false final false
  inline void UpdateShaderParams();

  /// @brief Method SetParams addr 0x1fad614 size 0xe4 virtual false final false
  inline void SetParams(float_t attenuation, float_t offset, float_t heightFogStartY, float_t heightFogHeight, float_t autoExposureLimit, float_t noteSpawnIntensity);

  static inline ::GlobalNamespace::BloomFogSO* New_ctor();

  /// @brief Method .ctor addr 0x1fad6f8 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomFogSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomFogSO(BloomFogSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomFogSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomFogSO(BloomFogSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomFogSO();

public:
  /// @brief Field _bloomFogEnabled, offset: 0x18, size: 0x1, def value: None
  bool ____bloomFogEnabled;

  /// @brief Field _transition, offset: 0x1c, size: 0x4, def value: None
  float_t ____transition;

  /// @brief Field _autoExposureLimit, offset: 0x20, size: 0x4, def value: None
  float_t ____autoExposureLimit;

  /// @brief Field _noteSpawnIntensity, offset: 0x24, size: 0x4, def value: None
  float_t ____noteSpawnIntensity;

  /// @brief Field _defaultFogParams, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BloomFogEnvironmentParams* ____defaultFogParams;

  /// @brief Field _transitionFogParams, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BloomFogEnvironmentParams* ____transitionFogParams;

  /// @brief Field kBloomFogEnabledKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString kBloomFogEnabledKeyword{ u"ENABLE_BLOOM_FOG" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomFogSO, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogSO, ____bloomFogEnabled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogSO, ____transition) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogSO, ____autoExposureLimit) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogSO, ____noteSpawnIntensity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogSO, ____defaultFogParams) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogSO, ____transitionFogParams) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomFogSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogSO*, "", "BloomFogSO");
