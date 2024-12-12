#pragma once
// IWYU pragma private; include "UnityEngine/TypeDispatchData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeDispatchData)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct TypeDispatchData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TypeDispatchData);
// Dependencies System.IDisposable, Unity.Collections.NativeArray`1<T>
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TypeDispatchData
struct CORDL_TYPE TypeDispatchData {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x48a3088, size 0x58, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeDispatchData();

  // Ctor Parameters [CppParam { name: "changed", ty: "::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*>", modifiers: "", def_value: None }, CppParam { name:
  // "changedID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "destroyedID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers:
  // "", def_value: None }]
  constexpr TypeDispatchData(::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> changed, ::Unity::Collections::NativeArray_1<int32_t> changedID,
                             ::Unity::Collections::NativeArray_1<int32_t> destroyedID) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10823 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field changed, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> changed;

  /// @brief Field changedID, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> changedID;

  /// @brief Field destroyedID, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> destroyedID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TypeDispatchData, changed) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TypeDispatchData, changedID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TypeDispatchData, destroyedID) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TypeDispatchData, 0x28>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TypeDispatchData, "UnityEngine", "TypeDispatchData");
