#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MessageEnum_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BinaryMethodCall)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryMethodCall;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall);
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryMethodCall
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3300)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3262))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::BinaryMethodCall*
class CORDL_TYPE BinaryMethodCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field methodName, offset 0x10, size 0x8
  __declspec(property(get = __get_methodName, put = __set_methodName))::StringW methodName;

  /// @brief Field typeName, offset 0x18, size 0x8
  __declspec(property(get = __get_typeName, put = __set_typeName))::StringW typeName;

  /// @brief Field args, offset 0x20, size 0x8
  __declspec(property(get = __get_args, put = __set_args))::ArrayW<::System::Object*, ::Array<::System::Object*>*> args;

  /// @brief Field callContext, offset 0x28, size 0x8
  __declspec(property(get = __get_callContext, put = __set_callContext))::System::Object* callContext;

  /// @brief Field argTypes, offset 0x30, size 0x8
  __declspec(property(get = __get_argTypes, put = __set_argTypes))::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes;

  /// @brief Field bArgsPrimitive, offset 0x38, size 0x1
  __declspec(property(get = __get_bArgsPrimitive, put = __set_bArgsPrimitive)) bool bArgsPrimitive;

  /// @brief Field messageEnum, offset 0x3c, size 0x4
  __declspec(property(get = __get_messageEnum, put = __set_messageEnum))::System::Runtime::Serialization::Formatters::Binary::MessageEnum messageEnum;

  constexpr ::StringW& __get_methodName();

  constexpr ::StringW const& __get_methodName() const;

  constexpr void __set_methodName(::StringW value);

  constexpr ::StringW& __get_typeName();

  constexpr ::StringW const& __get_typeName() const;

  constexpr void __set_typeName(::StringW value);

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

  /// @brief Method Write, addr 0x24c1fac, size 0x148, virtual false, abstract: false, final false
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  /// @brief Method Dump, addr 0x24c20f4, size 0x4, virtual false, abstract: false, final false
  inline void Dump();

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* New_ctor();

  /// @brief Method .ctor, addr 0x24c20f8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BinaryMethodCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryMethodCall(BinaryMethodCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryMethodCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryMethodCall(BinaryMethodCall const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryMethodCall();

public:
  /// @brief Field methodName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___methodName;

  /// @brief Field typeName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___typeName;

  /// @brief Field args, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___args;

  /// @brief Field callContext, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___callContext;

  /// @brief Field argTypes, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ___argTypes;

  /// @brief Field bArgsPrimitive, offset: 0x38, size: 0x1, def value: None
  bool ___bArgsPrimitive;

  /// @brief Field messageEnum, offset: 0x3c, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::MessageEnum ___messageEnum;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall, ___methodName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall, ___typeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall, ___args) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall, ___callContext) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall, ___argTypes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall, ___bArgsPrimitive) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall, ___messageEnum) == 0x3c, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*, "System.Runtime.Serialization.Formatters.Binary", "BinaryMethodCall");
