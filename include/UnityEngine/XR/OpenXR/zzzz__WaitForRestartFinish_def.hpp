#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/WaitForRestartFinish.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__CustomYieldInstruction_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WaitForRestartFinish)
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class WaitForRestartFinish;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::WaitForRestartFinish);
// Dependencies UnityEngine.CustomYieldInstruction
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.WaitForRestartFinish
class CORDL_TYPE WaitForRestartFinish : public ::UnityEngine::CustomYieldInstruction {
public:
  // Declarations
  __declspec(property(get = get_keepWaiting)) bool keepWaiting;

  /// @brief Field m_Timeout, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Timeout, put = __cordl_internal_set_m_Timeout)) float_t m_Timeout;

  static inline ::UnityEngine::XR::OpenXR::WaitForRestartFinish* New_ctor(float_t timeout);

  constexpr float_t const& __cordl_internal_get_m_Timeout() const;

  constexpr float_t& __cordl_internal_get_m_Timeout();

  constexpr void __cordl_internal_set_m_Timeout(float_t value);

  /// @brief Method .ctor, addr 0x68246d0, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(float_t timeout);

  /// @brief Method get_keepWaiting, addr 0x6826340, size 0xec, virtual true, abstract: false, final false
  inline bool get_keepWaiting();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaitForRestartFinish();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WaitForRestartFinish", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaitForRestartFinish(WaitForRestartFinish&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaitForRestartFinish", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaitForRestartFinish(WaitForRestartFinish const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18482 };

  /// @brief Field m_Timeout, offset: 0x10, size: 0x4, def value: None
  float_t ___m_Timeout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::WaitForRestartFinish, ___m_Timeout) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::WaitForRestartFinish, 0x18>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
NEED_NO_BOX(::UnityEngine::XR::OpenXR::WaitForRestartFinish);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::WaitForRestartFinish*, "UnityEngine.XR.OpenXR", "WaitForRestartFinish");
