#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ArrayExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayExtensions)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Jobs {
struct TransformAccessArray;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ArrayExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ArrayExtensions);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ArrayExtensions
class CORDL_TYPE ArrayExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method FillArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void FillArray(::ByRef<::Unity::Collections::NativeArray_1<T>> array, ::ByRef<T> value, int32_t startIndex, int32_t length);

  /// @brief Method ResizeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ResizeArray(::ByRef<::ArrayW<T, ::Array<T>*>> array, int32_t capacity);

  /// @brief Method ResizeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ResizeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> array, int32_t capacity);

  /// @brief Method ResizeArray, addr 0x65fde40, size 0xb4, virtual false, abstract: false, final false
  static inline void ResizeArray(::ByRef<::UnityEngine::Jobs::TransformAccessArray> array, int32_t capacity);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayExtensions(ArrayExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayExtensions(ArrayExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12229 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ArrayExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ArrayExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ArrayExtensions*, "UnityEngine.Rendering", "ArrayExtensions");
