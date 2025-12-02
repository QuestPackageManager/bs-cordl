#pragma once
// IWYU pragma private; include "UnityEngine/AsyncInstantiateOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncInstantiateOperation)
namespace System::Threading {
struct CancellationToken;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AsyncInstantiateOperation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AsyncInstantiateOperation);
// Dependencies System.Threading.CancellationToken, UnityEngine.AsyncOperation
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AsyncInstantiateOperation
class CORDL_TYPE AsyncInstantiateOperation : public ::UnityEngine::AsyncOperation {
public:
  // Declarations
  /// @brief Field m_CancellationToken, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CancellationToken, put = __cordl_internal_set_m_CancellationToken)) ::System::Threading::CancellationToken m_CancellationToken;

  /// @brief Field m_Result, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Result, put = __cordl_internal_set_m_Result)) ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> m_Result;

  /// @brief Method CreateResultArray, addr 0x68a6224, size 0x60, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> CreateResultArray(int32_t size);

  /// @brief Method IsCancellationRequested, addr 0x68a61b0, size 0x74, virtual false, abstract: false, final false
  inline bool IsCancellationRequested();

  static inline ::UnityEngine::AsyncInstantiateOperation* New_ctor(::System::IntPtr ptr, ::System::Threading::CancellationToken cancellationToken);

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_m_CancellationToken() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get_m_CancellationToken();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> const& __cordl_internal_get_m_Result() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>& __cordl_internal_get_m_Result();

  constexpr void __cordl_internal_set_m_CancellationToken(::System::Threading::CancellationToken value);

  constexpr void __cordl_internal_set_m_Result(::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> value);

  /// @brief Method .ctor, addr 0x68a6154, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr, ::System::Threading::CancellationToken cancellationToken);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncInstantiateOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncInstantiateOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncInstantiateOperation(AsyncInstantiateOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncInstantiateOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncInstantiateOperation(AsyncInstantiateOperation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10272 };

  /// @brief Field m_Result, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> ___m_Result;

  /// @brief Field m_CancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___m_CancellationToken;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AsyncInstantiateOperation, ___m_Result) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AsyncInstantiateOperation, ___m_CancellationToken) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AsyncInstantiateOperation, 0x30>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AsyncInstantiateOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AsyncInstantiateOperation*, "UnityEngine", "AsyncInstantiateOperation");
