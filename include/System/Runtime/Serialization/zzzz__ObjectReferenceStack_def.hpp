#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ObjectReferenceStack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectReferenceStack)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
struct ObjectReferenceStack;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::ObjectReferenceStack);
// Dependencies
namespace System::Runtime::Serialization {
// Is value type: true
// CS Name: System.Runtime.Serialization.ObjectReferenceStack
struct CORDL_TYPE ObjectReferenceStack {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Method Contains, addr 0x5fa51f4, size 0xf8, virtual false, abstract: false, final false
  inline bool Contains(::System::Object* obj);

  /// @brief Method EnsureSetAsIsReference, addr 0x5fa5030, size 0x144, virtual false, abstract: false, final false
  inline void EnsureSetAsIsReference(::System::Object* obj);

  /// @brief Method Pop, addr 0x5fa5174, size 0x80, virtual false, abstract: false, final false
  inline void Pop(::System::Object* obj);

  /// @brief Method Push, addr 0x5fa4e18, size 0x218, virtual false, abstract: false, final false
  inline void Push(::System::Object* obj);

  /// @brief Method get_Count, addr 0x5fa52ec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectReferenceStack();

  // Ctor Parameters [CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "objectArray", ty: "::ArrayW<::System::Object*,::Array<::System::Object*>*>",
  // modifiers: "", def_value: None }, CppParam { name: "isReferenceArray", ty: "::ArrayW<bool,::Array<bool>*>", modifiers: "", def_value: None }, CppParam { name: "objectDictionary", ty:
  // "::System::Collections::Generic::Dictionary_2<::System::Object*,::System::Object*>*", modifiers: "", def_value: None }]
  constexpr ObjectReferenceStack(int32_t count, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> objectArray, ::ArrayW<bool, ::Array<bool>*> isReferenceArray,
                                 ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* objectDictionary) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17026 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field count, offset: 0x0, size: 0x4, def value: None
  int32_t count;

  /// @brief Field objectArray, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> objectArray;

  /// @brief Field isReferenceArray, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> isReferenceArray;

  /// @brief Field objectDictionary, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* objectDictionary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::ObjectReferenceStack, count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectReferenceStack, objectArray) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectReferenceStack, isReferenceArray) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectReferenceStack, objectDictionary) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ObjectReferenceStack, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Serialization
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ObjectReferenceStack, "System.Runtime.Serialization", "ObjectReferenceStack");
