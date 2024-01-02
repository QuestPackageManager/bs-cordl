#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MockAudioTimeSource)
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace GlobalNamespace {
class MockAudioTimeSource;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockAudioTimeSource);
// Type: ::MockAudioTimeSource
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4067))
// CS Name: ::MockAudioTimeSource*
class CORDL_TYPE MockAudioTimeSource : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <songTime>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__songTime_k__BackingField, put = __set__songTime_k__BackingField)) float_t _songTime_k__BackingField;

  /// @brief Field <lastFrameDeltaSongTime>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __get__lastFrameDeltaSongTime_k__BackingField, put = __set__lastFrameDeltaSongTime_k__BackingField)) float_t _lastFrameDeltaSongTime_k__BackingField;

  __declspec(property(get = get_songTime, put = set_songTime)) float_t songTime;

  __declspec(property(get = get_lastFrameDeltaSongTime, put = set_lastFrameDeltaSongTime)) float_t lastFrameDeltaSongTime;

  __declspec(property(get = get_songEndTime)) float_t songEndTime;

  __declspec(property(get = get_songLength)) float_t songLength;

  __declspec(property(get = get_isReady)) bool isReady;

  /// @brief Convert operator to "::GlobalNamespace::IAudioTimeSource"
  constexpr operator ::GlobalNamespace::IAudioTimeSource*() noexcept;

  constexpr float_t& __get__songTime_k__BackingField();

  constexpr float_t const& __get__songTime_k__BackingField() const;

  constexpr void __set__songTime_k__BackingField(float_t value);

  constexpr float_t& __get__lastFrameDeltaSongTime_k__BackingField();

  constexpr float_t const& __get__lastFrameDeltaSongTime_k__BackingField() const;

  constexpr void __set__lastFrameDeltaSongTime_k__BackingField(float_t value);

  /// @brief Method get_songTime, addr 0x222e17c, size 0x8, virtual true, abstract: false, final true
  inline float_t get_songTime();

  /// @brief Method set_songTime, addr 0x222e184, size 0x8, virtual false, abstract: false, final false
  inline void set_songTime(float_t value);

  /// @brief Method get_lastFrameDeltaSongTime, addr 0x222e18c, size 0x8, virtual true, abstract: false, final true
  inline float_t get_lastFrameDeltaSongTime();

  /// @brief Method set_lastFrameDeltaSongTime, addr 0x222e194, size 0x8, virtual false, abstract: false, final false
  inline void set_lastFrameDeltaSongTime(float_t value);

  /// @brief Method get_songEndTime, addr 0x222e19c, size 0xc, virtual true, abstract: false, final true
  inline float_t get_songEndTime();

  /// @brief Method get_songLength, addr 0x222e1a8, size 0xc, virtual true, abstract: false, final true
  inline float_t get_songLength();

  /// @brief Method get_isReady, addr 0x222e1b4, size 0x8, virtual true, abstract: false, final true
  inline bool get_isReady();

  /// @brief Method Update, addr 0x222e1bc, size 0x38, virtual false, abstract: false, final false
  inline void Update();

  static inline ::GlobalNamespace::MockAudioTimeSource* New_ctor();

  /// @brief Method .ctor, addr 0x222e1f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MockAudioTimeSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockAudioTimeSource(MockAudioTimeSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockAudioTimeSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockAudioTimeSource(MockAudioTimeSource const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockAudioTimeSource();

public:
  /// @brief Field <songTime>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t ____songTime_k__BackingField;

  /// @brief Field <lastFrameDeltaSongTime>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  float_t ____lastFrameDeltaSongTime_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockAudioTimeSource, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockAudioTimeSource, ____songTime_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockAudioTimeSource, ____lastFrameDeltaSongTime_k__BackingField) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockAudioTimeSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockAudioTimeSource*, "", "MockAudioTimeSource");
