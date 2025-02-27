#pragma once
// IWYU pragma private; include "GlobalNamespace/IAudioTimeSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IAudioTimeSource)
// Forward declare root types
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IAudioTimeSource);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IAudioTimeSource
class CORDL_TYPE IAudioTimeSource {
public:
  // Declarations
  __declspec(property(get = get_isReady)) bool isReady;

  __declspec(property(get = get_lastFrameDeltaSongTime)) float_t lastFrameDeltaSongTime;

  __declspec(property(get = get_songEndTime)) float_t songEndTime;

  __declspec(property(get = get_songLength)) float_t songLength;

  __declspec(property(get = get_songTime)) float_t songTime;

  __declspec(property(get = get_timeScale)) float_t timeScale;

  /// @brief Method get_isReady, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_isReady();

  /// @brief Method get_lastFrameDeltaSongTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_lastFrameDeltaSongTime();

  /// @brief Method get_songEndTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_songEndTime();

  /// @brief Method get_songLength, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_songLength();

  /// @brief Method get_songTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_songTime();

  /// @brief Method get_timeScale, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_timeScale();

  // Ctor Parameters [CppParam { name: "", ty: "IAudioTimeSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAudioTimeSource(IAudioTimeSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4010 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IAudioTimeSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAudioTimeSource*, "", "IAudioTimeSource");
