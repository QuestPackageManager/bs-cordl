#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SmallEntityIdArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/zzzz__FixedList32Bytes_1_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SmallEntityIdArray)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct Allocator;
}
namespace UnityEngine {
struct EntityId;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct SmallEntityIdArray;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::SmallEntityIdArray);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::SmallEntityIdArray, "UnityEngine.Rendering", "SmallEntityIdArray");
// [DefaultMember("Item")]
// Dependencies Unity.Collections.FixedList32Bytes`1<T>, Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>, UnityEngine.EntityId
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SmallEntityIdArray
struct CORDL_TYPE SmallEntityIdArray {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) ::UnityEngine::EntityId Item[];

  __declspec(property(get = get_Valid, put = set_Valid)) bool Valid;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6c5afe8, size 0x5c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x6c5cb40, size 0x1a0, virtual false, abstract: false, final false
  inline void _ctor(int32_t length, ::Unity::Collections::Allocator allocator);

  /// @brief Method get_Item, addr 0x6c5cce0, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::EntityId get_Item(int32_t index);

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_Valid, addr 0x6c5cb30, size 0x8, virtual false, abstract: false, final false
  inline bool get_Valid();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method set_Item, addr 0x6c5cdd4, size 0xf8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, ::UnityEngine::EntityId value);

  /// [CompilerGenerated]
  /// @brief Method set_Valid, addr 0x6c5cb38, size 0x8, virtual false, abstract: false, final false
  inline void set_Valid(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SmallEntityIdArray();

  // Ctor Parameters [CppParam { name: "m_FixedArray", ty: "::Unity::Collections::FixedList32Bytes_1<::UnityEngine::EntityId>", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "m_List", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::EntityId>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_IsEmbedded", ty: "bool",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "_Valid_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Length", ty: "int32_t",
  // modifiers: "", def_value: None, comment: None }]
  constexpr SmallEntityIdArray(::Unity::Collections::FixedList32Bytes_1<::UnityEngine::EntityId> m_FixedArray, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::EntityId> m_List,
                               bool m_IsEmbedded, bool _Valid_k__BackingField, int32_t Length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18224 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field m_FixedArray, offset: 0x0, size: 0x20, def value: None
  ::Unity::Collections::FixedList32Bytes_1<::UnityEngine::EntityId> m_FixedArray;

  /// @brief Field m_List, offset: 0x20, size: 0x18, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::EntityId> m_List;

  /// @brief Field m_IsEmbedded, offset: 0x38, size: 0x1, def value: None
  bool m_IsEmbedded;

  /// [CompilerGenerated]
  /// @brief Field <Valid>k__BackingField, offset: 0x39, size: 0x1, def value: None
  bool _Valid_k__BackingField;

  /// @brief Field Length, offset: 0x3c, size: 0x4, def value: None
  int32_t Length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SmallEntityIdArray, m_FixedArray) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SmallEntityIdArray, m_List) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SmallEntityIdArray, m_IsEmbedded) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SmallEntityIdArray, _Valid_k__BackingField) == 0x39, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SmallEntityIdArray, Length) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::SmallEntityIdArray) == 0x40, "Size mismatch!");

} // namespace UnityEngine::Rendering
