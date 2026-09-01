#pragma once
// IWYU pragma private; include "UnityEngine\Pool\IObjectPool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IObjectPool_1)
// Forward declare root types
namespace UnityEngine::Pool {
template <typename T> class IObjectPool_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Pool::IObjectPool_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Pool::IObjectPool_1, "UnityEngine.Pool", "IObjectPool`1");
// Dependencies
namespace UnityEngine::Pool {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Pool.IObjectPool`1<T>
class CORDL_TYPE IObjectPool_1 {
public:
  // Declarations
  /// @brief Method Release, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Release(T element);

  // Ctor Parameters [CppParam { name: "", ty: "IObjectPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IObjectPool_1(IObjectPool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10643 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Pool
