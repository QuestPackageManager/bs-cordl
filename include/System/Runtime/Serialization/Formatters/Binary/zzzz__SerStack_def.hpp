#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Runtime.Serialization.Formatters.Binary::SerStack
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3292))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::SerStack*
class CORDL_TYPE SerStack : public ::System::Object {
public:
  // Declarations
  /// @brief Field objects, offset 0x10, size 0x8
  __declspec(property(get = __get_objects, put = __set_objects))::ArrayW<::System::Object*, ::Array<::System::Object*>*> objects;

  /// @brief Field stackId, offset 0x18, size 0x8
  __declspec(property(get = __get_stackId, put = __set_stackId))::StringW stackId;

  /// @brief Field top, offset 0x20, size 0x4
  __declspec(property(get = __get_top, put = __set_top)) int32_t top;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get_objects();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get_objects() const;

  constexpr void __set_objects(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr ::StringW& __get_stackId();

  constexpr ::StringW const& __get_stackId() const;

  constexpr void __set_stackId(::StringW value);

  constexpr int32_t& __get_top();

  constexpr int32_t const& __get_top() const;

  constexpr void __set_top(int32_t value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::SerStack* New_ctor(::StringW stackId);

  /// @brief Method .ctor, addr 0x24cb294, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW stackId);

  /// @brief Method Push, addr 0x24cd1a8, size 0xac, virtual false, abstract: false, final false
  inline void Push(::System::Object* obj);

  /// @brief Method Pop, addr 0x24cd254, size 0x50, virtual false, abstract: false, final false
  inline ::System::Object* Pop();

  /// @brief Method IncreaseCapacity, addr 0x24d59dc, size 0x88, virtual false, abstract: false, final false
  inline void IncreaseCapacity();

  /// @brief Method Peek, addr 0x24cd930, size 0x40, virtual false, abstract: false, final false
  inline ::System::Object* Peek();

  /// @brief Method PeekPeek, addr 0x24d493c, size 0x44, virtual false, abstract: false, final false
  inline ::System::Object* PeekPeek();

  /// @brief Method IsEmpty, addr 0x24d1e38, size 0x10, virtual false, abstract: false, final false
  inline bool IsEmpty();

  // Ctor Parameters [CppParam { name: "", ty: "SerStack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerStack(SerStack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerStack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerStack(SerStack const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerStack();

public:
  /// @brief Field objects, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___objects;

  /// @brief Field stackId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___stackId;

  /// @brief Field top, offset: 0x20, size: 0x4, def value: None
  int32_t ___top;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::SerStack, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerStack, ___objects) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerStack, ___stackId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerStack, ___top) == 0x20, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::SerStack);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::SerStack*, "System.Runtime.Serialization.Formatters.Binary", "SerStack");
