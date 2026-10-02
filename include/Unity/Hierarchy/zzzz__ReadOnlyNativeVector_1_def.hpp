#pragma once
// IWYU pragma private; include "Unity/Hierarchy/ReadOnlyNativeVector_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyNativeVector_1)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Unity::Hierarchy {
template <typename T> struct ReadOnlyNativeVector_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Hierarchy::ReadOnlyNativeVector_1);
DEFINE_IL2CPP_GEN_CLASS(::Unity::Hierarchy::ReadOnlyNativeVector_1, "Unity.Hierarchy", "ReadOnlyNativeVector`1");
// [DefaultMember("Item")]
// [IsReadOnly]
// Dependencies System.IntPtr
namespace Unity::Hierarchy {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Hierarchy.ReadOnlyNativeVector`1<T>
struct CORDL_TYPE ReadOnlyNativeVector_1 {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief [IsReadOnly]
  __declspec(property(get = get_Item)) T Item[];

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr, int32_t size);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::by_ref<T> get_Item(int32_t index);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadOnlyNativeVector_1();

  // Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }]
  constexpr ReadOnlyNativeVector_1(::System::IntPtr m_Ptr, int32_t m_Count) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22593 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_Ptr;

  /// @brief Field m_Count, offset: 0x8, size: 0x4, def value: None
  int32_t m_Count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Hierarchy
