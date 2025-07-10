#pragma once
// IWYU pragma private; include "UnityEngine/JointMotor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JointMotor)
// Forward declare root types
namespace UnityEngine {
struct JointMotor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::JointMotor);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.JointMotor
struct CORDL_TYPE JointMotor {
public:
  // Declarations
  __declspec(property(get = get_force, put = set_force)) float_t force;

  __declspec(property(get = get_freeSpin, put = set_freeSpin)) bool freeSpin;

  __declspec(property(get = get_targetVelocity, put = set_targetVelocity)) float_t targetVelocity;

  /// @brief Method get_force, addr 0x48f5468, size 0x8, virtual false, abstract: false, final false
  inline float_t get_force();

  /// @brief Method get_freeSpin, addr 0x48f5478, size 0x10, virtual false, abstract: false, final false
  inline bool get_freeSpin();

  /// @brief Method get_targetVelocity, addr 0x48f5458, size 0x8, virtual false, abstract: false, final false
  inline float_t get_targetVelocity();

  /// @brief Method set_force, addr 0x48f5470, size 0x8, virtual false, abstract: false, final false
  inline void set_force(float_t value);

  /// @brief Method set_freeSpin, addr 0x48f5488, size 0xc, virtual false, abstract: false, final false
  inline void set_freeSpin(bool value);

  /// @brief Method set_targetVelocity, addr 0x48f5460, size 0x8, virtual false, abstract: false, final false
  inline void set_targetVelocity(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr JointMotor();

  // Ctor Parameters [CppParam { name: "m_TargetVelocity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Force", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_FreeSpin", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr JointMotor(float_t m_TargetVelocity, float_t m_Force, int32_t m_FreeSpin) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15725 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field m_TargetVelocity, offset: 0x0, size: 0x4, def value: None
  float_t m_TargetVelocity;

  /// @brief Field m_Force, offset: 0x4, size: 0x4, def value: None
  float_t m_Force;

  /// @brief Field m_FreeSpin, offset: 0x8, size: 0x4, def value: None
  int32_t m_FreeSpin;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::JointMotor, m_TargetVelocity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JointMotor, m_Force) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JointMotor, m_FreeSpin) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::JointMotor, 0xc>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::JointMotor, "UnityEngine", "JointMotor");
