#pragma once
// IWYU pragma private; include "UnityEngine/Playables/FrameData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameData)
namespace UnityEngine::Playables {
struct FrameData_EvaluationType;
}
namespace UnityEngine::Playables {
struct FrameData_Flags;
}
namespace UnityEngine::Playables {
struct PlayState;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct FrameData_EvaluationType;
}
namespace UnityEngine::Playables {
struct FrameData_Flags;
}
namespace UnityEngine::Playables {
struct FrameData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::FrameData_EvaluationType);
MARK_VAL_T(::UnityEngine::Playables::FrameData_Flags);
MARK_VAL_T(::UnityEngine::Playables::FrameData);
// Dependencies
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: UnityEngine.Playables.FrameData/Flags
struct CORDL_TYPE FrameData_Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FrameData_Flags_Unwrapped
  enum struct __FrameData_Flags_Unwrapped : int32_t {
    __E_Evaluate = static_cast<int32_t>(0x1),
    __E_SeekOccured = static_cast<int32_t>(0x2),
    __E_Loop = static_cast<int32_t>(0x4),
    __E_Hold = static_cast<int32_t>(0x8),
    __E_EffectivePlayStateDelayed = static_cast<int32_t>(0x10),
    __E_EffectivePlayStatePlaying = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FrameData_Flags_Unwrapped() const noexcept {
    return static_cast<__FrameData_Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FrameData_Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FrameData_Flags(int32_t value__) noexcept;

  /// @brief Field EffectivePlayStateDelayed value: I32(16)
  static ::UnityEngine::Playables::FrameData_Flags const EffectivePlayStateDelayed;

  /// @brief Field EffectivePlayStatePlaying value: I32(32)
  static ::UnityEngine::Playables::FrameData_Flags const EffectivePlayStatePlaying;

  /// @brief Field Evaluate value: I32(1)
  static ::UnityEngine::Playables::FrameData_Flags const Evaluate;

  /// @brief Field Hold value: I32(8)
  static ::UnityEngine::Playables::FrameData_Flags const Hold;

  /// @brief Field Loop value: I32(4)
  static ::UnityEngine::Playables::FrameData_Flags const Loop;

  /// @brief Field SeekOccured value: I32(2)
  static ::UnityEngine::Playables::FrameData_Flags const SeekOccured;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11263 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::FrameData_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::FrameData_Flags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Playables
// Dependencies
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: UnityEngine.Playables.FrameData/EvaluationType
struct CORDL_TYPE FrameData_EvaluationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FrameData_EvaluationType_Unwrapped
  enum struct __FrameData_EvaluationType_Unwrapped : int32_t {
    __E_Evaluate = static_cast<int32_t>(0x0),
    __E_Playback = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FrameData_EvaluationType_Unwrapped() const noexcept {
    return static_cast<__FrameData_EvaluationType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FrameData_EvaluationType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FrameData_EvaluationType(int32_t value__) noexcept;

  /// @brief Field Evaluate value: I32(0)
  static ::UnityEngine::Playables::FrameData_EvaluationType const Evaluate;

  /// @brief Field Playback value: I32(1)
  static ::UnityEngine::Playables::FrameData_EvaluationType const Playback;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11264 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::FrameData_EvaluationType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::FrameData_EvaluationType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Playables
// Dependencies UnityEngine.Playables.FrameData::Flags, UnityEngine.Playables.PlayableOutput
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: UnityEngine.Playables.FrameData
struct CORDL_TYPE FrameData {
public:
  // Declarations
  using EvaluationType = ::UnityEngine::Playables::FrameData_EvaluationType;

  using Flags = ::UnityEngine::Playables::FrameData_Flags;

  __declspec(property(get = get_deltaTime)) float_t deltaTime;

  __declspec(property(get = get_effectivePlayState)) ::UnityEngine::Playables::PlayState effectivePlayState;

  __declspec(property(get = get_effectiveSpeed)) float_t effectiveSpeed;

  __declspec(property(get = get_evaluationType)) ::UnityEngine::Playables::FrameData_EvaluationType evaluationType;

  __declspec(property(get = get_output)) ::UnityEngine::Playables::PlayableOutput output;

  __declspec(property(get = get_seekOccurred)) bool seekOccurred;

  __declspec(property(get = get_timeHeld)) bool timeHeld;

  __declspec(property(get = get_timeLooped)) bool timeLooped;

  /// @brief Method HasFlags, addr 0x48cc050, size 0x10, virtual false, abstract: false, final false
  inline bool HasFlags(::UnityEngine::Playables::FrameData_Flags flag);

  /// @brief Method get_deltaTime, addr 0x48cc060, size 0xc, virtual false, abstract: false, final false
  inline float_t get_deltaTime();

  /// @brief Method get_effectivePlayState, addr 0x48cc0b4, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayState get_effectivePlayState();

  /// @brief Method get_effectiveSpeed, addr 0x48cc06c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_effectiveSpeed();

  /// @brief Method get_evaluationType, addr 0x48cc074, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::FrameData_EvaluationType get_evaluationType();

  /// @brief Method get_output, addr 0x48cc0a8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableOutput get_output();

  /// @brief Method get_seekOccurred, addr 0x48cc084, size 0xc, virtual false, abstract: false, final false
  inline bool get_seekOccurred();

  /// @brief Method get_timeHeld, addr 0x48cc09c, size 0xc, virtual false, abstract: false, final false
  inline bool get_timeHeld();

  /// @brief Method get_timeLooped, addr 0x48cc090, size 0xc, virtual false, abstract: false, final false
  inline bool get_timeLooped();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FrameData();

  // Ctor Parameters [CppParam { name: "m_FrameID", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_DeltaTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Weight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_EffectiveWeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_EffectiveParentDelay", ty:
  // "double_t", modifiers: "", def_value: None }, CppParam { name: "m_EffectiveParentSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_EffectiveSpeed", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::Playables::FrameData_Flags", modifiers: "", def_value: None }, CppParam { name: "m_Output", ty:
  // "::UnityEngine::Playables::PlayableOutput", modifiers: "", def_value: None }]
  constexpr FrameData(uint64_t m_FrameID, double_t m_DeltaTime, float_t m_Weight, float_t m_EffectiveWeight, double_t m_EffectiveParentDelay, float_t m_EffectiveParentSpeed, float_t m_EffectiveSpeed,
                      ::UnityEngine::Playables::FrameData_Flags m_Flags, ::UnityEngine::Playables::PlayableOutput m_Output) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11265 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field m_FrameID, offset: 0x0, size: 0x8, def value: None
  uint64_t m_FrameID;

  /// @brief Field m_DeltaTime, offset: 0x8, size: 0x8, def value: None
  double_t m_DeltaTime;

  /// @brief Field m_Weight, offset: 0x10, size: 0x4, def value: None
  float_t m_Weight;

  /// @brief Field m_EffectiveWeight, offset: 0x14, size: 0x4, def value: None
  float_t m_EffectiveWeight;

  /// @brief Field m_EffectiveParentDelay, offset: 0x18, size: 0x8, def value: None
  double_t m_EffectiveParentDelay;

  /// @brief Field m_EffectiveParentSpeed, offset: 0x20, size: 0x4, def value: None
  float_t m_EffectiveParentSpeed;

  /// @brief Field m_EffectiveSpeed, offset: 0x24, size: 0x4, def value: None
  float_t m_EffectiveSpeed;

  /// @brief Field m_Flags, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Playables::FrameData_Flags m_Flags;

  /// @brief Field m_Output, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableOutput m_Output;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::FrameData, m_FrameID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_DeltaTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_Weight) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_EffectiveWeight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_EffectiveParentDelay) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_EffectiveParentSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_EffectiveSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_Flags) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_Output) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::FrameData, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::FrameData_EvaluationType, "UnityEngine.Playables", "FrameData/EvaluationType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::FrameData_Flags, "UnityEngine.Playables", "FrameData/Flags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::FrameData, "UnityEngine.Playables", "FrameData");
