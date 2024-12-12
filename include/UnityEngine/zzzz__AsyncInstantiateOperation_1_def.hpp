#pragma once
// IWYU pragma private; include "UnityEngine/AsyncInstantiateOperation_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__CustomYieldInstruction_def.hpp"
CORDL_MODULE_EXPORT(AsyncInstantiateOperation_1)
namespace UnityEngine {
class AsyncInstantiateOperation;
}
// Forward declare root types
namespace UnityEngine {
template <typename T> class AsyncInstantiateOperation_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::AsyncInstantiateOperation_1);
// Dependencies UnityEngine.CustomYieldInstruction
namespace UnityEngine {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.AsyncInstantiateOperation`1<T>
class CORDL_TYPE AsyncInstantiateOperation_1 : public ::UnityEngine::CustomYieldInstruction {
public:
  // Declarations
  __declspec(property(get = get_keepWaiting)) bool keepWaiting;

  /// @brief Field m_op, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_op, put = __cordl_internal_set_m_op)) ::UnityEngine::AsyncInstantiateOperation* m_op;

  static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* New_ctor(::UnityEngine::AsyncInstantiateOperation* op);

  constexpr ::UnityEngine::AsyncInstantiateOperation* const& __cordl_internal_get_m_op() const;

  constexpr ::UnityEngine::AsyncInstantiateOperation*& __cordl_internal_get_m_op();

  constexpr void __cordl_internal_set_m_op(::UnityEngine::AsyncInstantiateOperation* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AsyncInstantiateOperation* op);

  /// @brief Method get_keepWaiting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_keepWaiting();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncInstantiateOperation_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncInstantiateOperation_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncInstantiateOperation_1(AsyncInstantiateOperation_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncInstantiateOperation_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncInstantiateOperation_1(AsyncInstantiateOperation_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10851 };

  /// @brief Field m_op, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AsyncInstantiateOperation* ___m_op;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::AsyncInstantiateOperation_1, "UnityEngine", "AsyncInstantiateOperation`1");
