#pragma once
// IWYU pragma private; include "OSCE/Analytics/BaseAnalyticsEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseAnalyticsEvent)
namespace GlobalNamespace {
struct IDType;
}
namespace OSCE::Analytics {
class AnalyticsManager;
}
namespace OSCE::Analytics {
struct LoggerAnalyticsEvent;
}
namespace OSCE::Networking {
class IPureCSharpPoolElement;
}
// Forward declare root types
namespace OSCE::Analytics {
class BaseAnalyticsEvent;
}
// Write type traits
MARK_REF_PTR_T(::OSCE::Analytics::BaseAnalyticsEvent);
// Dependencies System.Object
namespace OSCE::Analytics {
// Is value type: false
// CS Name: OSCE.Analytics.BaseAnalyticsEvent
class CORDL_TYPE BaseAnalyticsEvent : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CreatedByPool, put = set_CreatedByPool)) bool CreatedByPool;

  /// @brief Field <CreatedByPool>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__CreatedByPool_k__BackingField, put = __cordl_internal_set__CreatedByPool_k__BackingField)) bool _CreatedByPool_k__BackingField;

  /// @brief Field <logger>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__logger_k__BackingField, put = __cordl_internal_set__logger_k__BackingField)) ::StringW _logger_k__BackingField;

  /// @brief Field client_time, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_client_time, put = __cordl_internal_set_client_time)) int32_t client_time;

  __declspec(property(get = get_logger, put = set_logger)) ::StringW logger;

  /// @brief Convert operator to "::OSCE::Networking::IPureCSharpPoolElement"
  constexpr operator ::OSCE::Networking::IPureCSharpPoolElement*() noexcept;

  /// @brief Method ApplyBasicFields, addr 0x5d2455c, size 0x2c, virtual true, abstract: false, final false
  inline void ApplyBasicFields(::OSCE::Analytics::AnalyticsManager* manager);

  /// @brief Method ApplyTime, addr 0x5d24500, size 0x5c, virtual true, abstract: false, final false
  inline void ApplyTime(::OSCE::Analytics::AnalyticsManager* manager);

  /// @brief Method ConvertToLoggerEvent, addr 0x5d24494, size 0x6c, virtual true, abstract: false, final false
  inline ::OSCE::Analytics::LoggerAnalyticsEvent ConvertToLoggerEvent();

  /// @brief Method EventRequiresAnalyticsID, addr 0x5d243b4, size 0x20, virtual true, abstract: false, final false
  inline bool EventRequiresAnalyticsID();

  /// @brief Method GetIDType, addr 0x5d243ac, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IDType GetIDType();

  static inline ::OSCE::Analytics::BaseAnalyticsEvent* New_ctor();

  /// @brief Method ReturnEventToPool, addr 0x5d24424, size 0x70, virtual true, abstract: false, final false
  inline void ReturnEventToPool();

  /// @brief Method ReturnedToPool, addr 0x5d243d4, size 0x50, virtual true, abstract: false, final false
  inline void ReturnedToPool();

  constexpr bool const& __cordl_internal_get__CreatedByPool_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CreatedByPool_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__logger_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__logger_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_client_time() const;

  constexpr int32_t& __cordl_internal_get_client_time();

  constexpr void __cordl_internal_set__CreatedByPool_k__BackingField(bool value);

  constexpr void __cordl_internal_set__logger_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_client_time(int32_t value);

  /// @brief Method .ctor, addr 0x5d24588, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CreatedByPool, addr 0x5d2439c, size 0x8, virtual true, abstract: false, final true
  inline bool get_CreatedByPool();

  /// @brief Method get_logger, addr 0x5d2438c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_logger();

  /// @brief Convert to "::OSCE::Networking::IPureCSharpPoolElement"
  constexpr ::OSCE::Networking::IPureCSharpPoolElement* i___OSCE__Networking__IPureCSharpPoolElement() noexcept;

  /// @brief Method set_CreatedByPool, addr 0x5d243a4, size 0x8, virtual true, abstract: false, final true
  inline void set_CreatedByPool(bool value);

  /// @brief Method set_logger, addr 0x5d24394, size 0x8, virtual false, abstract: false, final false
  inline void set_logger(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseAnalyticsEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseAnalyticsEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseAnalyticsEvent(BaseAnalyticsEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseAnalyticsEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseAnalyticsEvent(BaseAnalyticsEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21683 };

  /// @brief Field client_time, offset: 0x10, size: 0x4, def value: None
  int32_t ___client_time;

  /// @brief Field <logger>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____logger_k__BackingField;

  /// @brief Field <CreatedByPool>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____CreatedByPool_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Analytics::BaseAnalyticsEvent, ___client_time) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::BaseAnalyticsEvent, ____logger_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::BaseAnalyticsEvent, ____CreatedByPool_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Analytics::BaseAnalyticsEvent, 0x28>, "Size mismatch!");

} // namespace OSCE::Analytics
NEED_NO_BOX(::OSCE::Analytics::BaseAnalyticsEvent);
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Analytics::BaseAnalyticsEvent*, "OSCE.Analytics", "BaseAnalyticsEvent");
