#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/WebRequestQueueOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WebRequestQueueOperation)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement {
class WebRequestQueueOperation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::WebRequestQueueOperation);
// Dependencies System.Object
namespace UnityEngine::ResourceManagement {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.WebRequestQueueOperation
class CORDL_TYPE WebRequestQueueOperation : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsDone)) bool IsDone;

  /// @brief Field OnComplete, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_OnComplete, put = __cordl_internal_set_OnComplete)) ::System::Action_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>* OnComplete;

  /// @brief Field Result, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Result, put = __cordl_internal_set_Result)) ::UnityEngine::Networking::UnityWebRequestAsyncOperation* Result;

  __declspec(property(get = get_WebRequest, put = set_WebRequest)) ::UnityEngine::Networking::UnityWebRequest* WebRequest;

  /// @brief Field m_Completed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Completed, put = __cordl_internal_set_m_Completed)) bool m_Completed;

  /// @brief Field m_WebRequest, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WebRequest, put = __cordl_internal_set_m_WebRequest)) ::UnityEngine::Networking::UnityWebRequest* m_WebRequest;

  /// @brief Method Complete, addr 0x4795d88, size 0x28, virtual false, abstract: false, final false
  inline void Complete(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOp);

  static inline ::UnityEngine::ResourceManagement::WebRequestQueueOperation* New_ctor(::UnityEngine::Networking::UnityWebRequest* request);

  constexpr ::System::Action_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>* const& __cordl_internal_get_OnComplete() const;

  constexpr ::System::Action_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>*& __cordl_internal_get_OnComplete();

  constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation* const& __cordl_internal_get_Result() const;

  constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& __cordl_internal_get_Result();

  constexpr bool const& __cordl_internal_get_m_Completed() const;

  constexpr bool& __cordl_internal_get_m_Completed();

  constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_m_WebRequest() const;

  constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_m_WebRequest();

  constexpr void __cordl_internal_set_OnComplete(::System::Action_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>* value);

  constexpr void __cordl_internal_set_Result(::UnityEngine::Networking::UnityWebRequestAsyncOperation* value);

  constexpr void __cordl_internal_set_m_Completed(bool value);

  constexpr void __cordl_internal_set_m_WebRequest(::UnityEngine::Networking::UnityWebRequest* value);

  /// @brief Method .ctor, addr 0x4795d60, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Networking::UnityWebRequest* request);

  /// @brief Method get_IsDone, addr 0x4795d30, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsDone();

  /// @brief Method get_WebRequest, addr 0x4795d50, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UnityWebRequest* get_WebRequest();

  /// @brief Method set_WebRequest, addr 0x4795d58, size 0x8, virtual false, abstract: false, final false
  inline void set_WebRequest(::UnityEngine::Networking::UnityWebRequest* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestQueueOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebRequestQueueOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebRequestQueueOperation(WebRequestQueueOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebRequestQueueOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebRequestQueueOperation(WebRequestQueueOperation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15601 };

  /// @brief Field m_Completed, offset: 0x10, size: 0x1, def value: None
  bool ___m_Completed;

  /// @brief Field Result, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequestAsyncOperation* ___Result;

  /// @brief Field OnComplete, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>* ___OnComplete;

  /// @brief Field m_WebRequest, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequest* ___m_WebRequest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::WebRequestQueueOperation, ___m_Completed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::WebRequestQueueOperation, ___Result) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::WebRequestQueueOperation, ___OnComplete) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::WebRequestQueueOperation, ___m_WebRequest) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::WebRequestQueueOperation, 0x30>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement
NEED_NO_BOX(::UnityEngine::ResourceManagement::WebRequestQueueOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::WebRequestQueueOperation*, "UnityEngine.ResourceManagement", "WebRequestQueueOperation");
