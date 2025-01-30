#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/BinaryDataProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryDataProvider)
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class BinaryDataProvider_InternalOp;
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
class BinaryDataProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class BinaryDataProvider_InternalOp;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp);
// Dependencies System.Object, UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.BinaryDataProvider/InternalOp
class CORDL_TYPE BinaryDataProvider_InternalOp : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Complete, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Complete, put = __cordl_internal_set_m_Complete)) bool m_Complete;

  /// @brief Field m_IgnoreFailures, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IgnoreFailures, put = __cordl_internal_set_m_IgnoreFailures)) bool m_IgnoreFailures;

  /// @brief Field m_PI, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get_m_PI, put = __cordl_internal_set_m_PI)) ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_PI;

  /// @brief Field m_Provider, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Provider, put = __cordl_internal_set_m_Provider)) ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider* m_Provider;

  /// @brief Field m_RequestOperation, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RequestOperation, put = __cordl_internal_set_m_RequestOperation)) ::UnityEngine::Networking::UnityWebRequestAsyncOperation* m_RequestOperation;

  /// @brief Field m_RequestQueueOperation, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RequestQueueOperation,
                      put = __cordl_internal_set_m_RequestQueueOperation)) ::UnityEngine::ResourceManagement::WebRequestQueueOperation* m_RequestQueueOperation;

  /// @brief Field m_Timeout, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Timeout, put = __cordl_internal_set_m_Timeout)) int32_t m_Timeout;

  /// @brief Method CompleteOperation, addr 0x479e9dc, size 0xa4, virtual false, abstract: false, final false
  inline void CompleteOperation(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::System::Exception* exception);

  /// @brief Method ConvertBytes, addr 0x479e608, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Object* ConvertBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method GetPercentComplete, addr 0x479e5f0, size 0x18, virtual false, abstract: false, final false
  inline float_t GetPercentComplete();

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp* New_ctor();

  /// @brief Method RequestOperation_completed, addr 0x479e820, size 0x1bc, virtual false, abstract: false, final false
  inline void RequestOperation_completed(::UnityEngine::AsyncOperation* op);

  /// @brief Method SendWebRequest, addr 0x479ea80, size 0x288, virtual true, abstract: false, final false
  inline void SendWebRequest(::StringW path);

  /// @brief Method Start, addr 0x479e15c, size 0x48c, virtual false, abstract: false, final false
  inline void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle, ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider* rawProvider);

  /// @brief Method WaitForCompletionHandler, addr 0x479e7ac, size 0x74, virtual false, abstract: false, final false
  inline bool WaitForCompletionHandler();

  /// @brief Method <SendWebRequest>b__13_0, addr 0x479ed08, size 0x94, virtual false, abstract: false, final false
  inline void _SendWebRequest_b__13_0(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOperation);

  constexpr bool const& __cordl_internal_get_m_Complete() const;

  constexpr bool& __cordl_internal_get_m_Complete();

  constexpr bool const& __cordl_internal_get_m_IgnoreFailures() const;

  constexpr bool& __cordl_internal_get_m_IgnoreFailures();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const& __cordl_internal_get_m_PI() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& __cordl_internal_get_m_PI();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider* const& __cordl_internal_get_m_Provider() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*& __cordl_internal_get_m_Provider();

  constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation* const& __cordl_internal_get_m_RequestOperation() const;

  constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& __cordl_internal_get_m_RequestOperation();

  constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation* const& __cordl_internal_get_m_RequestQueueOperation() const;

  constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation*& __cordl_internal_get_m_RequestQueueOperation();

  constexpr int32_t const& __cordl_internal_get_m_Timeout() const;

  constexpr int32_t& __cordl_internal_get_m_Timeout();

  constexpr void __cordl_internal_set_m_Complete(bool value);

  constexpr void __cordl_internal_set_m_IgnoreFailures(bool value);

  constexpr void __cordl_internal_set_m_PI(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value);

  constexpr void __cordl_internal_set_m_Provider(::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider* value);

  constexpr void __cordl_internal_set_m_RequestOperation(::UnityEngine::Networking::UnityWebRequestAsyncOperation* value);

  constexpr void __cordl_internal_set_m_RequestQueueOperation(::UnityEngine::ResourceManagement::WebRequestQueueOperation* value);

  constexpr void __cordl_internal_set_m_Timeout(int32_t value);

  /// @brief Method .ctor, addr 0x479e154, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryDataProvider_InternalOp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryDataProvider_InternalOp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryDataProvider_InternalOp(BinaryDataProvider_InternalOp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryDataProvider_InternalOp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryDataProvider_InternalOp(BinaryDataProvider_InternalOp const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15657 };

  /// @brief Field m_Provider, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider* ___m_Provider;

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp, ___m_Provider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp, ___m_RequestOperation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp, ___m_RequestQueueOperation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp, ___m_PI) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp, ___m_IgnoreFailures) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp, ___m_Complete) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp, ___m_Timeout) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp, 0x48>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
// Dependencies UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.BinaryDataProvider
class CORDL_TYPE BinaryDataProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
  // Declarations
  using InternalOp = ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp;

  __declspec(property(get = get_IgnoreFailures, put = set_IgnoreFailures)) bool IgnoreFailures;

  /// @brief Field <IgnoreFailures>k__BackingField, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get__IgnoreFailures_k__BackingField, put = __cordl_internal_set__IgnoreFailures_k__BackingField)) bool _IgnoreFailures_k__BackingField;

  /// @brief Method Convert, addr 0x479e0ac, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* Convert(::System::Type* type, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider* New_ctor();

  /// @brief Method Provide, addr 0x479e0b4, size 0xa0, virtual true, abstract: false, final false
  inline void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle);

  constexpr bool const& __cordl_internal_get__IgnoreFailures_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IgnoreFailures_k__BackingField();

  constexpr void __cordl_internal_set__IgnoreFailures_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x479e5e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IgnoreFailures, addr 0x479e098, size 0x8, virtual false, abstract: false, final false
  inline bool get_IgnoreFailures();

  /// @brief Method set_IgnoreFailures, addr 0x479e0a0, size 0xc, virtual false, abstract: false, final false
  inline void set_IgnoreFailures(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryDataProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryDataProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryDataProvider(BinaryDataProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryDataProvider(BinaryDataProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15658 };

  /// @brief Field <IgnoreFailures>k__BackingField, offset: 0x1c, size: 0x1, def value: None
  bool ____IgnoreFailures_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider, ____IgnoreFailures_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "BinaryDataProvider");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*, "UnityEngine.ResourceManagement.ResourceProviders", "BinaryDataProvider/InternalOp");
