#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalSerializerTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterAssemblyStyle_def.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterTypeStyle_def.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__TypeFilterLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InternalFE)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class InternalFE;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::InternalFE);
// Type: System.Runtime.Serialization.Formatters.Binary::InternalFE
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3246)), TypeDefinitionIndex(TypeDefinitionIndex(3241)), TypeDefinitionIndex(TypeDefinitionIndex(2613)),
// TypeDefinitionIndex(TypeDefinitionIndex(3240)), TypeDefinitionIndex(TypeDefinitionIndex(3242))} Self: TypeDefinitionIndex(TypeDefinitionIndex(3297)) CS Name:
// ::System.Runtime.Serialization.Formatters.Binary::InternalFE*
class CORDL_TYPE InternalFE : public ::System::Object {
public:
  // Declarations
  /// @brief Field FEtypeFormat, offset 0x10, size 0x4
  __declspec(property(get = __get_FEtypeFormat, put = __set_FEtypeFormat))::System::Runtime::Serialization::Formatters::FormatterTypeStyle FEtypeFormat;

  /// @brief Field FEassemblyFormat, offset 0x14, size 0x4
  __declspec(property(get = __get_FEassemblyFormat, put = __set_FEassemblyFormat))::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle FEassemblyFormat;

  /// @brief Field FEsecurityLevel, offset 0x18, size 0x4
  __declspec(property(get = __get_FEsecurityLevel, put = __set_FEsecurityLevel))::System::Runtime::Serialization::Formatters::TypeFilterLevel FEsecurityLevel;

  /// @brief Field FEserializerTypeEnum, offset 0x1c, size 0x4
  __declspec(property(get = __get_FEserializerTypeEnum, put = __set_FEserializerTypeEnum))::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE FEserializerTypeEnum;

  constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle& __get_FEtypeFormat();

  constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle const& __get_FEtypeFormat() const;

  constexpr void __set_FEtypeFormat(::System::Runtime::Serialization::Formatters::FormatterTypeStyle value);

  constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle& __get_FEassemblyFormat();

  constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle const& __get_FEassemblyFormat() const;

  constexpr void __set_FEassemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value);

  constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel& __get_FEsecurityLevel();

  constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel const& __get_FEsecurityLevel() const;

  constexpr void __set_FEsecurityLevel(::System::Runtime::Serialization::Formatters::TypeFilterLevel value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE& __get_FEserializerTypeEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE const& __get_FEserializerTypeEnum() const;

  constexpr void __set_FEserializerTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::InternalFE* New_ctor();

  /// @brief Method .ctor, addr 0x24d6180, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InternalFE", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalFE(InternalFE&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalFE", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalFE(InternalFE const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalFE();

public:
  /// @brief Field FEtypeFormat, offset: 0x10, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::FormatterTypeStyle ___FEtypeFormat;

  /// @brief Field FEassemblyFormat, offset: 0x14, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle ___FEassemblyFormat;

  /// @brief Field FEsecurityLevel, offset: 0x18, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::TypeFilterLevel ___FEsecurityLevel;

  /// @brief Field FEserializerTypeEnum, offset: 0x1c, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE ___FEserializerTypeEnum;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::InternalFE, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::InternalFE, ___FEtypeFormat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::InternalFE, ___FEassemblyFormat) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::InternalFE, ___FEsecurityLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::InternalFE, ___FEserializerTypeEnum) == 0x1c, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::InternalFE);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::InternalFE*, "System.Runtime.Serialization.Formatters.Binary", "InternalFE");
