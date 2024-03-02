#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IGenericProviderOperation)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IResourceProvider;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
class IGenericProviderOperation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation);
// Type: UnityEngine.ResourceManagement.AsyncOperations::IGenericProviderOperation
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement.AsyncOperations::IGenericProviderOperation*
class CORDL_TYPE IGenericProviderOperation {
public:
  // Declarations
  __declspec(property(get = get_DependencyCount)) int32_t DependencyCount;

  __declspec(property(get = get_Location))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* Location;

  __declspec(property(get = get_ProvideHandleVersion)) int32_t ProvideHandleVersion;

  __declspec(property(get = get_RequestedType))::System::Type* RequestedType;

  /// @brief Method GetDependencies, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetDependencies(::System::Collections::Generic::IList_1<::System::Object*>* dstList);

  /// @brief Method GetDependency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename TDepObject> inline TDepObject GetDependency(int32_t index);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void
  Init(::UnityEngine::ResourceManagement::ResourceManager* rm, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* provider,
       ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
       ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
           depOp);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void
  Init(::UnityEngine::ResourceManagement::ResourceManager* rm, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* provider,
       ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
       ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
           depOp,
       bool releaseDependenciesOnFailure);

  /// @brief Method ProviderCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline void ProviderCompleted(T result, bool status, ::System::Exception* e);

  /// @brief Method SetDownloadProgressCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetDownloadProgressCallback(::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>* callback);

  /// @brief Method SetProgressCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetProgressCallback(::System::Func_1<float_t>* callback);

  /// @brief Method SetWaitForCompletionCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetWaitForCompletionCallback(::System::Func_1<bool>* callback);

  /// @brief Method get_DependencyCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_DependencyCount();

  /// @brief Method get_Location, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_Location();

  /// @brief Method get_ProvideHandleVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_ProvideHandleVersion();

  /// @brief Method get_RequestedType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_RequestedType();

  // Ctor Parameters [CppParam { name: "", ty: "IGenericProviderOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IGenericProviderOperation(IGenericProviderOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IGenericProviderOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGenericProviderOperation(IGenericProviderOperation const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::AsyncOperations
NEED_NO_BOX(::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*, "UnityEngine.ResourceManagement.AsyncOperations", "IGenericProviderOperation");
