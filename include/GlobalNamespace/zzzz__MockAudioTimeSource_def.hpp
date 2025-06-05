#pragma once
// IWYU pragma private; include "GlobalNamespace/MockAudioTimeSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MockAudioTimeSource)
// Forward declare root types
namespace GlobalNamespace {
class MockAudioTimeSource;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockAudioTimeSource);
// Dependencies IAudioTimeSource, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockAudioTimeSource
class CORDL_TYPE MockAudioTimeSource : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <lastFrameDeltaSongTime>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__lastFrameDeltaSongTime_k__BackingField,
                      put = __cordl_internal_set__lastFrameDeltaSongTime_k__BackingField)) float_t _lastFrameDeltaSongTime_k__BackingField;

  /// @brief Field <songTime>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__songTime_k__BackingField, put = __cordl_internal_set__songTime_k__BackingField)) float_t _songTime_k__BackingField;

  __declspec(property(get = get_isReady)) bool isReady;

  __declspec(property(get = get_lastFrameDeltaSongTime, put = set_lastFrameDeltaSongTime)) float_t lastFrameDeltaSongTime;

  __declspec(property(get = get_songEndTime)) float_t songEndTime;

  __declspec(property(get = get_songLength)) float_t songLength;

  __declspec(property(get = get_songTime, put = set_songTime)) float_t songTime;

  __declspec(property(get = get_timeScale)) float_t timeScale;

  /// @brief Convert operator to "::GlobalNamespace::IAudioTimeSource"
  constexpr operator ::GlobalNamespace::IAudioTimeSource*() noexcept;

  static inline ::GlobalNamespace::MockAudioTimeSource* New_ctor();

  /// @brief Method Update, addr 0x3ad1f5c, size 0x38, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get__lastFrameDeltaSongTime_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__lastFrameDeltaSongTime_k__BackingField();

  constexpr float_t const& __cordl_internal_get__songTime_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__songTime_k__BackingField();

  constexpr void __cordl_internal_set__lastFrameDeltaSongTime_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__songTime_k__BackingField(float_t value);

  /// @brief Method .ctor, addr 0x3ad1f94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isReady, addr 0x3ad1f54, size 0x8, virtual true, abstract: false, final true
  inline bool get_isReady();

  /// @brief Method get_lastFrameDeltaSongTime, addr 0x3ad1f24, size 0x8, virtual true, abstract: false, final true
  inline float_t get_lastFrameDeltaSongTime();

  /// @brief Method get_songEndTime, addr 0x3ad1f34, size 0xc, virtual true, abstract: false, final true
  inline float_t get_songEndTime();

  /// @brief Method get_songLength, addr 0x3ad1f40, size 0xc, virtual true, abstract: false, final true
  inline float_t get_songLength();

  /// @brief Method get_songTime, addr 0x3ad1f14, size 0x8, virtual true, abstract: false, final true
  inline float_t get_songTime();

  /// @brief Method get_timeScale, addr 0x3ad1f4c, size 0x8, virtual true, abstract: false, final true
  inline float_t get_timeScale();

  /// @brief Convert to "::GlobalNamespace::IAudioTimeSource"
  constexpr ::GlobalNamespace::IAudioTimeSource* i___GlobalNamespace__IAudioTimeSource() noexcept;

  /// @brief Method set_lastFrameDeltaSongTime, addr 0x3ad1f2c, size 0x8, virtual false, abstract: false, final false
  inline void set_lastFrameDeltaSongTime(float_t value);

  /// @brief Method set_songTime, addr 0x3ad1f1c, size 0x8, virtual false, abstract: false, final false
  inline void set_songTime(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockAudioTimeSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockAudioTimeSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockAudioTimeSource(MockAudioTimeSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockAudioTimeSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockAudioTimeSource(MockAudioTimeSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4014 };

  /// @brief Field <songTime>k__BackingField, offset: 0x20, size: 0x4, def value: None
  float_t ____songTime_k__BackingField;

  /// @brief Field <lastFrameDeltaSongTime>k__BackingField, offset: 0x24, size: 0x4, def value: None
  float_t ____lastFrameDeltaSongTime_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockAudioTimeSource, ____songTime_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockAudioTimeSource, ____lastFrameDeltaSongTime_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockAudioTimeSource, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockAudioTimeSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockAudioTimeSource*, "", "MockAudioTimeSource");
