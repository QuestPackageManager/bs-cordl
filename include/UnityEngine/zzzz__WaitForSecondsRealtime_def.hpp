#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10242))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10235))
// CS Name: ::UnityEngine::WaitForSecondsRealtime*
class CORDL_TYPE WaitForSecondsRealtime : public ::UnityEngine::CustomYieldInstruction {
public:
  // Declarations
  /// @brief Field <waitTime>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__waitTime_k__BackingField, put = __set__waitTime_k__BackingField)) float_t _waitTime_k__BackingField;

  /// @brief Field m_WaitUntilTime, offset 0x14, size 0x4
  __declspec(property(get = __get_m_WaitUntilTime, put = __set_m_WaitUntilTime)) float_t m_WaitUntilTime;

  __declspec(property(get = get_waitTime, put = set_waitTime)) float_t waitTime;

  __declspec(property(get = get_keepWaiting)) bool keepWaiting;

  constexpr float_t& __get__waitTime_k__BackingField();

  constexpr float_t const& __get__waitTime_k__BackingField() const;

  constexpr void __set__waitTime_k__BackingField(float_t value);

  constexpr float_t& __get_m_WaitUntilTime();

  constexpr float_t const& __get_m_WaitUntilTime() const;

  constexpr void __set_m_WaitUntilTime(float_t value);

  /// @brief Method get_waitTime, addr 0x2cd3780, size 0x8, virtual false, abstract: false, final false
  inline float_t get_waitTime();

  /// @brief Method set_waitTime, addr 0x2cd3788, size 0x8, virtual false, abstract: false, final false
  inline void set_waitTime(float_t value);

  /// @brief Method get_keepWaiting, addr 0x2cd3790, size 0x9c, virtual true, abstract: false, final false
  inline bool get_keepWaiting();

  static inline ::UnityEngine::WaitForSecondsRealtime* New_ctor(float_t time);

  /// @brief Method .ctor, addr 0x2cd382c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(float_t time);

  /// @brief Method Reset, addr 0x2cd385c, size 0xc, virtual true, abstract: false, final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "WaitForSecondsRealtime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaitForSecondsRealtime(WaitForSecondsRealtime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaitForSecondsRealtime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaitForSecondsRealtime(WaitForSecondsRealtime const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaitForSecondsRealtime();

public:
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
