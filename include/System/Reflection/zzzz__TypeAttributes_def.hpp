#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeAttributes)
// Forward declare root types
namespace System::Reflection {
struct TypeAttributes;
}
// Write type traits
MARK_VAL_T(::System::Reflection::TypeAttributes);
// Type: System.Reflection::TypeAttributes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3495))
// CS Name: ::System.Reflection::TypeAttributes
struct CORDL_TYPE TypeAttributes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TypeAttributes_Unwrapped
  enum struct __TypeAttributes_Unwrapped : int32_t {
    __E_VisibilityMask = static_cast<int32_t>(0x7),
    __E_NotPublic = static_cast<int32_t>(0x0),
    __E_Public = static_cast<int32_t>(0x1),
    __E_NestedPublic = static_cast<int32_t>(0x2),
    __E_NestedPrivate = static_cast<int32_t>(0x3),
    __E_NestedFamily = static_cast<int32_t>(0x4),
    __E_NestedAssembly = static_cast<int32_t>(0x5),
    __E_NestedFamANDAssem = static_cast<int32_t>(0x6),
    __E_NestedFamORAssem = static_cast<int32_t>(0x7),
    __E_LayoutMask = static_cast<int32_t>(0x18),
    __E_AutoLayout = static_cast<int32_t>(0x0),
    __E_SequentialLayout = static_cast<int32_t>(0x8),
    __E_ExplicitLayout = static_cast<int32_t>(0x10),
    __E_ClassSemanticsMask = static_cast<int32_t>(0x20),
    __E_Class = static_cast<int32_t>(0x0),
    __E_Interface = static_cast<int32_t>(0x20),
    __E_Abstract = static_cast<int32_t>(0x80),
    __E_Sealed = static_cast<int32_t>(0x100),
    __E_SpecialName = static_cast<int32_t>(0x400),
    __E_Import = static_cast<int32_t>(0x1000),
    __E_Serializable = static_cast<int32_t>(0x2000),
    __E_WindowsRuntime = static_cast<int32_t>(0x4000),
    __E_StringFormatMask = static_cast<int32_t>(0x30000),
    __E_AnsiClass = static_cast<int32_t>(0x0),
    __E_UnicodeClass = static_cast<int32_t>(0x10000),
    __E_AutoClass = static_cast<int32_t>(0x20000),
    __E_CustomFormatClass = static_cast<int32_t>(0x30000),
    __E_CustomFormatMask = static_cast<int32_t>(0xc00000),
    __E_BeforeFieldInit = static_cast<int32_t>(0x100000),
    __E_RTSpecialName = static_cast<int32_t>(0x800),
    __E_HasSecurity = static_cast<int32_t>(0x40000),
    __E_ReservedMask = static_cast<int32_t>(0x40800),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TypeAttributes_Unwrapped() const noexcept {
    return static_cast<__TypeAttributes_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TypeAttributes(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeAttributes();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field VisibilityMask value: static_cast<int32_t>(0x7)
  static ::System::Reflection::TypeAttributes const VisibilityMask;

  /// @brief Field NotPublic value: static_cast<int32_t>(0x0)
  static ::System::Reflection::TypeAttributes const NotPublic;

  /// @brief Field Public value: static_cast<int32_t>(0x1)
  static ::System::Reflection::TypeAttributes const Public;

  /// @brief Field NestedPublic value: static_cast<int32_t>(0x2)
  static ::System::Reflection::TypeAttributes const NestedPublic;

  /// @brief Field NestedPrivate value: static_cast<int32_t>(0x3)
  static ::System::Reflection::TypeAttributes const NestedPrivate;

  /// @brief Field NestedFamily value: static_cast<int32_t>(0x4)
  static ::System::Reflection::TypeAttributes const NestedFamily;

  /// @brief Field NestedAssembly value: static_cast<int32_t>(0x5)
  static ::System::Reflection::TypeAttributes const NestedAssembly;

  /// @brief Field NestedFamANDAssem value: static_cast<int32_t>(0x6)
  static ::System::Reflection::TypeAttributes const NestedFamANDAssem;

  /// @brief Field NestedFamORAssem value: static_cast<int32_t>(0x7)
  static ::System::Reflection::TypeAttributes const NestedFamORAssem;

  /// @brief Field LayoutMask value: static_cast<int32_t>(0x18)
  static ::System::Reflection::TypeAttributes const LayoutMask;

  /// @brief Field AutoLayout value: static_cast<int32_t>(0x0)
  static ::System::Reflection::TypeAttributes const AutoLayout;

  /// @brief Field SequentialLayout value: static_cast<int32_t>(0x8)
  static ::System::Reflection::TypeAttributes const SequentialLayout;

  /// @brief Field ExplicitLayout value: static_cast<int32_t>(0x10)
  static ::System::Reflection::TypeAttributes const ExplicitLayout;

  /// @brief Field ClassSemanticsMask value: static_cast<int32_t>(0x20)
  static ::System::Reflection::TypeAttributes const ClassSemanticsMask;

  /// @brief Field Class value: static_cast<int32_t>(0x0)
  static ::System::Reflection::TypeAttributes const Class;

  /// @brief Field Interface value: static_cast<int32_t>(0x20)
  static ::System::Reflection::TypeAttributes const Interface;

  /// @brief Field Abstract value: static_cast<int32_t>(0x80)
  static ::System::Reflection::TypeAttributes const Abstract;

  /// @brief Field Sealed value: static_cast<int32_t>(0x100)
  static ::System::Reflection::TypeAttributes const Sealed;

  /// @brief Field SpecialName value: static_cast<int32_t>(0x400)
  static ::System::Reflection::TypeAttributes const SpecialName;

  /// @brief Field Import value: static_cast<int32_t>(0x1000)
  static ::System::Reflection::TypeAttributes const Import;

  /// @brief Field Serializable value: static_cast<int32_t>(0x2000)
  static ::System::Reflection::TypeAttributes const Serializable;

  /// @brief Field WindowsRuntime value: static_cast<int32_t>(0x4000)
  static ::System::Reflection::TypeAttributes const WindowsRuntime;

  /// @brief Field StringFormatMask value: static_cast<int32_t>(0x30000)
  static ::System::Reflection::TypeAttributes const StringFormatMask;

  /// @brief Field AnsiClass value: static_cast<int32_t>(0x0)
  static ::System::Reflection::TypeAttributes const AnsiClass;

  /// @brief Field UnicodeClass value: static_cast<int32_t>(0x10000)
  static ::System::Reflection::TypeAttributes const UnicodeClass;

  /// @brief Field AutoClass value: static_cast<int32_t>(0x20000)
  static ::System::Reflection::TypeAttributes const AutoClass;

  /// @brief Field CustomFormatClass value: static_cast<int32_t>(0x30000)
  static ::System::Reflection::TypeAttributes const CustomFormatClass;

  /// @brief Field CustomFormatMask value: static_cast<int32_t>(0xc00000)
  static ::System::Reflection::TypeAttributes const CustomFormatMask;

  /// @brief Field BeforeFieldInit value: static_cast<int32_t>(0x100000)
  static ::System::Reflection::TypeAttributes const BeforeFieldInit;

  /// @brief Field RTSpecialName value: static_cast<int32_t>(0x800)
  static ::System::Reflection::TypeAttributes const RTSpecialName;

  /// @brief Field HasSecurity value: static_cast<int32_t>(0x40000)
  static ::System::Reflection::TypeAttributes const HasSecurity;

  /// @brief Field ReservedMask value: static_cast<int32_t>(0x40800)
  static ::System::Reflection::TypeAttributes const ReservedMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::TypeAttributes, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::TypeAttributes, value__) == 0x0, "Offset mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::TypeAttributes, "System.Reflection", "TypeAttributes");
