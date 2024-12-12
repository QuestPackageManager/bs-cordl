#pragma once
// IWYU pragma private; include "UnityEngine/ContactPairPoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContactPairPoint)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct ContactPairPoint;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ContactPairPoint);
// Dependencies UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ContactPairPoint
struct CORDL_TYPE ContactPairPoint {
public:
  // Declarations
  __declspec(property(get = get_Impulse)) ::UnityEngine::Vector3 Impulse;

  __declspec(property(get = get_Normal)) ::UnityEngine::Vector3 Normal;

  __declspec(property(get = get_Position)) ::UnityEngine::Vector3 Position;

  __declspec(property(get = get_Separation)) float_t Separation;

  /// @brief Method get_Impulse, addr 0x490e544, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_Impulse();

  /// @brief Method get_Normal, addr 0x490e538, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_Normal();

  /// @brief Method get_Position, addr 0x490e524, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_Position();

  /// @brief Method get_Separation, addr 0x490e530, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Separation();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ContactPairPoint();

  // Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Separation", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_InternalFaceIndex0", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_Impulse", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_InternalFaceIndex1", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr ContactPairPoint(::UnityEngine::Vector3 m_Position, float_t m_Separation, ::UnityEngine::Vector3 m_Normal, uint32_t m_InternalFaceIndex0, ::UnityEngine::Vector3 m_Impulse,
                             uint32_t m_InternalFaceIndex1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15766 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field m_Position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Position;

  /// @brief Field m_Separation, offset: 0xc, size: 0x4, def value: None
  float_t m_Separation;

  /// @brief Field m_Normal, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Normal;

  /// @brief Field m_InternalFaceIndex0, offset: 0x1c, size: 0x4, def value: None
  uint32_t m_InternalFaceIndex0;

  /// @brief Field m_Impulse, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Impulse;

  /// @brief Field m_InternalFaceIndex1, offset: 0x2c, size: 0x4, def value: None
  uint32_t m_InternalFaceIndex1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ContactPairPoint, m_Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairPoint, m_Separation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairPoint, m_Normal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairPoint, m_InternalFaceIndex0) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairPoint, m_Impulse) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairPoint, m_InternalFaceIndex1) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ContactPairPoint, 0x30>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ContactPairPoint, "UnityEngine", "ContactPairPoint");
