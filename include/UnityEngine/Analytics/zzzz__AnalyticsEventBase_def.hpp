#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/AnalyticsEventBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Analytics/zzzz__SendEventOptions_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AnalyticsEventBase)
namespace UnityEngine::Analytics {
struct SendEventOptions;
}
// Forward declare root types
namespace UnityEngine::Analytics {
class AnalyticsEventBase;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Analytics::AnalyticsEventBase);
// Dependencies System.Object, UnityEngine.Analytics.SendEventOptions
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.AnalyticsEventBase
class CORDL_TYPE AnalyticsEventBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field eventName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_eventName, put = __cordl_internal_set_eventName)) ::StringW eventName;

  /// @brief Field eventPrefix, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_eventPrefix, put = __cordl_internal_set_eventPrefix)) ::StringW eventPrefix;

  /// @brief Field eventVersion, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_eventVersion, put = __cordl_internal_set_eventVersion)) int32_t eventVersion;

  /// @brief Field sendEventOptions, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_sendEventOptions, put = __cordl_internal_set_sendEventOptions)) ::UnityEngine::Analytics::SendEventOptions sendEventOptions;

  static inline ::UnityEngine::Analytics::AnalyticsEventBase* New_ctor(::StringW eventName, int32_t eventVersion, ::UnityEngine::Analytics::SendEventOptions sendEventOptions, ::StringW eventPrefix);

  constexpr ::StringW const& __cordl_internal_get_eventName() const;

  constexpr ::StringW& __cordl_internal_get_eventName();

  constexpr ::StringW const& __cordl_internal_get_eventPrefix() const;

  constexpr ::StringW& __cordl_internal_get_eventPrefix();

  constexpr int32_t const& __cordl_internal_get_eventVersion() const;

  constexpr int32_t& __cordl_internal_get_eventVersion();

  constexpr ::UnityEngine::Analytics::SendEventOptions const& __cordl_internal_get_sendEventOptions() const;

  constexpr ::UnityEngine::Analytics::SendEventOptions& __cordl_internal_get_sendEventOptions();

  constexpr void __cordl_internal_set_eventName(::StringW value);

  constexpr void __cordl_internal_set_eventPrefix(::StringW value);

  constexpr void __cordl_internal_set_eventVersion(int32_t value);

  constexpr void __cordl_internal_set_sendEventOptions(::UnityEngine::Analytics::SendEventOptions value);

  /// @brief Method .ctor, addr 0x693c7bc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW eventName, int32_t eventVersion, ::UnityEngine::Analytics::SendEventOptions sendEventOptions, ::StringW eventPrefix);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnalyticsEventBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnalyticsEventBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnalyticsEventBase(AnalyticsEventBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnalyticsEventBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnalyticsEventBase(AnalyticsEventBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10671 };

  /// @brief Field eventName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___eventName;

  /// @brief Field eventVersion, offset: 0x18, size: 0x4, def value: None
  int32_t ___eventVersion;

  /// @brief Field eventPrefix, offset: 0x20, size: 0x8, def value: None
  ::StringW ___eventPrefix;

  /// @brief Field sendEventOptions, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Analytics::SendEventOptions ___sendEventOptions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Analytics::AnalyticsEventBase, ___eventName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::AnalyticsEventBase, ___eventVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::AnalyticsEventBase, ___eventPrefix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::AnalyticsEventBase, ___sendEventOptions) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::AnalyticsEventBase, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::AnalyticsEventBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::AnalyticsEventBase*, "UnityEngine.Analytics", "AnalyticsEventBase");
