#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/BindingsAllocator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BindingsAllocator)
namespace UnityEngine::Bindings {
struct BindingsAllocator_NativeOwnedMemory;
}
// Forward declare root types
namespace UnityEngine::Bindings {
class BindingsAllocator;
}
namespace UnityEngine::Bindings {
struct BindingsAllocator_NativeOwnedMemory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::BindingsAllocator);
MARK_VAL_T(::UnityEngine::Bindings::BindingsAllocator_NativeOwnedMemory);
// Dependencies
namespace UnityEngine::Bindings {
// Is value type: true
// CS Name: UnityEngine.Bindings.BindingsAllocator/NativeOwnedMemory
struct CORDL_TYPE BindingsAllocator_NativeOwnedMemory {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingsAllocator_NativeOwnedMemory();

  // Ctor Parameters [CppParam { name: "data", ty: "void*", modifiers: "", def_value: None }]
  constexpr BindingsAllocator_NativeOwnedMemory(void* data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10443 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field data, offset: 0x0, size: 0x8, def value: None
  void* data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bindings::BindingsAllocator_NativeOwnedMemory, data) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::BindingsAllocator_NativeOwnedMemory, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Bindings
// Dependencies System.Object
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.BindingsAllocator
class CORDL_TYPE BindingsAllocator : public ::System::Object {
public:
  // Declarations
  using NativeOwnedMemory = ::UnityEngine::Bindings::BindingsAllocator_NativeOwnedMemory;

  /// @brief Method Free, addr 0x68cb054, size 0x3c, virtual false, abstract: false, final false
  static inline void Free(void* ptr);

  /// @brief Method FreeNativeOwnedMemory, addr 0x68cb090, size 0x3c, virtual false, abstract: false, final false
  static inline void FreeNativeOwnedMemory(void* ptr);

  /// @brief Method GetNativeOwnedDataPointer, addr 0x68cb0cc, size 0x14, virtual false, abstract: false, final false
  static inline void* GetNativeOwnedDataPointer(void* ptr);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingsAllocator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindingsAllocator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindingsAllocator(BindingsAllocator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindingsAllocator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindingsAllocator(BindingsAllocator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10444 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::BindingsAllocator, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::BindingsAllocator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::BindingsAllocator*, "UnityEngine.Bindings", "BindingsAllocator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::BindingsAllocator_NativeOwnedMemory, "UnityEngine.Bindings", "BindingsAllocator/NativeOwnedMemory");
