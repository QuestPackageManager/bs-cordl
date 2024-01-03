#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MessageEnum_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(BinaryMethodReturn)
namespace System {
class Type;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryMethodReturn;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn);
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryMethodReturn
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3300)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3263))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::BinaryMethodReturn*
class CORDL_TYPE BinaryMethodReturn : public ::System::Object {
public:
  // Declarations
  /// @brief Field returnValue, offset 0x10, size 0x8
  __declspec(property(get = __get_returnValue, put = __set_returnValue))::System::Object* returnValue;

  /// @brief Field args, offset 0x18, size 0x8
  __declspec(property(get = __get_args, put = __set_args))::ArrayW<::System::Object*, ::Array<::System::Object*>*> args;

  /// @brief Field callContext, offset 0x20, size 0x8
  __declspec(property(get = __get_callContext, put = __set_callContext))::System::Object* callContext;

  /// @brief Field argTypes, offset 0x28, size 0x8
  __declspec(property(get = __get_argTypes, put = __set_argTypes))::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes;

  /// @brief Field bArgsPrimitive, offset 0x30, size 0x1
  __declspec(property(get = __get_bArgsPrimitive, put = __set_bArgsPrimitive)) bool bArgsPrimitive;

  /// @brief Field messageEnum, offset 0x34, size 0x4
  __declspec(property(get = __get_messageEnum, put = __set_messageEnum))::System::Runtime::Serialization::Formatters::Binary::MessageEnum messageEnum;

  /// @brief Field returnType, offset 0x38, size 0x8
  __declspec(property(get = __get_returnType, put = __set_returnType))::System::Type* returnType;

  /// @brief Field instanceOfVoid, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instanceOfVoid, put = setStaticF_instanceOfVoid))::System::Object* instanceOfVoid;

  constexpr ::System::Object*& __get_returnValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_returnValue() const;

  constexpr void __set_returnValue(::System::Object* value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get_args();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get_args() const;

  constexpr void __set_args(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr ::System::Object*& __get_callContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_callContext() const;

  constexpr void __set_callContext(::System::Object* value);

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __get_argTypes();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __get_argTypes() const;

  constexpr void __set_argTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr bool& __get_bArgsPrimitive();

  constexpr bool const& __get_bArgsPrimitive() const;

  constexpr void __set_bArgsPrimitive(bool value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum& __get_messageEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const& __get_messageEnum() const;

  constexpr void __set_messageEnum(::System::Runtime::Serialization::Formatters::Binary::MessageEnum value);

  constexpr ::System::Type*& __get_returnType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_returnType() const;

  constexpr void __set_returnType(::System::Type* value);

  static inline void setStaticF_instanceOfVoid(::System::Object* value);

  static inline ::System::Object* getStaticF_instanceOfVoid();

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn* New_ctor();

  /// @brief Method .ctor, addr 0x24c21b0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Write, addr 0x24c21c0, size 0x148, virtual true, abstract: false, final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  /// @brief Method Dump, addr 0x24c2308, size 0x4, virtual false, abstract: false, final false
  inline void Dump();

  // Ctor Parameters [CppParam { name: "", ty: "BinaryMethodReturn", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryMethodReturn(BinaryMethodReturn&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryMethodReturn", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryMethodReturn(BinaryMethodReturn const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryMethodReturn();

public:
  /// @brief Field returnValue, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___returnValue;

  /// @brief Field args, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___args;

  /// @brief Field callContext, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___callContext;

  /// @brief Field argTypes, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ___argTypes;

  /// @brief Field bArgsPrimitive, offset: 0x30, size: 0x1, def value: None
  bool ___bArgsPrimitive;

  /// @brief Field messageEnum, offset: 0x34, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::MessageEnum ___messageEnum;

  /// @brief Field returnType, offset: 0x38, size: 0x8, def value: None
  ::System::Type* ___returnType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn, ___returnValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn, ___args) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn, ___callContext) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn, ___argTypes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn, ___bArgsPrimitive) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn, ___messageEnum) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn, ___returnType) == 0x38, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*, "System.Runtime.Serialization.Formatters.Binary", "BinaryMethodReturn");
