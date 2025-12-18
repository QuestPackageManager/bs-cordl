#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SwapCollectionExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SwapCollectionExtensions)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class SwapCollectionExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::SwapCollectionExtensions);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.SwapCollectionExtensions
class CORDL_TYPE SwapCollectionExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method TrySwap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline bool TrySwap(::System::Collections::Generic::IList_1<TValue>* list, int32_t from, int32_t to, ::ByRef<::System::Exception*> error);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SwapCollectionExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SwapCollectionExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SwapCollectionExtensions(SwapCollectionExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SwapCollectionExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SwapCollectionExtensions(SwapCollectionExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11919 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SwapCollectionExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::SwapCollectionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SwapCollectionExtensions*, "UnityEngine.Rendering", "SwapCollectionExtensions");
