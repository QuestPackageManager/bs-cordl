#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/ProvideHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProvideHandle)
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
struct DownloadStatus;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class IGenericProviderOperation;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle);
// Dependencies
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
struct CORDL_TYPE ProvideHandle {
public:
  // Declarations
  __declspec(property(get = get_DependencyCount)) int32_t DependencyCount;

  __declspec(property(get = get_InternalOp)) ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation* InternalOp;

  __declspec(property(get = get_IsValid)) bool IsValid;

  __declspec(property(get = get_Location)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* Location;

  __declspec(property(get = get_ResourceManager)) ::UnityEngine::ResourceManagement::ResourceManager* ResourceManager;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Method Complete, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Complete(T result, bool status, ::System::Exception* exception);

  /// @brief Method GetDependencies, addr 0x479bf9c, size 0xb4, virtual false, abstract: false, final false
  inline void GetDependencies(::System::Collections::Generic::IList_1<::System::Object*>* list);

  /// @brief Method GetDependency, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDepObject> inline TDepObject GetDependency(int32_t index);

  /// @brief Method SetDownloadProgressCallbacks, addr 0x4798b1c, size 0xb4, virtual false, abstract: false, final false
  inline void SetDownloadProgressCallbacks(::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>* callback);

  /// @brief Method SetProgressCallback, addr 0x4798a68, size 0xb4, virtual false, abstract: false, final false
  inline void SetProgressCallback(::System::Func_1<float_t>* callback);

  /// @brief Method SetWaitForCompletionCallback, addr 0x4798bd0, size 0xb4, virtual false, abstract: false, final false
  inline void SetWaitForCompletionCallback(::System::Func_1<bool>* callback);

  /// @brief Method .ctor, addr 0x479cdc4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::ResourceManager* rm, ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation* op);

  /// @brief Method get_DependencyCount, addr 0x479cf88, size 0xac, virtual false, abstract: false, final false
  inline int32_t get_DependencyCount();

  /// @brief Method get_InternalOp, addr 0x479ce80, size 0x100, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation* get_InternalOp();

  /// @brief Method get_IsValid, addr 0x4798580, size 0xb8, virtual false, abstract: false, final false
  inline bool get_IsValid();

  /// @brief Method get_Location, addr 0x4797fd4, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_Location();

  /// @brief Method get_ResourceManager, addr 0x479cf80, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceManager* get_ResourceManager();

  /// @brief Method get_Type, addr 0x479b49c, size 0xac, virtual false, abstract: false, final false
  inline ::System::Type* get_Type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProvideHandle();

  // Ctor Parameters [CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_InternalOp", ty:
  // "::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*", modifiers: "", def_value: None }, CppParam { name: "m_ResourceManager", ty:
  // "::UnityEngine::ResourceManagement::ResourceManager*", modifiers: "", def_value: None }]
  constexpr ProvideHandle(int32_t m_Version, ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation* m_InternalOp,
                          ::UnityEngine::ResourceManagement::ResourceManager* m_ResourceManager) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15662 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Version, offset: 0x0, size: 0x4, def value: None
  int32_t m_Version;

  /// @brief Field m_InternalOp, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation* m_InternalOp;

  /// @brief Field m_ResourceManager, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceManager* m_ResourceManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, m_Version) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, m_InternalOp) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, m_ResourceManager) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, "UnityEngine.ResourceManagement.ResourceProviders", "ProvideHandle");
