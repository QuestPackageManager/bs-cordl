#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/NativeArrayExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeArrayExtensions)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class NativeArrayExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::NativeArrayExtensions);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.NativeArrayExtensions
class CORDL_TYPE NativeArrayExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method UnsafeElementAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ByRef<T> UnsafeElementAt(::Unity::Collections::NativeArray_1<T> array, int32_t index);

  /// @brief Method UnsafeElementAtMutable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ByRef<T> UnsafeElementAtMutable(::Unity::Collections::NativeArray_1<T> array, int32_t index);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeArrayExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeArrayExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeArrayExtensions(NativeArrayExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeArrayExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeArrayExtensions(NativeArrayExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13005 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::NativeArrayExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::NativeArrayExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::NativeArrayExtensions*, "UnityEngine.Rendering.Universal", "NativeArrayExtensions");
