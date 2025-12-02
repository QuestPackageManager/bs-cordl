#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/BlittableListWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlittableListWrapper)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
// Forward declare root types
namespace UnityEngine::Bindings {
struct BlittableListWrapper;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Bindings::BlittableListWrapper);
// Dependencies UnityEngine.Bindings.BlittableArrayWrapper
namespace UnityEngine::Bindings {
// Is value type: true
// CS Name: UnityEngine.Bindings.BlittableListWrapper
struct CORDL_TYPE BlittableListWrapper {
public:
  // Declarations
  /// @brief Method Unmarshal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Unmarshal(::System::Collections::Generic::List_1<T>* list);

  /// @brief Method .ctor, addr 0x68cb0ec, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Bindings::BlittableArrayWrapper arrayWrapper, int32_t listSize);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BlittableListWrapper();

  // Ctor Parameters [CppParam { name: "arrayWrapper", ty: "::UnityEngine::Bindings::BlittableArrayWrapper", modifiers: "", def_value: None }, CppParam { name: "listSize", ty: "int32_t", modifiers:
  // "", def_value: None }]
  constexpr BlittableListWrapper(::UnityEngine::Bindings::BlittableArrayWrapper arrayWrapper, int32_t listSize) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10447 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field arrayWrapper, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Bindings::BlittableArrayWrapper arrayWrapper;

  /// @brief Field listSize, offset: 0x10, size: 0x4, def value: None
  int32_t listSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bindings::BlittableListWrapper, arrayWrapper) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Bindings::BlittableListWrapper, listSize) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::BlittableListWrapper, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Bindings
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::BlittableListWrapper, "UnityEngine.Bindings", "BlittableListWrapper");
