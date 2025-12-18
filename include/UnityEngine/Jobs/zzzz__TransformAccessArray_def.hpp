#pragma once
// IWYU pragma private; include "UnityEngine/Jobs/TransformAccessArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformAccessArray)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Jobs {
struct TransformAccessArray;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Jobs::TransformAccessArray);
// Dependencies System.IntPtr
namespace UnityEngine::Jobs {
// Is value type: true
// CS Name: UnityEngine.Jobs.TransformAccessArray
struct CORDL_TYPE TransformAccessArray {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::UnityW<::UnityEngine::Transform> Item[];

  __declspec(property(get = get_isCreated)) bool isCreated;

  __declspec(property(get = get_length)) int32_t length;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Add, addr 0x69316f0, size 0x8, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::Transform* transform);

  /// @brief Method Add, addr 0x69316f8, size 0x90, virtual false, abstract: false, final false
  static inline void Add(::System::IntPtr transformArrayIntPtr, ::UnityEngine::Transform* transform);

  /// @brief Method Add_Injected, addr 0x6931810, size 0x44, virtual false, abstract: false, final false
  static inline void Add_Injected(::System::IntPtr transformArrayIntPtr, ::System::IntPtr transform);

  /// @brief Method Allocate, addr 0x69313b0, size 0x88, virtual false, abstract: false, final false
  static inline void Allocate(int32_t capacity, int32_t desiredJobCount, ::ByRef<::UnityEngine::Jobs::TransformAccessArray> array);

  /// @brief Method Create, addr 0x6931438, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(int32_t capacity, int32_t desiredJobCount);

  /// @brief Method DestroyTransformAccessArray, addr 0x6931504, size 0x3c, virtual false, abstract: false, final false
  static inline void DestroyTransformAccessArray(::System::IntPtr transformArray);

  /// @brief Method Dispose, addr 0x693148c, size 0x78, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetLength, addr 0x69316b4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetLength(::System::IntPtr transformArrayIntPtr);

  /// @brief Method GetSortedToUserIndex, addr 0x6931890, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetSortedToUserIndex(::System::IntPtr transformArrayIntPtr);

  /// @brief Method GetSortedTransformAccess, addr 0x6931854, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetSortedTransformAccess(::System::IntPtr transformArrayIntPtr);

  /// @brief Method GetTransform, addr 0x6931550, size 0x128, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> GetTransform(::System::IntPtr transformArrayIntPtr, int32_t index);

  /// @brief Method GetTransformAccessArrayForSchedule, addr 0x6931540, size 0x8, virtual false, abstract: false, final false
  inline ::System::IntPtr GetTransformAccessArrayForSchedule();

  /// @brief Method GetTransform_Injected, addr 0x69318cc, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetTransform_Injected(::System::IntPtr transformArrayIntPtr, int32_t index);

  /// @brief Method RemoveAtSwapBack, addr 0x6931788, size 0x44, virtual false, abstract: false, final false
  inline void RemoveAtSwapBack(int32_t index);

  /// @brief Method RemoveAtSwapBack, addr 0x69317cc, size 0x44, virtual false, abstract: false, final false
  static inline void RemoveAtSwapBack(::System::IntPtr transformArrayIntPtr, int32_t index);

  /// @brief Method .ctor, addr 0x693139c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, int32_t desiredJobCount);

  /// @brief Method get_Item, addr 0x6931548, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_Item(int32_t index);

  /// @brief Method get_isCreated, addr 0x693147c, size 0x10, virtual false, abstract: false, final false
  inline bool get_isCreated();

  /// @brief Method get_length, addr 0x6931678, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_length();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformAccessArray();

  // Ctor Parameters [CppParam { name: "m_TransformArray", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr TransformAccessArray(::System::IntPtr m_TransformArray) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10416 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_TransformArray, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_TransformArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Jobs::TransformAccessArray, m_TransformArray) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Jobs::TransformAccessArray, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Jobs
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Jobs::TransformAccessArray, "UnityEngine.Jobs", "TransformAccessArray");
