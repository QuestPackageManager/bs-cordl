#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/InternalFE.hpp"
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
// Dependencies System.Object, System.Runtime.Serialization.Formatters.Binary.InternalSerializerTypeE, System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,
// System.Runtime.Serialization.Formatters.FormatterTypeStyle, System.Runtime.Serialization.Formatters.TypeFilterLevel
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.InternalFE
class CORDL_TYPE InternalFE : public ::System::Object {
public:
  // Declarations
  /// @brief Field FEassemblyFormat, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_FEassemblyFormat, put = __cordl_internal_set_FEassemblyFormat)) ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle FEassemblyFormat;

  /// @brief Field FEsecurityLevel, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_FEsecurityLevel, put = __cordl_internal_set_FEsecurityLevel)) ::System::Runtime::Serialization::Formatters::TypeFilterLevel FEsecurityLevel;

  /// @brief Field FEserializerTypeEnum, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_FEserializerTypeEnum,
                      put = __cordl_internal_set_FEserializerTypeEnum)) ::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE FEserializerTypeEnum;

  /// @brief Field FEtypeFormat, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_FEtypeFormat, put = __cordl_internal_set_FEtypeFormat)) ::System::Runtime::Serialization::Formatters::FormatterTypeStyle FEtypeFormat;

  static inline ::System::Runtime::Serialization::Formatters::Binary::InternalFE* New_ctor();

  constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle const& __cordl_internal_get_FEassemblyFormat() const;

  constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle& __cordl_internal_get_FEassemblyFormat();

  constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel const& __cordl_internal_get_FEsecurityLevel() const;

  constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel& __cordl_internal_get_FEsecurityLevel();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE const& __cordl_internal_get_FEserializerTypeEnum() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE& __cordl_internal_get_FEserializerTypeEnum();

  constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle const& __cordl_internal_get_FEtypeFormat() const;

  constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle& __cordl_internal_get_FEtypeFormat();

  constexpr void __cordl_internal_set_FEassemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value);

  constexpr void __cordl_internal_set_FEsecurityLevel(::System::Runtime::Serialization::Formatters::TypeFilterLevel value);

  constexpr void __cordl_internal_set_FEserializerTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE value);

  constexpr void __cordl_internal_set_FEtypeFormat(::System::Runtime::Serialization::Formatters::FormatterTypeStyle value);

  /// @brief Method .ctor, addr 0x3d18258, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalFE();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalFE", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalFE(InternalFE&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalFE", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalFE(InternalFE const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3297 };

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
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::InternalFE, ___FEtypeFormat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::InternalFE, ___FEassemblyFormat) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::InternalFE, ___FEsecurityLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::InternalFE, ___FEserializerTypeEnum) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::InternalFE, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::InternalFE);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::InternalFE*, "System.Runtime.Serialization.Formatters.Binary", "InternalFE");
