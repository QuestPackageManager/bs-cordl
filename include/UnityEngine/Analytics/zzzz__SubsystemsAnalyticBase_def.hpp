#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/SubsystemsAnalyticBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SubsystemsAnalyticBase)
// Forward declare root types
namespace UnityEngine::Analytics {
class SubsystemsAnalyticBase;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Analytics::SubsystemsAnalyticBase);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.SubsystemsAnalyticBase
class CORDL_TYPE SubsystemsAnalyticBase : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field subsystem, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_subsystem, put = __cordl_internal_set_subsystem)) ::StringW subsystem;

  static inline ::UnityEngine::Analytics::SubsystemsAnalyticBase* New_ctor(::StringW eventName);

  constexpr ::StringW const& __cordl_internal_get_subsystem() const;

  constexpr ::StringW& __cordl_internal_get_subsystem();

  constexpr void __cordl_internal_set_subsystem(::StringW value);

  /// @brief Method .ctor, addr 0x6bf0010, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW eventName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubsystemsAnalyticBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubsystemsAnalyticBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubsystemsAnalyticBase(SubsystemsAnalyticBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubsystemsAnalyticBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubsystemsAnalyticBase(SubsystemsAnalyticBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22544 };

  /// @brief Field subsystem, offset: 0x30, size: 0x8, def value: None
  ::StringW ___subsystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Analytics::SubsystemsAnalyticBase, ___subsystem) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::SubsystemsAnalyticBase, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::SubsystemsAnalyticBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::SubsystemsAnalyticBase*, "UnityEngine.Analytics", "SubsystemsAnalyticBase");
