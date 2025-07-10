#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/AsyncOperations/UnityWebRequestOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
CORDL_MODULE_EXPORT(UnityWebRequestOperation)
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
class UnityWebRequestOperation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation);
// Dependencies UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject>
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.UnityWebRequestOperation
class CORDL_TYPE UnityWebRequestOperation : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::Networking::UnityWebRequest*> {
public:
  // Declarations
  /// @brief Field m_UWR, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UWR, put = __cordl_internal_set_m_UWR)) ::UnityEngine::Networking::UnityWebRequest* m_UWR;

  /// @brief Method Execute, addr 0x47a6234, size 0x9c, virtual true, abstract: false, final false
  inline void Execute();

  static inline ::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation* New_ctor(::UnityEngine::Networking::UnityWebRequest* webRequest);

  /// @brief Method <Execute>b__2_0, addr 0x47a62d0, size 0x94, virtual false, abstract: false, final false
  inline void _Execute_b__2_0(::UnityEngine::AsyncOperation* request);

  constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_m_UWR() const;

  constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_m_UWR();

  constexpr void __cordl_internal_set_m_UWR(::UnityEngine::Networking::UnityWebRequest* value);

  /// @brief Method .ctor, addr 0x47a61d8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Networking::UnityWebRequest* webRequest);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityWebRequestOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityWebRequestOperation(UnityWebRequestOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityWebRequestOperation(UnityWebRequestOperation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15710 };

  /// @brief Field m_UWR, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequest* ___m_UWR;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation, ___m_UWR) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::AsyncOperations
NEED_NO_BOX(::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*, "UnityEngine.ResourceManagement.AsyncOperations", "UnityWebRequestOperation");
