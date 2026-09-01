#pragma once
// IWYU pragma private; include "BGLib\AppFlow\Initialization\AsyncSceneContextLoadersQueue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AsyncSceneContextLoadersQueue)
namespace BGLib::AppFlow::Initialization {
class ConcurrentAsyncLoaders;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
class AsyncSceneContextLoadersQueue;
}
// Write type traits
MARK_REF_T(::BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue*);
DEFINE_IL2CPP_CLASS(::BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue*, "BGLib.AppFlow.Initialization", "AsyncSceneContextLoadersQueue");
// Dependencies UnityEngine.MonoBehaviour
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.AsyncSceneContextLoadersQueue
class CORDL_TYPE AsyncSceneContextLoadersQueue : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _loadersQueue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__loadersQueue,
                      put = __cordl_internal_set__loadersQueue)) ::System::Collections::Generic::List_1<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>* _loadersQueue;

  __declspec(property(get = get_loadersQueue)) ::System::Collections::Generic::IReadOnlyList_1<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>* loadersQueue;

  static inline ::BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>* const& __cordl_internal_get__loadersQueue() const;

  constexpr ::System::Collections::Generic::List_1<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>*& __cordl_internal_get__loadersQueue();

  constexpr void __cordl_internal_set__loadersQueue(::System::Collections::Generic::List_1<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>* value);

  /// @brief Method .ctor, addr 0x3309e68, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_loadersQueue, addr 0x3309e60, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>* get_loadersQueue();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncSceneContextLoadersQueue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncSceneContextLoadersQueue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncSceneContextLoadersQueue(AsyncSceneContextLoadersQueue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncSceneContextLoadersQueue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncSceneContextLoadersQueue(AsyncSceneContextLoadersQueue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21560 };

  /// @brief Field _loadersQueue, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>* ____loadersQueue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue, ____loadersQueue) == 0x20, "Offset mismatch!");

static_assert(sizeof(::BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue) == 0x28, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
