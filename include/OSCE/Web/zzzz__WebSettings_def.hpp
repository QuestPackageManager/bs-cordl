#pragma once
// IWYU pragma private; include "OSCE/Web/WebSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WebSettings)
// Forward declare root types
namespace OSCE::Web {
class WebSettings;
}
// Write type traits
MARK_REF_PTR_T(::OSCE::Web::WebSettings);
// Dependencies System.Object
namespace OSCE::Web {
// Is value type: false
// CS Name: OSCE.Web.WebSettings
class CORDL_TYPE WebSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field AnalyticsLoggingEndpoint, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AnalyticsLoggingEndpoint, put = setStaticF_AnalyticsLoggingEndpoint)) ::StringW AnalyticsLoggingEndpoint;

  /// @brief Field ContentType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ContentType, put = setStaticF_ContentType)) ::StringW ContentType;

  /// @brief Field IDRetrievalEndpointString, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IDRetrievalEndpointString, put = setStaticF_IDRetrievalEndpointString)) ::StringW IDRetrievalEndpointString;

  /// @brief Field OSCEAnalyticsMigrationFunctionalLoggerName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OSCEAnalyticsMigrationFunctionalLoggerName, put = setStaticF_OSCEAnalyticsMigrationFunctionalLoggerName)) ::StringW OSCEAnalyticsMigrationFunctionalLoggerName;

  static inline ::StringW getStaticF_AnalyticsLoggingEndpoint();

  static inline ::StringW getStaticF_ContentType();

  static inline ::StringW getStaticF_IDRetrievalEndpointString();

  static inline ::StringW getStaticF_OSCEAnalyticsMigrationFunctionalLoggerName();

  static inline void setStaticF_AnalyticsLoggingEndpoint(::StringW value);

  static inline void setStaticF_ContentType(::StringW value);

  static inline void setStaticF_IDRetrievalEndpointString(::StringW value);

  static inline void setStaticF_OSCEAnalyticsMigrationFunctionalLoggerName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebSettings(WebSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebSettings(WebSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21679 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OSCE::Web::WebSettings, 0x10>, "Size mismatch!");

} // namespace OSCE::Web
NEED_NO_BOX(::OSCE::Web::WebSettings);
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Web::WebSettings*, "OSCE.Web", "WebSettings");
