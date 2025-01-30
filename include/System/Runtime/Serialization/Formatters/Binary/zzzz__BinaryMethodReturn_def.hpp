#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/BinaryMethodReturn.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MessageEnum_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BinaryMethodReturn)
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
class BinaryMethodReturn;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn);
// Dependencies System.Object, System.Runtime.Serialization.Formatters.Binary.MessageEnum
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn
class CORDL_TYPE BinaryMethodReturn : public ::System::Object {
public:
  // Declarations
  /// @brief Field argTypes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_argTypes, put = __cordl_internal_set_argTypes)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes;

  /// @brief Field args, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_args, put = __cordl_internal_set_args)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args;

  /// @brief Field bArgsPrimitive, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_bArgsPrimitive, put = __cordl_internal_set_bArgsPrimitive)) bool bArgsPrimitive;

  /// @brief Field callContext, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_callContext, put = __cordl_internal_set_callContext)) ::System::Object* callContext;

  /// @brief Field instanceOfVoid, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_instanceOfVoid, put = setStaticF_instanceOfVoid)) ::System::Object* instanceOfVoid;

  /// @brief Field messageEnum, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_messageEnum, put = __cordl_internal_set_messageEnum)) ::System::Runtime::Serialization::Formatters::Binary::MessageEnum messageEnum;

  /// @brief Field returnType, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_returnType, put = __cordl_internal_set_returnType)) ::System::Type* returnType;

  /// @brief Field returnValue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_returnValue, put = __cordl_internal_set_returnValue)) ::System::Object* returnValue;

  /// @brief Method Dump, addr 0x3d02d48, size 0x4, virtual false, abstract: false, final false
  inline void Dump();

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn* New_ctor();

  /// @brief Method Write, addr 0x3d02c00, size 0x148, virtual true, abstract: false, final true
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

  constexpr ::System::Type* const& __cordl_internal_get_returnType() const;

  constexpr ::System::Type*& __cordl_internal_get_returnType();

  constexpr ::System::Object* const& __cordl_internal_get_returnValue() const;

  constexpr ::System::Object*& __cordl_internal_get_returnValue();

  constexpr void __cordl_internal_set_argTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr void __cordl_internal_set_args(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set_bArgsPrimitive(bool value);

  constexpr void __cordl_internal_set_callContext(::System::Object* value);

  constexpr void __cordl_internal_set_messageEnum(::System::Runtime::Serialization::Formatters::Binary::MessageEnum value);

  constexpr void __cordl_internal_set_returnType(::System::Type* value);

  constexpr void __cordl_internal_set_returnValue(::System::Object* value);

  /// @brief Method .ctor, addr 0x3d02bf0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Object* getStaticF_instanceOfVoid();

  static inline void setStaticF_instanceOfVoid(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryMethodReturn();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryMethodReturn", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryMethodReturn(BinaryMethodReturn&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryMethodReturn", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryMethodReturn(BinaryMethodReturn const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3263 };

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
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn, ___returnValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn, ___args) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn, ___callContext) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn, ___argTypes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn, ___bArgsPrimitive) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn, ___messageEnum) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn, ___returnType) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn, 0x40>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*, "System.Runtime.Serialization.Formatters.Binary", "BinaryMethodReturn");
