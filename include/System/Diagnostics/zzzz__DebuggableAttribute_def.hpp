#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__DebuggableAttribute_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebuggableAttribute)
namespace System::Diagnostics {
struct __DebuggableAttribute__DebuggingModes;
}
// Forward declare root types
namespace System::Diagnostics {
struct __DebuggableAttribute__DebuggingModes;
}
namespace System::Diagnostics {
class DebuggableAttribute;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::__DebuggableAttribute__DebuggingModes);
MARK_REF_PTR_T(::System::Diagnostics::DebuggableAttribute);
// Type: ::DebuggingModes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3732))
// CS Name: ::DebuggableAttribute::DebuggingModes
struct CORDL_TYPE __DebuggableAttribute__DebuggingModes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DebuggableAttribute__DebuggingModes_Unwrapped
  enum struct ____DebuggableAttribute__DebuggingModes_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Default = static_cast<int32_t>(0x1),
    __E_DisableOptimizations = static_cast<int32_t>(0x100),
    __E_IgnoreSymbolStoreSequencePoints = static_cast<int32_t>(0x2),
    __E_EnableEditAndContinue = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DebuggableAttribute__DebuggingModes_Unwrapped() const noexcept {
    return static_cast<____DebuggableAttribute__DebuggingModes_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DebuggableAttribute__DebuggingModes(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebuggableAttribute__DebuggingModes();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Diagnostics::__DebuggableAttribute__DebuggingModes const None;

  /// @brief Field Default value: static_cast<int32_t>(0x1)
  static ::System::Diagnostics::__DebuggableAttribute__DebuggingModes const Default;

  /// @brief Field DisableOptimizations value: static_cast<int32_t>(0x100)
  static ::System::Diagnostics::__DebuggableAttribute__DebuggingModes const DisableOptimizations;

  /// @brief Field IgnoreSymbolStoreSequencePoints value: static_cast<int32_t>(0x2)
  static ::System::Diagnostics::__DebuggableAttribute__DebuggingModes const IgnoreSymbolStoreSequencePoints;

  /// @brief Field EnableEditAndContinue value: static_cast<int32_t>(0x4)
  static ::System::Diagnostics::__DebuggableAttribute__DebuggingModes const EnableEditAndContinue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::__DebuggableAttribute__DebuggingModes, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Diagnostics::__DebuggableAttribute__DebuggingModes, value__) == 0x0, "Offset mismatch!");

} // namespace System::Diagnostics
// Type: System.Diagnostics::DebuggableAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547)), TypeDefinitionIndex(TypeDefinitionIndex(3732))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3733))
// CS Name: ::System.Diagnostics::DebuggableAttribute*
class CORDL_TYPE DebuggableAttribute : public ::System::Attribute {
public:
  // Declarations
  using DebuggingModes = ::System::Diagnostics::__DebuggableAttribute__DebuggingModes;

  /// @brief Field m_debuggingModes, offset 0x10, size 0x4
  __declspec(property(get = __get_m_debuggingModes, put = __set_m_debuggingModes))::System::Diagnostics::__DebuggableAttribute__DebuggingModes m_debuggingModes;

  constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes& __get_m_debuggingModes();

  constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes const& __get_m_debuggingModes() const;

  constexpr void __set_m_debuggingModes(::System::Diagnostics::__DebuggableAttribute__DebuggingModes value);

  static inline ::System::Diagnostics::DebuggableAttribute* New_ctor(::System::Diagnostics::__DebuggableAttribute__DebuggingModes modes);

  /// @brief Method .ctor, addr 0x2579c20, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Diagnostics::__DebuggableAttribute__DebuggingModes modes);

  // Ctor Parameters [CppParam { name: "", ty: "DebuggableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebuggableAttribute(DebuggableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebuggableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebuggableAttribute(DebuggableAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebuggableAttribute();

public:
  /// @brief Field m_debuggingModes, offset: 0x10, size: 0x4, def value: None
  ::System::Diagnostics::__DebuggableAttribute__DebuggingModes ___m_debuggingModes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::DebuggableAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Diagnostics::DebuggableAttribute, ___m_debuggingModes) == 0x10, "Offset mismatch!");

} // namespace System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::__DebuggableAttribute__DebuggingModes, "System.Diagnostics", "DebuggableAttribute/DebuggingModes");
NEED_NO_BOX(::System::Diagnostics::DebuggableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggableAttribute*, "System.Diagnostics", "DebuggableAttribute");
