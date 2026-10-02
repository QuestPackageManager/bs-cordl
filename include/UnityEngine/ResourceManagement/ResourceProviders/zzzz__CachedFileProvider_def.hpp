#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/CachedFileProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CachedFileProvider)
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class CachedFileProvider_InternalOp;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace UnityEngine::ResourceManagement {
class WebRequestQueueOperation;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class CachedFileProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class CachedFileProvider_InternalOp;
}
// Write type traits
MARK_REF_T(::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider*);
MARK_REF_T(::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "CachedFileProvider");
DEFINE_IL2CPP_CLASS(::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp*, "UnityEngine.ResourceManagement.ResourceProviders", "CachedFileProvider/InternalOp");
// Dependencies System.Object, UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.CachedFileProvider/InternalOp
class CORDL_TYPE CachedFileProvider_InternalOp : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_CachePath, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachePath, put = __cordl_internal_set_m_CachePath)) ::StringW m_CachePath;

  /// @brief Field m_Complete, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Complete, put = __cordl_internal_set_m_Complete)) bool m_Complete;

  /// @brief Field m_IgnoreFailures, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IgnoreFailures, put = __cordl_internal_set_m_IgnoreFailures)) bool m_IgnoreFailures;

  /// @brief Field m_PI, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get_m_PI, put = __cordl_internal_set_m_PI)) ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_PI;

  /// @brief Field m_Provider, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Provider, put = __cordl_internal_set_m_Provider)) ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider* m_Provider;

  /// @brief Field m_RequestOperation, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RequestOperation, put = __cordl_internal_set_m_RequestOperation)) ::UnityEngine::Networking::UnityWebRequestAsyncOperation* m_RequestOperation;

  /// @brief Field m_RequestQueueOperation, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RequestQueueOperation,
                      put = __cordl_internal_set_m_RequestQueueOperation)) ::UnityEngine::ResourceManagement::WebRequestQueueOperation* m_RequestQueueOperation;

  /// @brief Field m_Timeout, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Timeout, put = __cordl_internal_set_m_Timeout)) int32_t m_Timeout;

  /// @brief Method GetPercentComplete, addr 0x6d47284, size 0x18, virtual false, abstract: false, final false
  inline float_t GetPercentComplete();

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp* New_ctor();

  /// @brief Method RequestOperation_completed, addr 0x6d47310, size 0x1c8, virtual false, abstract: false, final false
  inline void RequestOperation_completed(::UnityEngine::AsyncOperation* op);

  /// @brief Method SendWebRequest, addr 0x6d474d8, size 0x29c, virtual true, abstract: false, final false
  inline void SendWebRequest(::StringW remotePath, ::StringW cachePath);

  /// @brief Method Start, addr 0x6d46e84, size 0x3fc, virtual false, abstract: false, final false
  inline void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle, ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider* rawProvider);

  /// @brief Method WaitForCompletionHandler, addr 0x6d4729c, size 0x74, virtual false, abstract: false, final false
  inline bool WaitForCompletionHandler();

  /// [CompilerGenerated]
  /// @brief Method <SendWebRequest>b__12_0, addr 0x6d47774, size 0x9c, virtual false, abstract: false, final false
  inline void _SendWebRequest_b__12_0(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOperation);

  constexpr ::StringW const& __cordl_internal_get_m_CachePath() const;

  constexpr ::StringW& __cordl_internal_get_m_CachePath();

  constexpr bool const& __cordl_internal_get_m_Complete() const;

  constexpr bool& __cordl_internal_get_m_Complete();

  constexpr bool const& __cordl_internal_get_m_IgnoreFailures() const;

  constexpr bool& __cordl_internal_get_m_IgnoreFailures();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const& __cordl_internal_get_m_PI() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& __cordl_internal_get_m_PI();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider* const& __cordl_internal_get_m_Provider() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider*& __cordl_internal_get_m_Provider();

  constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation* const& __cordl_internal_get_m_RequestOperation() const;

  constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& __cordl_internal_get_m_RequestOperation();

  constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation* const& __cordl_internal_get_m_RequestQueueOperation() const;

  constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation*& __cordl_internal_get_m_RequestQueueOperation();

  constexpr int32_t const& __cordl_internal_get_m_Timeout() const;

  constexpr int32_t& __cordl_internal_get_m_Timeout();

  constexpr void __cordl_internal_set_m_CachePath(::StringW value);

  constexpr void __cordl_internal_set_m_Complete(bool value);

  constexpr void __cordl_internal_set_m_IgnoreFailures(bool value);

  constexpr void __cordl_internal_set_m_PI(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value);

  constexpr void __cordl_internal_set_m_Provider(::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider* value);

  constexpr void __cordl_internal_set_m_RequestOperation(::UnityEngine::Networking::UnityWebRequestAsyncOperation* value);

  constexpr void __cordl_internal_set_m_RequestQueueOperation(::UnityEngine::ResourceManagement::WebRequestQueueOperation* value);

  constexpr void __cordl_internal_set_m_Timeout(int32_t value);

  /// @brief Method .ctor, addr 0x6d46e80, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CachedFileProvider_InternalOp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CachedFileProvider_InternalOp", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CachedFileProvider_InternalOp(CachedFileProvider_InternalOp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CachedFileProvider_InternalOp", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CachedFileProvider_InternalOp(CachedFileProvider_InternalOp const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19193 };

  /// @brief Field m_Provider, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider* ___m_Provider;

  /// @brief Field m_RequestOperation, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequestAsyncOperation* ___m_RequestOperation;

  /// @brief Field m_RequestQueueOperation, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::WebRequestQueueOperation* ___m_RequestQueueOperation;

  /// @brief Field m_PI, offset: 0x28, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle ___m_PI;

  /// @brief Field m_IgnoreFailures, offset: 0x40, size: 0x1, def value: None
  bool ___m_IgnoreFailures;

  /// @brief Field m_Complete, offset: 0x41, size: 0x1, def value: None
  bool ___m_Complete;

  /// @brief Field m_Timeout, offset: 0x44, size: 0x4, def value: None
  int32_t ___m_Timeout;

  /// @brief Field m_CachePath, offset: 0x48, size: 0x8, def value: None
  ::StringW ___m_CachePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp, ___m_Provider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp, ___m_RequestOperation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp, ___m_RequestQueueOperation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp, ___m_PI) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp, ___m_IgnoreFailures) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp, ___m_Complete) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp, ___m_Timeout) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp, ___m_CachePath) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp) == 0x50, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
// [DisplayName("Cached File Provider")]
// Dependencies UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.CachedFileProvider
class CORDL_TYPE CachedFileProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
  // Declarations
  using InternalOp = ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp;

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider* New_ctor();

  /// @brief Method Provide, addr 0x6d46dfc, size 0x84, virtual true, abstract: false, final false
  inline void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle);

  /// @brief Method .ctor, addr 0x6d47280, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CachedFileProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CachedFileProvider", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CachedFileProvider(CachedFileProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CachedFileProvider", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CachedFileProvider(CachedFileProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19194 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider) == 0x20, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
