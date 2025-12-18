#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PinnedArray_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PinnedArray_1)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
template <typename T> struct PinnedArray_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::Rendering::Universal::PinnedArray_1);
// Dependencies System.Runtime.InteropServices.GCHandle, Unity.Collections.NativeArray`1<T>
namespace UnityEngine::Rendering::Universal {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.PinnedArray`1<T>
struct CORDL_TYPE PinnedArray_1 {
public:
  // Declarations
  __declspec(property(get = get_length)) int32_t length;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t length);

  /// @brief Method get_length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_length();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PinnedArray_1();

  // Ctor Parameters [CppParam { name: "managedArray", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }, CppParam { name: "handle", ty: "::System::Runtime::InteropServices::GCHandle",
  // modifiers: "", def_value: None }, CppParam { name: "nativeArray", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: None }]
  constexpr PinnedArray_1(::ArrayW<T, ::Array<T>*> managedArray, ::System::Runtime::InteropServices::GCHandle handle, ::Unity::Collections::NativeArray_1<T> nativeArray) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12755 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field managedArray, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> managedArray;

  /// @brief Field handle, offset: 0x8, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle handle;

  /// @brief Field nativeArray, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<T> nativeArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Rendering::Universal::PinnedArray_1, "UnityEngine.Rendering.Universal", "PinnedArray`1");
