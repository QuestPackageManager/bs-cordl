#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerManipulator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseManipulator_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PointerManipulator)
namespace UnityEngine::UIElements {
class IPointerEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerManipulator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerManipulator);
// Dependencies UnityEngine.UIElements.MouseManipulator
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerManipulator
class CORDL_TYPE PointerManipulator : public ::UnityEngine::UIElements::MouseManipulator {
public:
  // Declarations
  /// @brief Field m_CurrentPointerId, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentPointerId, put = __cordl_internal_set_m_CurrentPointerId)) int32_t m_CurrentPointerId;

  /// @brief Method CanStartManipulation, addr 0x4a53f5c, size 0x1e4, virtual false, abstract: false, final false
  inline bool CanStartManipulation(::UnityEngine::UIElements::IPointerEvent* e);

  /// @brief Method CanStopManipulation, addr 0x4a54140, size 0xb4, virtual false, abstract: false, final false
  inline bool CanStopManipulation(::UnityEngine::UIElements::IPointerEvent* e);

  static inline ::UnityEngine::UIElements::PointerManipulator* New_ctor();

  constexpr int32_t const& __cordl_internal_get_m_CurrentPointerId() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentPointerId();

  constexpr void __cordl_internal_set_m_CurrentPointerId(int32_t value);

  /// @brief Method .ctor, addr 0x4a541f4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerManipulator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerManipulator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerManipulator(PointerManipulator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerManipulator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerManipulator(PointerManipulator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6022 };

  /// @brief Field m_CurrentPointerId, offset: 0x2c, size: 0x4, def value: None
  int32_t ___m_CurrentPointerId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PointerManipulator, ___m_CurrentPointerId) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerManipulator, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerManipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerManipulator*, "UnityEngine.UIElements", "PointerManipulator");
