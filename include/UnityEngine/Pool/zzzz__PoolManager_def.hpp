#pragma once
// IWYU pragma private; include "UnityEngine/Pool/PoolManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PoolManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class WeakReference_1;
}
namespace UnityEngine::Pool {
class IPool;
}
// Forward declare root types
namespace UnityEngine::Pool {
class PoolManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Pool::PoolManager);
// Dependencies System.Object
namespace UnityEngine::Pool {
// Is value type: false
// CS Name: UnityEngine.Pool.PoolManager
class CORDL_TYPE PoolManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_WeakPoolReferences, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_WeakPoolReferences,
                      put = setStaticF_s_WeakPoolReferences)) ::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityEngine::Pool::IPool*>*>* s_WeakPoolReferences;

  /// @brief Method Register, addr 0x68cdc58, size 0x128, virtual false, abstract: false, final false
  static inline void Register(::UnityEngine::Pool::IPool* pool);

  static inline ::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityEngine::Pool::IPool*>*>* getStaticF_s_WeakPoolReferences();

  static inline void setStaticF_s_WeakPoolReferences(::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityEngine::Pool::IPool*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PoolManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolManager(PoolManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolManager(PoolManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10620 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Pool::PoolManager, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Pool
NEED_NO_BOX(::UnityEngine::Pool::PoolManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Pool::PoolManager*, "UnityEngine.Pool", "PoolManager");
