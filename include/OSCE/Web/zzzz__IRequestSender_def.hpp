#pragma once
// IWYU pragma private; include "OSCE\Web\IRequestSender.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IRequestSender)
namespace OSCE::Analytics {
struct GetIdParams;
}
namespace OSCE::Analytics {
class LoggerAnalyticsBatch;
}
namespace OSCE::Web {
struct FailedPostRequest;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace OSCE::Web {
class IRequestSender;
}
// Write type traits
MARK_REF_T(::OSCE::Web::IRequestSender*);
DEFINE_IL2CPP_CLASS(::OSCE::Web::IRequestSender*, "OSCE.Web", "IRequestSender");
// Dependencies
namespace OSCE::Web {
// Is value type: false
// CS Name: OSCE.Web.IRequestSender
class CORDL_TYPE IRequestSender {
public:
  // Declarations
  /// @brief Method SendBatchRequest, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SendBatchRequest(::StringW oculusGraphURL, ::StringW endpoint, ::OSCE::Analytics::LoggerAnalyticsBatch* batch,
                               ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed, ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail);

  /// @brief Method SendIdRequest, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SendIdRequest(::StringW oculusGraphURL, ::StringW endpoint, ::OSCE::Analytics::GetIdParams idRequest, ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed,
                            ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail);

  // Ctor Parameters [CppParam { name: "", ty: "IRequestSender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRequestSender(IRequestSender const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21888 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OSCE::Web
