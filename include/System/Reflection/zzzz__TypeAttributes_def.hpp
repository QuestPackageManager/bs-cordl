#pragma once
// IWYU pragma private; include "System/Reflection/TypeAttributes.hpp"
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
// Dependencies
namespace System::Reflection {
// Is value type: true
// CS Name: System.Reflection.TypeAttributes
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeAttributes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TypeAttributes(int32_t value__) noexcept;

  /// @brief Field Abstract value: I32(128)
  static ::System::Reflection::TypeAttributes const Abstract;

  /// @brief Field AnsiClass value: I32(0)
  static ::System::Reflection::TypeAttributes const AnsiClass;

  /// @brief Field AutoClass value: I32(131072)
  static ::System::Reflection::TypeAttributes const AutoClass;

  /// @brief Field AutoLayout value: I32(0)
  static ::System::Reflection::TypeAttributes const AutoLayout;

  /// @brief Field BeforeFieldInit value: I32(1048576)
  static ::System::Reflection::TypeAttributes const BeforeFieldInit;

  /// @brief Field Class value: I32(0)
  static ::System::Reflection::TypeAttributes const Class;

  /// @brief Field ClassSemanticsMask value: I32(32)
  static ::System::Reflection::TypeAttributes const ClassSemanticsMask;

  /// @brief Field CustomFormatClass value: I32(196608)
  static ::System::Reflection::TypeAttributes const CustomFormatClass;

  /// @brief Field CustomFormatMask value: I32(12582912)
  static ::System::Reflection::TypeAttributes const CustomFormatMask;

  /// @brief Field ExplicitLayout value: I32(16)
  static ::System::Reflection::TypeAttributes const ExplicitLayout;

  /// @brief Field HasSecurity value: I32(262144)
  static ::System::Reflection::TypeAttributes const HasSecurity;

  /// @brief Field Import value: I32(4096)
  static ::System::Reflection::TypeAttributes const Import;

  /// @brief Field Interface value: I32(32)
  static ::System::Reflection::TypeAttributes const Interface;

  /// @brief Field LayoutMask value: I32(24)
  static ::System::Reflection::TypeAttributes const LayoutMask;

  /// @brief Field NestedAssembly value: I32(5)
  static ::System::Reflection::TypeAttributes const NestedAssembly;

  /// @brief Field NestedFamANDAssem value: I32(6)
  static ::System::Reflection::TypeAttributes const NestedFamANDAssem;

  /// @brief Field NestedFamORAssem value: I32(7)
  static ::System::Reflection::TypeAttributes const NestedFamORAssem;

  /// @brief Field NestedFamily value: I32(4)
  static ::System::Reflection::TypeAttributes const NestedFamily;

  /// @brief Field NestedPrivate value: I32(3)
  static ::System::Reflection::TypeAttributes const NestedPrivate;

  /// @brief Field NestedPublic value: I32(2)
  static ::System::Reflection::TypeAttributes const NestedPublic;

  /// @brief Field NotPublic value: I32(0)
  static ::System::Reflection::TypeAttributes const NotPublic;

  /// @brief Field Public value: I32(1)
  static ::System::Reflection::TypeAttributes const Public;

  /// @brief Field RTSpecialName value: I32(2048)
  static ::System::Reflection::TypeAttributes const RTSpecialName;

  /// @brief Field ReservedMask value: I32(264192)
  static ::System::Reflection::TypeAttributes const ReservedMask;

  /// @brief Field Sealed value: I32(256)
  static ::System::Reflection::TypeAttributes const Sealed;

  /// @brief Field SequentialLayout value: I32(8)
  static ::System::Reflection::TypeAttributes const SequentialLayout;

  /// @brief Field Serializable value: I32(8192)
  static ::System::Reflection::TypeAttributes const Serializable;

  /// @brief Field SpecialName value: I32(1024)
  static ::System::Reflection::TypeAttributes const SpecialName;

  /// @brief Field StringFormatMask value: I32(196608)
  static ::System::Reflection::TypeAttributes const StringFormatMask;

  /// @brief Field UnicodeClass value: I32(65536)
  static ::System::Reflection::TypeAttributes const UnicodeClass;

  /// @brief Field VisibilityMask value: I32(7)
  static ::System::Reflection::TypeAttributes const VisibilityMask;

  /// @brief Field WindowsRuntime value: I32(16384)
  static ::System::Reflection::TypeAttributes const WindowsRuntime;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3502 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::TypeAttributes, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::TypeAttributes, 0x4>, "Size mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::TypeAttributes, "System.Reflection", "TypeAttributes");
