#pragma once
// IWYU pragma private; include "UnityEngine/WaitForSeconds.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WaitForSeconds)
// Forward declare root types
namespace UnityEngine {
class WaitForSeconds;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::WaitForSeconds);
// Dependencies UnityEngine.YieldInstruction
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.WaitForSeconds
class CORDL_TYPE WaitForSeconds : public ::UnityEngine::YieldInstruction {
public:
  // Declarations
  /// @brief Field m_Seconds, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Seconds, put = __cordl_internal_set_m_Seconds)) float_t m_Seconds;

  static inline ::UnityEngine::WaitForSeconds* New_ctor(float_t seconds);

  constexpr float_t const& __cordl_internal_get_m_Seconds() const;

  constexpr float_t& __cordl_internal_get_m_Seconds();

  constexpr void __cordl_internal_set_m_Seconds(float_t value);

  /// @brief Method .ctor, addr 0x48b3828, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t seconds);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaitForSeconds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WaitForSeconds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaitForSeconds(WaitForSeconds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaitForSeconds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaitForSeconds(WaitForSeconds const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10924 };

  /// @brief Field m_Seconds, offset: 0x10, size: 0x4, def value: None
  float_t ___m_Seconds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::WaitForSeconds, ___m_Seconds) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::WaitForSeconds, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::WaitForSeconds);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WaitForSeconds*, "UnityEngine", "WaitForSeconds");
