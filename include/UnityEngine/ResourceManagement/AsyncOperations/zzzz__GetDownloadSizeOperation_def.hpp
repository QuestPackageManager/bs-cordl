#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/AsyncOperations/GetDownloadSizeOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetDownloadSizeOperation)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
class GetDownloadSizeOperation;
}
// Write type traits
MARK_REF_T(::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*, "UnityEngine.ResourceManagement.AsyncOperations", "GetDownloadSizeOperation");
// Dependencies UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject>
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.GetDownloadSizeOperation
class CORDL_TYPE GetDownloadSizeOperation : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t> {
public:
  // Declarations
  /// @brief Field m_Locations, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Locations,
                      put = __cordl_internal_set_m_Locations)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* m_Locations;

  /// @brief Field m_Started, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Started, put = __cordl_internal_set_m_Started)) bool m_Started;

  /// @brief Method Calculate, addr 0x6d4d2b0, size 0x534, virtual false, abstract: false, final false
  inline void Calculate();

  /// @brief Method Execute, addr 0x6d4d7e4, size 0x4, virtual true, abstract: false, final false
  inline void Execute();

  /// @brief Method Init, addr 0x6d4d2a0, size 0x10, virtual false, abstract: false, final false
  inline void Init(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations,
                   ::UnityEngine::ResourceManagement::ResourceManager* resourceManager);

  /// @brief Method InvokeWaitForCompletion, addr 0x6d4d7e8, size 0x14, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  static inline ::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation* New_ctor();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* const& __cordl_internal_get_m_Locations() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& __cordl_internal_get_m_Locations();

  constexpr bool const& __cordl_internal_get_m_Started() const;

  constexpr bool& __cordl_internal_get_m_Started();

  constexpr void __cordl_internal_set_m_Locations(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value);

  constexpr void __cordl_internal_set_m_Started(bool value);

  /// @brief Method .ctor, addr 0x6d4d7fc, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetDownloadSizeOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetDownloadSizeOperation", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetDownloadSizeOperation(GetDownloadSizeOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetDownloadSizeOperation", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetDownloadSizeOperation(GetDownloadSizeOperation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19243 };

  /// @brief Field m_Locations, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* ___m_Locations;

  /// @brief Field m_Started, offset: 0xa0, size: 0x1, def value: None
  bool ___m_Started;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation, ___m_Locations) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation, ___m_Started) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation) == 0xa8, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::AsyncOperations
