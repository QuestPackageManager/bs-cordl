#pragma once
// IWYU pragma private; include "System/Diagnostics/DebuggableAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebuggableAttribute)
namespace System::Diagnostics {
struct DebuggableAttribute_DebuggingModes;
}
// Forward declare root types
namespace System::Diagnostics {
struct DebuggableAttribute_DebuggingModes;
}
namespace System::Diagnostics {
class DebuggableAttribute;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::DebuggableAttribute_DebuggingModes);
MARK_REF_PTR_T(::System::Diagnostics::DebuggableAttribute);
// Dependencies
namespace System::Diagnostics {
// Is value type: true
// CS Name: System.Diagnostics.DebuggableAttribute/DebuggingModes
struct CORDL_TYPE DebuggableAttribute_DebuggingModes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebuggableAttribute_DebuggingModes_Unwrapped
  enum struct __DebuggableAttribute_DebuggingModes_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Default = static_cast<int32_t>(0x1),
    __E_DisableOptimizations = static_cast<int32_t>(0x100),
    __E_IgnoreSymbolStoreSequencePoints = static_cast<int32_t>(0x2),
    __E_EnableEditAndContinue = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebuggableAttribute_DebuggingModes_Unwrapped() const noexcept {
    return static_cast<__DebuggableAttribute_DebuggingModes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebuggableAttribute_DebuggingModes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebuggableAttribute_DebuggingModes(int32_t value__) noexcept;

  /// @brief Field Default value: I32(1)
  static ::System::Diagnostics::DebuggableAttribute_DebuggingModes const Default;

  /// @brief Field DisableOptimizations value: I32(256)
  static ::System::Diagnostics::DebuggableAttribute_DebuggingModes const DisableOptimizations;

  /// @brief Field EnableEditAndContinue value: I32(4)
  static ::System::Diagnostics::DebuggableAttribute_DebuggingModes const EnableEditAndContinue;

  /// @brief Field IgnoreSymbolStoreSequencePoints value: I32(2)
  static ::System::Diagnostics::DebuggableAttribute_DebuggingModes const IgnoreSymbolStoreSequencePoints;

  /// @brief Field None value: I32(0)
  static ::System::Diagnostics::DebuggableAttribute_DebuggingModes const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3738 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::DebuggableAttribute_DebuggingModes, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::DebuggableAttribute_DebuggingModes, 0x4>, "Size mismatch!");

} // namespace System::Diagnostics
// Dependencies System.Attribute, System.Diagnostics.DebuggableAttribute::DebuggingModes
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.DebuggableAttribute
class CORDL_TYPE DebuggableAttribute : public ::System::Attribute {
public:
  // Declarations
  using DebuggingModes = ::System::Diagnostics::DebuggableAttribute_DebuggingModes;

  /// @brief Field m_debuggingModes, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_debuggingModes, put = __cordl_internal_set_m_debuggingModes)) ::System::Diagnostics::DebuggableAttribute_DebuggingModes m_debuggingModes;

  static inline ::System::Diagnostics::DebuggableAttribute* New_ctor(::System::Diagnostics::DebuggableAttribute_DebuggingModes modes);

  constexpr ::System::Diagnostics::DebuggableAttribute_DebuggingModes const& __cordl_internal_get_m_debuggingModes() const;

  constexpr ::System::Diagnostics::DebuggableAttribute_DebuggingModes& __cordl_internal_get_m_debuggingModes();

  constexpr void __cordl_internal_set_m_debuggingModes(::System::Diagnostics::DebuggableAttribute_DebuggingModes value);

  /// @brief Method .ctor, addr 0x3db8198, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Diagnostics::DebuggableAttribute_DebuggingModes modes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebuggableAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebuggableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebuggableAttribute(DebuggableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebuggableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebuggableAttribute(DebuggableAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3739 };

  /// @brief Field m_debuggingModes, offset: 0x10, size: 0x4, def value: None
  ::System::Diagnostics::DebuggableAttribute_DebuggingModes ___m_debuggingModes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::DebuggableAttribute, ___m_debuggingModes) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::DebuggableAttribute, 0x18>, "Size mismatch!");

} // namespace System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggableAttribute_DebuggingModes, "System.Diagnostics", "DebuggableAttribute/DebuggingModes");
NEED_NO_BOX(::System::Diagnostics::DebuggableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggableAttribute*, "System.Diagnostics", "DebuggableAttribute");
