#pragma once
// IWYU pragma private; include "GlobalNamespace/IAudioTimeSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IAudioTimeSource)
namespace GlobalNamespace {
struct IAudioTimeSource_State;
}
// Forward declare root types
namespace GlobalNamespace {
struct IAudioTimeSource_State;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::IAudioTimeSource_State);
MARK_REF_PTR_T(::GlobalNamespace::IAudioTimeSource);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: IAudioTimeSource/State
struct CORDL_TYPE IAudioTimeSource_State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __IAudioTimeSource_State_Unwrapped
  enum struct __IAudioTimeSource_State_Unwrapped : int32_t {
    __E_Playing = static_cast<int32_t>(0x0),
    __E_Paused = static_cast<int32_t>(0x1),
    __E_Stopped = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IAudioTimeSource_State_Unwrapped() const noexcept {
    return static_cast<__IAudioTimeSource_State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr IAudioTimeSource_State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IAudioTimeSource_State(int32_t value__) noexcept;

  /// @brief Field Paused value: I32(1)
  static ::GlobalNamespace::IAudioTimeSource_State const Paused;

  /// @brief Field Playing value: I32(0)
  static ::GlobalNamespace::IAudioTimeSource_State const Playing;

  /// @brief Field Stopped value: I32(2)
  static ::GlobalNamespace::IAudioTimeSource_State const Stopped;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5569 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IAudioTimeSource_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IAudioTimeSource_State, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IAudioTimeSource
class CORDL_TYPE IAudioTimeSource {
public:
  // Declarations
  using State = ::GlobalNamespace::IAudioTimeSource_State;

  __declspec(property(get = get_isReady)) bool isReady;

  __declspec(property(get = get_lastFrameDeltaSongTime)) float_t lastFrameDeltaSongTime;

  __declspec(property(get = get_songEndTime)) float_t songEndTime;

  __declspec(property(get = get_songLength)) float_t songLength;

  __declspec(property(get = get_songTime)) float_t songTime;

  __declspec(property(get = get_state)) ::GlobalNamespace::IAudioTimeSource_State state;

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

  /// @brief Method get_state, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IAudioTimeSource_State get_state();

  /// @brief Method get_timeScale, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_timeScale();

  // Ctor Parameters [CppParam { name: "", ty: "IAudioTimeSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAudioTimeSource(IAudioTimeSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5570 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAudioTimeSource_State, "", "IAudioTimeSource/State");
NEED_NO_BOX(::GlobalNamespace::IAudioTimeSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAudioTimeSource*, "", "IAudioTimeSource");
