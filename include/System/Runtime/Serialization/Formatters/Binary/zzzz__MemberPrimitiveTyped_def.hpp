#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MemberPrimitiveTyped)
namespace System {
class Object;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberPrimitiveTyped;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped);
// Type: System.Runtime.Serialization.Formatters.Binary::MemberPrimitiveTyped
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3253))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3267))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::MemberPrimitiveTyped*
class CORDL_TYPE MemberPrimitiveTyped : public ::System::Object {
public:
  // Declarations
  /// @brief Field primitiveTypeEnum, offset 0x10, size 0x4
  __declspec(property(get = __get_primitiveTypeEnum, put = __set_primitiveTypeEnum))::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE primitiveTypeEnum;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __get_value, put = __set_value))::System::Object* value;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& __get_primitiveTypeEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& __get_primitiveTypeEnum() const;

  constexpr void __set_primitiveTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);

  constexpr ::System::Object*& __get_value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_value() const;

  constexpr void __set_value(::System::Object* value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* New_ctor();

  /// @brief Method .ctor, addr 0x24c245c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Set, addr 0x24c2464, size 0xc, virtual false, abstract: false, final false
  inline void Set(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE primitiveTypeEnum, ::System::Object* value);

  /// @brief Method Write, addr 0x24c2470, size 0x60, virtual true, abstract: false, final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  /// @brief Method Read, addr 0x24c24d0, size 0x48, virtual true, abstract: false, final true
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);

  /// @brief Method Dump, addr 0x24c2518, size 0x4, virtual false, abstract: false, final false
  inline void Dump();

  // Ctor Parameters [CppParam { name: "", ty: "MemberPrimitiveTyped", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemberPrimitiveTyped(MemberPrimitiveTyped&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemberPrimitiveTyped", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemberPrimitiveTyped(MemberPrimitiveTyped const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemberPrimitiveTyped();

public:
  /// @brief Field primitiveTypeEnum, offset: 0x10, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ___primitiveTypeEnum;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped, ___primitiveTypeEnum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped, ___value) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*, "System.Runtime.Serialization.Formatters.Binary", "MemberPrimitiveTyped");
