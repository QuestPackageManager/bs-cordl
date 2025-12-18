#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/SerStack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerStack)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class SerStack;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::SerStack);
// Dependencies System.Object
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.SerStack
class CORDL_TYPE SerStack : public ::System::Object {
public:
  // Declarations
  /// @brief Field objects, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_objects, put = __cordl_internal_set_objects)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> objects;

  /// @brief Field stackId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_stackId, put = __cordl_internal_set_stackId)) ::StringW stackId;

  /// @brief Field top, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_top, put = __cordl_internal_set_top)) int32_t top;

  /// @brief Method IncreaseCapacity, addr 0x59bac20, size 0x8c, virtual false, abstract: false, final false
  inline void IncreaseCapacity();

  /// @brief Method IsEmpty, addr 0x59af3a0, size 0x10, virtual false, abstract: false, final false
  inline bool IsEmpty();

  static inline ::System::Runtime::Serialization::Formatters::Binary::SerStack* New_ctor(::StringW stackId);

  /// @brief Method Peek, addr 0x59b2d4c, size 0x40, virtual false, abstract: false, final false
  inline ::System::Object* Peek();

  /// @brief Method PeekPeek, addr 0x59b9ce0, size 0x44, virtual false, abstract: false, final false
  inline ::System::Object* PeekPeek();

  /// @brief Method Pop, addr 0x59af3b0, size 0x50, virtual false, abstract: false, final false
  inline ::System::Object* Pop();

  /// @brief Method Push, addr 0x59af400, size 0xac, virtual false, abstract: false, final false
  inline void Push(::System::Object* obj);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_objects() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_objects();

  constexpr ::StringW const& __cordl_internal_get_stackId() const;

  constexpr ::StringW& __cordl_internal_get_stackId();

  constexpr int32_t const& __cordl_internal_get_top() const;

  constexpr int32_t& __cordl_internal_get_top();

  constexpr void __cordl_internal_set_objects(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set_stackId(::StringW value);

  constexpr void __cordl_internal_set_top(int32_t value);

  /// @brief Method .ctor, addr 0x59b0958, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW stackId);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerStack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerStack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerStack(SerStack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerStack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerStack(SerStack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3305 };

  /// @brief Field objects, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___objects;

  /// @brief Field stackId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___stackId;

  /// @brief Field top, offset: 0x20, size: 0x4, def value: None
  int32_t ___top;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerStack, ___objects) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerStack, ___stackId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerStack, ___top) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::SerStack, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::SerStack);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::SerStack*, "System.Runtime.Serialization.Formatters.Binary", "SerStack");
