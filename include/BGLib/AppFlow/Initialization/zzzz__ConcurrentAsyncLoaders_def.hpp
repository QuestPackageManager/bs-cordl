#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/ConcurrentAsyncLoaders.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConcurrentAsyncLoaders)
namespace BGLib::AppFlow::Initialization {
class AsyncLoader;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
class ConcurrentAsyncLoaders;
}
// Write type traits
MARK_REF_T(::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*);
DEFINE_IL2CPP_CLASS(::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*, "BGLib.AppFlow.Initialization", "ConcurrentAsyncLoaders");
// Dependencies System.Object
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.ConcurrentAsyncLoaders
class CORDL_TYPE ConcurrentAsyncLoaders : public ::System::Object {
public:
  // Declarations
  /// @brief Field _asyncLoaders, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__asyncLoaders,
                      put = __cordl_internal_set__asyncLoaders)) ::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>>* _asyncLoaders;

  __declspec(property(get = get_asyncLoaders)) ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>>* asyncLoaders;

  static inline ::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>>* const& __cordl_internal_get__asyncLoaders() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>>*& __cordl_internal_get__asyncLoaders();

  constexpr void __cordl_internal_set__asyncLoaders(::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>>* value);

  /// @brief Method .ctor, addr 0x33083a8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_asyncLoaders, addr 0x33083a0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>>* get_asyncLoaders();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcurrentAsyncLoaders();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentAsyncLoaders", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcurrentAsyncLoaders(ConcurrentAsyncLoaders&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentAsyncLoaders", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcurrentAsyncLoaders(ConcurrentAsyncLoaders const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21512 };

  /// @brief Field _asyncLoaders, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>>* ____asyncLoaders;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders, ____asyncLoaders) == 0x10, "Offset mismatch!");

static_assert(sizeof(::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders) == 0x18, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
