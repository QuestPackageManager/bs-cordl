#pragma once
// IWYU pragma private; include "OSCE/Web/DefaultRequestSender.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DefaultRequestSender)
namespace OSCE::Analytics {
class AnalyticsManager;
}
namespace OSCE::Analytics {
struct GetIdParams;
}
namespace OSCE::Analytics {
class LoggerAnalyticsBatch;
}
namespace OSCE::Web {
struct FailedPostRequest;
}
namespace OSCE::Web {
class IRequestSender;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace OSCE::Web {
class DefaultRequestSender;
}
// Write type traits
MARK_REF_PTR_T(::OSCE::Web::DefaultRequestSender);
// Dependencies System.Object
namespace OSCE::Web {
// Is value type: false
// CS Name: OSCE.Web.DefaultRequestSender
class CORDL_TYPE DefaultRequestSender : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instance, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__instance, put = __cordl_internal_set__instance)) ::UnityW<::OSCE::Analytics::AnalyticsManager> _instance;

  /// @brief Convert operator to "::OSCE::Web::IRequestSender"
  constexpr operator ::OSCE::Web::IRequestSender*() noexcept;

  static inline ::OSCE::Web::DefaultRequestSender* New_ctor(::OSCE::Analytics::AnalyticsManager* instance);

  /// @brief Method SendBatchRequest, addr 0x5d220b0, size 0x11c, virtual true, abstract: false, final true
  inline void SendBatchRequest(::StringW oculusGraphURL, ::StringW endpoint, ::OSCE::Analytics::LoggerAnalyticsBatch* batch,
                               ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed, ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail);

  /// @brief Method SendIdRequest, addr 0x5d222c0, size 0x118, virtual true, abstract: false, final true
  inline void SendIdRequest(::StringW oculusGraphURL, ::StringW endpoint, ::OSCE::Analytics::GetIdParams idRequest, ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed,
                            ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail);

  constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& __cordl_internal_get__instance() const;

  constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& __cordl_internal_get__instance();

  constexpr void __cordl_internal_set__instance(::UnityW<::OSCE::Analytics::AnalyticsManager> value);

  /// @brief Method .ctor, addr 0x5d220a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::OSCE::Analytics::AnalyticsManager* instance);

  /// @brief Convert to "::OSCE::Web::IRequestSender"
  constexpr ::OSCE::Web::IRequestSender* i___OSCE__Web__IRequestSender() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultRequestSender();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultRequestSender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultRequestSender(DefaultRequestSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultRequestSender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultRequestSender(DefaultRequestSender const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21668 };

  /// @brief Field _instance, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::OSCE::Analytics::AnalyticsManager> ____instance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Web::DefaultRequestSender, ____instance) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Web::DefaultRequestSender, 0x18>, "Size mismatch!");

} // namespace OSCE::Web
NEED_NO_BOX(::OSCE::Web::DefaultRequestSender);
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Web::DefaultRequestSender*, "OSCE.Web", "DefaultRequestSender");
