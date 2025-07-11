#pragma once
// IWYU pragma private; include "System/Diagnostics/DebuggerDisplayAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DebuggerDisplayAttribute)
// Forward declare root types
namespace System::Diagnostics {
class DebuggerDisplayAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::DebuggerDisplayAttribute);
// Dependencies System.Attribute
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.DebuggerDisplayAttribute
class CORDL_TYPE DebuggerDisplayAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(put = set_Name)) ::StringW Name;

  __declspec(property(put = set_Type)) ::StringW Type;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field type, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::StringW type;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::StringW value;

  static inline ::System::Diagnostics::DebuggerDisplayAttribute* New_ctor(::StringW value);

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_type() const;

  constexpr ::StringW& __cordl_internal_get_type();

  constexpr ::StringW const& __cordl_internal_get_value() const;

  constexpr ::StringW& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_type(::StringW value);

  constexpr void __cordl_internal_set_value(::StringW value);

  /// @brief Method .ctor, addr 0x3db6508, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  /// @brief Method set_Name, addr 0x3db6574, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_Type, addr 0x3db657c, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebuggerDisplayAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebuggerDisplayAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebuggerDisplayAttribute(DebuggerDisplayAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebuggerDisplayAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebuggerDisplayAttribute(DebuggerDisplayAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3743 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::StringW ___value;

  /// @brief Field type, offset: 0x20, size: 0x8, def value: None
  ::StringW ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::DebuggerDisplayAttribute, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::DebuggerDisplayAttribute, ___value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::DebuggerDisplayAttribute, ___type) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::DebuggerDisplayAttribute, 0x28>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::DebuggerDisplayAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggerDisplayAttribute*, "System.Diagnostics", "DebuggerDisplayAttribute");
