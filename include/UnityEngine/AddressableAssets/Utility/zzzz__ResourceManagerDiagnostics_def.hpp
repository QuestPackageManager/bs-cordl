#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/Utility/ResourceManagerDiagnostics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceManagerDiagnostics)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::AddressableAssets::Utility {
class DiagnosticInfo;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement {
struct ResourceManager_DiagnosticEventContext;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Utility {
class ResourceManagerDiagnostics;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics);
// Dependencies System.IDisposable, System.Object
namespace UnityEngine::AddressableAssets::Utility {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.Utility.ResourceManagerDiagnostics
class CORDL_TYPE ResourceManagerDiagnostics : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ResourceManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResourceManager, put = __cordl_internal_set_m_ResourceManager)) ::UnityEngine::ResourceManagement::ResourceManager* m_ResourceManager;

  /// @brief Field m_cachedDiagnosticInfo, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_cachedDiagnosticInfo,
      put = __cordl_internal_set_m_cachedDiagnosticInfo)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo*>* m_cachedDiagnosticInfo;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CalculateCompletedOperationHashcode, addr 0x44f71a4, size 0x8c, virtual false, abstract: false, final false
  inline int32_t CalculateCompletedOperationHashcode(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method CalculateHashCode, addr 0x44f7060, size 0x144, virtual false, abstract: false, final false
  inline int32_t CalculateHashCode(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method Dispose, addr 0x44f7a4c, size 0xd8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GenerateCompletedOperationDisplayName, addr 0x44f7230, size 0x44c, virtual false, abstract: false, final false
  inline ::StringW GenerateCompletedOperationDisplayName(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  static inline ::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics* New_ctor(::UnityEngine::ResourceManagement::ResourceManager* resourceManager);

  /// @brief Method OnResourceManagerDiagnosticEvent, addr 0x44f767c, size 0x3d0, virtual false, abstract: false, final false
  inline void OnResourceManagerDiagnosticEvent(::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventContext eventContext);

  /// @brief Method SumDependencyNameHashCodes, addr 0x44f6e34, size 0x22c, virtual false, abstract: false, final false
  inline int32_t SumDependencyNameHashCodes(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  constexpr ::UnityEngine::ResourceManagement::ResourceManager* const& __cordl_internal_get_m_ResourceManager() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceManager*& __cordl_internal_get_m_ResourceManager();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo*>* const& __cordl_internal_get_m_cachedDiagnosticInfo() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo*>*& __cordl_internal_get_m_cachedDiagnosticInfo();

  constexpr void __cordl_internal_set_m_ResourceManager(::UnityEngine::ResourceManagement::ResourceManager* value);

  constexpr void __cordl_internal_set_m_cachedDiagnosticInfo(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo*>* value);

  /// @brief Method .ctor, addr 0x44f6d48, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::ResourceManager* resourceManager);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceManagerDiagnostics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceManagerDiagnostics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceManagerDiagnostics(ResourceManagerDiagnostics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceManagerDiagnostics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceManagerDiagnostics(ResourceManagerDiagnostics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16203 };

  /// @brief Field k_MaximumCompletedOpResultEntryLength offset 0xffffffff size 0x4
  static constexpr int32_t k_MaximumCompletedOpResultEntryLength{ static_cast<int32_t>(0x1e) };

  /// @brief Field k_NumberOfCompletedOpResultEntriesToShow offset 0xffffffff size 0x4
  static constexpr int32_t k_NumberOfCompletedOpResultEntriesToShow{ static_cast<int32_t>(0x4) };

  /// @brief Field m_ResourceManager, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceManager* ___m_ResourceManager;

  /// @brief Field m_cachedDiagnosticInfo, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo*>* ___m_cachedDiagnosticInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics, ___m_ResourceManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics, ___m_cachedDiagnosticInfo) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics, 0x20>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::Utility
NEED_NO_BOX(::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics*, "UnityEngine.AddressableAssets.Utility", "ResourceManagerDiagnostics");
