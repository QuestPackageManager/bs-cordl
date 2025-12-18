#pragma once
// IWYU pragma private; include "UnityEngine/WaitWhile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__CustomYieldInstruction_def.hpp"
#include "UnityEngine/zzzz__WaitTimeoutMode_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WaitWhile)
namespace System {
class Action;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace UnityEngine {
class WaitWhile;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::WaitWhile);
// Dependencies UnityEngine.CustomYieldInstruction, UnityEngine.WaitTimeoutMode
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.WaitWhile
class CORDL_TYPE WaitWhile : public ::UnityEngine::CustomYieldInstruction {
public:
  // Declarations
  __declspec(property(get = get_keepWaiting)) bool keepWaiting;

  /// @brief Field m_MaxExecutionTime, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaxExecutionTime, put = __cordl_internal_set_m_MaxExecutionTime)) double_t m_MaxExecutionTime;

  /// @brief Field m_Predicate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Predicate, put = __cordl_internal_set_m_Predicate)) ::System::Func_1<bool>* m_Predicate;

  /// @brief Field m_TimeoutCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TimeoutCallback, put = __cordl_internal_set_m_TimeoutCallback)) ::System::Action* m_TimeoutCallback;

  /// @brief Field m_TimeoutMode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TimeoutMode, put = __cordl_internal_set_m_TimeoutMode)) ::UnityEngine::WaitTimeoutMode m_TimeoutMode;

  /// @brief Method GetTime, addr 0x69219bc, size 0x54, virtual false, abstract: false, final false
  inline double_t GetTime();

  static inline ::UnityEngine::WaitWhile* New_ctor(::System::Func_1<bool>* predicate);

  constexpr double_t const& __cordl_internal_get_m_MaxExecutionTime() const;

  constexpr double_t& __cordl_internal_get_m_MaxExecutionTime();

  constexpr ::System::Func_1<bool>* const& __cordl_internal_get_m_Predicate() const;

  constexpr ::System::Func_1<bool>*& __cordl_internal_get_m_Predicate();

  constexpr ::System::Action* const& __cordl_internal_get_m_TimeoutCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_m_TimeoutCallback();

  constexpr ::UnityEngine::WaitTimeoutMode const& __cordl_internal_get_m_TimeoutMode() const;

  constexpr ::UnityEngine::WaitTimeoutMode& __cordl_internal_get_m_TimeoutMode();

  constexpr void __cordl_internal_set_m_MaxExecutionTime(double_t value);

  constexpr void __cordl_internal_set_m_Predicate(::System::Func_1<bool>* value);

  constexpr void __cordl_internal_set_m_TimeoutCallback(::System::Action* value);

  constexpr void __cordl_internal_set_m_TimeoutMode(::UnityEngine::WaitTimeoutMode value);

  /// @brief Method .ctor, addr 0x69219ac, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_1<bool>* predicate);

  /// @brief Method get_keepWaiting, addr 0x69218ec, size 0xc0, virtual true, abstract: false, final false
  inline bool get_keepWaiting();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaitWhile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WaitWhile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaitWhile(WaitWhile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaitWhile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaitWhile(WaitWhile const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10368 };

  /// @brief Field m_Predicate, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<bool>* ___m_Predicate;

  /// @brief Field m_TimeoutCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___m_TimeoutCallback;

  /// @brief Field m_TimeoutMode, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::WaitTimeoutMode ___m_TimeoutMode;

  /// @brief Field m_MaxExecutionTime, offset: 0x28, size: 0x8, def value: None
  double_t ___m_MaxExecutionTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::WaitWhile, ___m_Predicate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::WaitWhile, ___m_TimeoutCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::WaitWhile, ___m_TimeoutMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::WaitWhile, ___m_MaxExecutionTime) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::WaitWhile, 0x30>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::WaitWhile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WaitWhile*, "UnityEngine", "WaitWhile");
