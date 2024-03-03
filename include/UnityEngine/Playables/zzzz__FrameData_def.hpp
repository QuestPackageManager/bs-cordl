#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameData)
namespace UnityEngine::Playables {
struct PlayState;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine::Playables {
struct __FrameData__EvaluationType;
}
namespace UnityEngine::Playables {
struct __FrameData__Flags;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct __FrameData__EvaluationType;
}
namespace UnityEngine::Playables {
struct __FrameData__Flags;
}
namespace UnityEngine::Playables {
struct FrameData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::__FrameData__EvaluationType);
MARK_VAL_T(::UnityEngine::Playables::__FrameData__Flags);
MARK_VAL_T(::UnityEngine::Playables::FrameData);
// Type: ::Flags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: ::FrameData::Flags
struct CORDL_TYPE __FrameData__Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____FrameData__Flags_Unwrapped
  enum struct ____FrameData__Flags_Unwrapped : int32_t {
    __E_Evaluate = static_cast<int32_t>(0x1),
    __E_SeekOccured = static_cast<int32_t>(0x2),
    __E_Loop = static_cast<int32_t>(0x4),
    __E_Hold = static_cast<int32_t>(0x8),
    __E_EffectivePlayStateDelayed = static_cast<int32_t>(0x10),
    __E_EffectivePlayStatePlaying = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____FrameData__Flags_Unwrapped() const noexcept {
    return static_cast<____FrameData__Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __FrameData__Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __FrameData__Flags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field EffectivePlayStateDelayed value: static_cast<int32_t>(0x10)
  static ::UnityEngine::Playables::__FrameData__Flags const EffectivePlayStateDelayed;

  /// @brief Field EffectivePlayStatePlaying value: static_cast<int32_t>(0x20)
  static ::UnityEngine::Playables::__FrameData__Flags const EffectivePlayStatePlaying;

  /// @brief Field Evaluate value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Playables::__FrameData__Flags const Evaluate;

  /// @brief Field Hold value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Playables::__FrameData__Flags const Hold;

  /// @brief Field Loop value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Playables::__FrameData__Flags const Loop;

  /// @brief Field SeekOccured value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Playables::__FrameData__Flags const SeekOccured;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::__FrameData__Flags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Playables::__FrameData__Flags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Playables
// Type: ::EvaluationType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: ::FrameData::EvaluationType
struct CORDL_TYPE __FrameData__EvaluationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____FrameData__EvaluationType_Unwrapped
  enum struct ____FrameData__EvaluationType_Unwrapped : int32_t {
    __E_Evaluate = static_cast<int32_t>(0x0),
    __E_Playback = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____FrameData__EvaluationType_Unwrapped() const noexcept {
    return static_cast<____FrameData__EvaluationType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __FrameData__EvaluationType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __FrameData__EvaluationType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Evaluate value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Playables::__FrameData__EvaluationType const Evaluate;

  /// @brief Field Playback value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Playables::__FrameData__EvaluationType const Playback;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::__FrameData__EvaluationType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Playables::__FrameData__EvaluationType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Playables
// Type: UnityEngine.Playables::FrameData
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: ::UnityEngine.Playables::FrameData
struct CORDL_TYPE FrameData {
public:
  // Declarations
  using EvaluationType = ::UnityEngine::Playables::__FrameData__EvaluationType;

  using Flags = ::UnityEngine::Playables::__FrameData__Flags;

  __declspec(property(get = get_deltaTime)) float_t deltaTime;

  __declspec(property(get = get_effectivePlayState))::UnityEngine::Playables::PlayState effectivePlayState;

  __declspec(property(get = get_effectiveSpeed)) float_t effectiveSpeed;

  __declspec(property(get = get_evaluationType))::UnityEngine::Playables::__FrameData__EvaluationType evaluationType;

  __declspec(property(get = get_output))::UnityEngine::Playables::PlayableOutput output;

  __declspec(property(get = get_seekOccurred)) bool seekOccurred;

  __declspec(property(get = get_timeHeld)) bool timeHeld;

  __declspec(property(get = get_timeLooped)) bool timeLooped;

  /// @brief Method HasFlags, addr 0x2deb7bc, size 0x10, virtual false, abstract: false, final false
  inline bool HasFlags(::UnityEngine::Playables::__FrameData__Flags flag);

  /// @brief Method get_deltaTime, addr 0x2deb7cc, size 0xc, virtual false, abstract: false, final false
  inline float_t get_deltaTime();

  /// @brief Method get_effectivePlayState, addr 0x2deb820, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayState get_effectivePlayState();

  /// @brief Method get_effectiveSpeed, addr 0x2deb7d8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_effectiveSpeed();

  /// @brief Method get_evaluationType, addr 0x2deb7e0, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::__FrameData__EvaluationType get_evaluationType();

  /// @brief Method get_output, addr 0x2deb814, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableOutput get_output();

  /// @brief Method get_seekOccurred, addr 0x2deb7f0, size 0xc, virtual false, abstract: false, final false
  inline bool get_seekOccurred();

  /// @brief Method get_timeHeld, addr 0x2deb808, size 0xc, virtual false, abstract: false, final false
  inline bool get_timeHeld();

  /// @brief Method get_timeLooped, addr 0x2deb7fc, size 0xc, virtual false, abstract: false, final false
  inline bool get_timeLooped();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FrameData();

  // Ctor Parameters [CppParam { name: "m_FrameID", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_DeltaTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Weight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_EffectiveWeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_EffectiveParentDelay", ty:
  // "double_t", modifiers: "", def_value: None }, CppParam { name: "m_EffectiveParentSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_EffectiveSpeed", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::Playables::__FrameData__Flags", modifiers: "", def_value: None }, CppParam { name: "m_Output", ty:
  // "::UnityEngine::Playables::PlayableOutput", modifiers: "", def_value: None }]
  constexpr FrameData(uint64_t m_FrameID, double_t m_DeltaTime, float_t m_Weight, float_t m_EffectiveWeight, double_t m_EffectiveParentDelay, float_t m_EffectiveParentSpeed, float_t m_EffectiveSpeed,
                      ::UnityEngine::Playables::__FrameData__Flags m_Flags, ::UnityEngine::Playables::PlayableOutput m_Output) noexcept;

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
  ::UnityEngine::Playables::__FrameData__Flags m_Flags;

  /// @brief Field m_Output, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableOutput m_Output;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::FrameData, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_FrameID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_DeltaTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_Weight) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_EffectiveWeight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_EffectiveParentDelay) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_EffectiveParentSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_EffectiveSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_Flags) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_Output) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::__FrameData__EvaluationType, "UnityEngine.Playables", "FrameData/EvaluationType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::__FrameData__Flags, "UnityEngine.Playables", "FrameData/Flags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::FrameData, "UnityEngine.Playables", "FrameData");
