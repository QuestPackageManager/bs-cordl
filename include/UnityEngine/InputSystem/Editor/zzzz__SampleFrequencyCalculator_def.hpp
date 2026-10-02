#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Editor/SampleFrequencyCalculator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SampleFrequencyCalculator)
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Editor {
struct SampleFrequencyCalculator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Editor::SampleFrequencyCalculator);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Editor::SampleFrequencyCalculator, "UnityEngine.InputSystem.Editor", "SampleFrequencyCalculator");
// Dependencies
namespace UnityEngine::InputSystem::Editor {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Editor.SampleFrequencyCalculator
struct CORDL_TYPE SampleFrequencyCalculator {
public:
  // Declarations
  __declspec(property(get = get_frequency, put = set_frequency)) float_t frequency;

  __declspec(property(get = get_targetFrequency, put = set_targetFrequency)) float_t targetFrequency;

  /// @brief Method ProcessSample, addr 0x69d917c, size 0x14, virtual false, abstract: false, final false
  inline void ProcessSample(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method Update, addr 0x69d91a0, size 0x74, virtual false, abstract: false, final false
  inline bool Update();

  /// @brief Method Update, addr 0x69d9214, size 0x3c, virtual false, abstract: false, final false
  inline bool Update(double_t realtimeSinceStartup);

  /// @brief Method .ctor, addr 0x69d9148, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t targetFrequency, double_t realtimeSinceStartup);

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_frequency, addr 0x69d916c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_frequency();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_targetFrequency, addr 0x69d915c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_targetFrequency();

  /// [CompilerGenerated]
  /// @brief Method set_frequency, addr 0x69d9174, size 0x8, virtual false, abstract: false, final false
  inline void set_frequency(float_t value);

  /// [CompilerGenerated]
  /// @brief Method set_targetFrequency, addr 0x69d9164, size 0x8, virtual false, abstract: false, final false
  inline void set_targetFrequency(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SampleFrequencyCalculator();

  // Ctor Parameters [CppParam { name: "m_LastUpdateTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SampleCount", ty: "int32_t", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "_targetFrequency_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_frequency_k__BackingField", ty:
  // "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr SampleFrequencyCalculator(double_t m_LastUpdateTime, int32_t m_SampleCount, float_t _targetFrequency_k__BackingField, float_t _frequency_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10918 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_LastUpdateTime, offset: 0x0, size: 0x8, def value: None
  double_t m_LastUpdateTime;

  /// @brief Field m_SampleCount, offset: 0x8, size: 0x4, def value: None
  int32_t m_SampleCount;

  /// [CompilerGenerated]
  /// @brief Field <targetFrequency>k__BackingField, offset: 0xc, size: 0x4, def value: None
  float_t _targetFrequency_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <frequency>k__BackingField, offset: 0x10, size: 0x4, def value: None
  float_t _frequency_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Editor::SampleFrequencyCalculator, m_LastUpdateTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Editor::SampleFrequencyCalculator, m_SampleCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Editor::SampleFrequencyCalculator, _targetFrequency_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Editor::SampleFrequencyCalculator, _frequency_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::Editor::SampleFrequencyCalculator) == 0x18, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Editor
