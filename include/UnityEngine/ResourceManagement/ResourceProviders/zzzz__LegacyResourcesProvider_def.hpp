#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/LegacyResourcesProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LegacyResourcesProvider)
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class LegacyResourcesProvider_InternalOp;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class ResourceRequest;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class LegacyResourcesProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class LegacyResourcesProvider_InternalOp;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider_InternalOp);
// Dependencies System.Object, UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.LegacyResourcesProvider/InternalOp
class CORDL_TYPE LegacyResourcesProvider_InternalOp : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ProvideHandle, offset 0x18, size 0x18
  __declspec(property(get = __cordl_internal_get_m_ProvideHandle, put = __cordl_internal_set_m_ProvideHandle)) ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_ProvideHandle;

  /// @brief Field m_RequestOperation, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RequestOperation, put = __cordl_internal_set_m_RequestOperation)) ::UnityEngine::ResourceRequest* m_RequestOperation;

  /// @brief Method AsyncOperationCompleted, addr 0x479a658, size 0x180, virtual false, abstract: false, final false
  inline void AsyncOperationCompleted(::UnityEngine::AsyncOperation* op);

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider_InternalOp* New_ctor();

  /// @brief Method PercentComplete, addr 0x479a7d8, size 0x18, virtual false, abstract: false, final false
  inline float_t PercentComplete();

  /// @brief Method Start, addr 0x479a24c, size 0x18c, virtual false, abstract: false, final false
  inline void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle);

  /// @brief Method WaitForCompletionHandler, addr 0x479a504, size 0x154, virtual false, abstract: false, final false
  inline bool WaitForCompletionHandler();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const& __cordl_internal_get_m_ProvideHandle() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& __cordl_internal_get_m_ProvideHandle();

  constexpr ::UnityEngine::ResourceRequest* const& __cordl_internal_get_m_RequestOperation() const;

  constexpr ::UnityEngine::ResourceRequest*& __cordl_internal_get_m_RequestOperation();

  constexpr void __cordl_internal_set_m_ProvideHandle(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value);

  constexpr void __cordl_internal_set_m_RequestOperation(::UnityEngine::ResourceRequest* value);

  /// @brief Method .ctor, addr 0x479a244, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacyResourcesProvider_InternalOp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LegacyResourcesProvider_InternalOp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LegacyResourcesProvider_InternalOp(LegacyResourcesProvider_InternalOp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LegacyResourcesProvider_InternalOp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegacyResourcesProvider_InternalOp(LegacyResourcesProvider_InternalOp const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15676 };

  /// @brief Field m_RequestOperation, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ResourceRequest* ___m_RequestOperation;

  /// @brief Field m_ProvideHandle, offset: 0x18, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle ___m_ProvideHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider_InternalOp, ___m_RequestOperation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider_InternalOp, ___m_ProvideHandle) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider_InternalOp, 0x30>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
// Dependencies UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.LegacyResourcesProvider
class CORDL_TYPE LegacyResourcesProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
  // Declarations
  using InternalOp = ::UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider_InternalOp;

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider* New_ctor();

  /// @brief Method Provide, addr 0x4799e3c, size 0x408, virtual true, abstract: false, final false
  inline void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle pi);

  /// @brief Method Release, addr 0x479a3d8, size 0x124, virtual true, abstract: false, final false
  inline void Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Object* asset);

  /// @brief Method .ctor, addr 0x479a4fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacyResourcesProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LegacyResourcesProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LegacyResourcesProvider(LegacyResourcesProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LegacyResourcesProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegacyResourcesProvider(LegacyResourcesProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15677 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "LegacyResourcesProvider");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider_InternalOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider_InternalOp*, "UnityEngine.ResourceManagement.ResourceProviders",
                       "LegacyResourcesProvider/InternalOp");
