#pragma once
// IWYU pragma private; include "UnityEngine/WaitForSecondsRealtime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__CustomYieldInstruction_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WaitForSecondsRealtime)
// Forward declare root types
namespace UnityEngine {
class WaitForSecondsRealtime;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::WaitForSecondsRealtime);
// Type: UnityEngine::WaitForSecondsRealtime
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::WaitForSecondsRealtime*
class CORDL_TYPE WaitForSecondsRealtime : public ::UnityEngine::CustomYieldInstruction {
public:
  // Declarations
  /// @brief Field <waitTime>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__waitTime_k__BackingField, put = __cordl_internal_set__waitTime_k__BackingField)) float_t _waitTime_k__BackingField;

  __declspec(property(get = get_keepWaiting)) bool keepWaiting;

  /// @brief Field m_WaitUntilTime, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_WaitUntilTime, put = __cordl_internal_set_m_WaitUntilTime)) float_t m_WaitUntilTime;

  __declspec(property(get = get_waitTime, put = set_waitTime)) float_t waitTime;

  static inline ::UnityEngine::WaitForSecondsRealtime* New_ctor(float_t time);

  /// @brief Method Reset, addr 0x3449b08, size 0xc, virtual true, abstract: false, final false
  inline void Reset();

  constexpr float_t const& __cordl_internal_get__waitTime_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__waitTime_k__BackingField();

  constexpr float_t const& __cordl_internal_get_m_WaitUntilTime() const;

  constexpr float_t& __cordl_internal_get_m_WaitUntilTime();

  constexpr void __cordl_internal_set__waitTime_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_m_WaitUntilTime(float_t value);

  /// @brief Method .ctor, addr 0x3449ad8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(float_t time);

  /// @brief Method get_keepWaiting, addr 0x3449a3c, size 0x9c, virtual true, abstract: false, final false
  inline bool get_keepWaiting();

  /// @brief Method get_waitTime, addr 0x3449a2c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_waitTime();

  /// @brief Method set_waitTime, addr 0x3449a34, size 0x8, virtual false, abstract: false, final false
  inline void set_waitTime(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaitForSecondsRealtime();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WaitForSecondsRealtime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaitForSecondsRealtime(WaitForSecondsRealtime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaitForSecondsRealtime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaitForSecondsRealtime(WaitForSecondsRealtime const&) = delete;

  /// @brief Field <waitTime>k__BackingField, offset: 0x10, size: 0x4, def value: None
  float_t ____waitTime_k__BackingField;

  /// @brief Field m_WaitUntilTime, offset: 0x14, size: 0x4, def value: None
  float_t ___m_WaitUntilTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::WaitForSecondsRealtime, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::WaitForSecondsRealtime, ____waitTime_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::WaitForSecondsRealtime, ___m_WaitUntilTime) == 0x14, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::WaitForSecondsRealtime);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WaitForSecondsRealtime*, "UnityEngine", "WaitForSecondsRealtime");
