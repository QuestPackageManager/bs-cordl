#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RemoveRangeExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoveRangeExtensions)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RemoveRangeExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RemoveRangeExtensions);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RemoveRangeExtensions
class CORDL_TYPE RemoveRangeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method TryRemoveElementsInRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline bool TryRemoveElementsInRange(::System::Collections::Generic::IList_1<TValue>* list, int32_t index, int32_t count, ::ByRef<::System::Exception*> error);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoveRangeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RemoveRangeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemoveRangeExtensions(RemoveRangeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemoveRangeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemoveRangeExtensions(RemoveRangeExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11914 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RemoveRangeExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::RemoveRangeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RemoveRangeExtensions*, "UnityEngine.Rendering", "RemoveRangeExtensions");
