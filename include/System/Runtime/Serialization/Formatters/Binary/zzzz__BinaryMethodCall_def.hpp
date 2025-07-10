#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/BinaryMethodCall.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MessageEnum_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BinaryMethodCall)
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryMethodCall;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall);
// Dependencies System.Object, System.Runtime.Serialization.Formatters.Binary.MessageEnum
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall
class CORDL_TYPE BinaryMethodCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field argTypes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_argTypes, put = __cordl_internal_set_argTypes)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes;

  /// @brief Field args, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_args, put = __cordl_internal_set_args)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args;

  /// @brief Field bArgsPrimitive, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_bArgsPrimitive, put = __cordl_internal_set_bArgsPrimitive)) bool bArgsPrimitive;

  /// @brief Field callContext, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_callContext, put = __cordl_internal_set_callContext)) ::System::Object* callContext;

  /// @brief Field messageEnum, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_messageEnum, put = __cordl_internal_set_messageEnum)) ::System::Runtime::Serialization::Formatters::Binary::MessageEnum messageEnum;

  /// @brief Field methodName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_methodName, put = __cordl_internal_set_methodName)) ::StringW methodName;

  /// @brief Field typeName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_typeName, put = __cordl_internal_set_typeName)) ::StringW typeName;

  /// @brief Method Dump, addr 0x3d00d20, size 0x4, virtual false, abstract: false, final false
  inline void Dump();

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* New_ctor();

  /// @brief Method Write, addr 0x3d00bd8, size 0x148, virtual false, abstract: false, final false
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get_argTypes() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get_argTypes();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_args() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_args();

  constexpr bool const& __cordl_internal_get_bArgsPrimitive() const;

  constexpr bool& __cordl_internal_get_bArgsPrimitive();

  constexpr ::System::Object* const& __cordl_internal_get_callContext() const;

  constexpr ::System::Object*& __cordl_internal_get_callContext();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const& __cordl_internal_get_messageEnum() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum& __cordl_internal_get_messageEnum();

  constexpr ::StringW const& __cordl_internal_get_methodName() const;

  constexpr ::StringW& __cordl_internal_get_methodName();

  constexpr ::StringW const& __cordl_internal_get_typeName() const;

  constexpr ::StringW& __cordl_internal_get_typeName();

  constexpr void __cordl_internal_set_argTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr void __cordl_internal_set_args(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set_bArgsPrimitive(bool value);

  constexpr void __cordl_internal_set_callContext(::System::Object* value);

  constexpr void __cordl_internal_set_messageEnum(::System::Runtime::Serialization::Formatters::Binary::MessageEnum value);

  constexpr void __cordl_internal_set_methodName(::StringW value);

  constexpr void __cordl_internal_set_typeName(::StringW value);

  /// @brief Method .ctor, addr 0x3d00d24, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryMethodCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryMethodCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryMethodCall(BinaryMethodCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryMethodCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryMethodCall(BinaryMethodCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3262 };

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
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall, ___methodName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall, ___typeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall, ___args) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall, ___callContext) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall, ___argTypes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall, ___bArgsPrimitive) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall, ___messageEnum) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall, 0x40>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*, "System.Runtime.Serialization.Formatters.Binary", "BinaryMethodCall");
