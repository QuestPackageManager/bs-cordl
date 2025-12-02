#pragma once
// IWYU pragma private; include "UnityEngine/Pool/IPool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPool)
// Forward declare root types
namespace UnityEngine::Pool {
class IPool;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Pool::IPool);
// Dependencies
namespace UnityEngine::Pool {
// Is value type: false
// CS Name: UnityEngine.Pool.IPool
class CORDL_TYPE IPool {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPool(IPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10618 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Pool
NEED_NO_BOX(::UnityEngine::Pool::IPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Pool::IPool*, "UnityEngine.Pool", "IPool");
