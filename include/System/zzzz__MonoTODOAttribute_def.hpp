#pragma once
// IWYU pragma private; include "System/MonoTODOAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MonoTODOAttribute)
// Forward declare root types
namespace System {
class MonoTODOAttribute;
}
// Write type traits
MARK_REF_T(::System::MonoTODOAttribute*);
DEFINE_IL2CPP_CLASS(::System::MonoTODOAttribute*, "System", "MonoTODOAttribute");
// [AttributeUsage((System.AttributeTargets)32767, AllowMultiple = true)]
// Dependencies System.Attribute
namespace System {
// Is value type: false
// CS Name: System.MonoTODOAttribute
class CORDL_TYPE MonoTODOAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field comment, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_comment, put = __cordl_internal_set_comment)) ::StringW comment;

  static inline ::System::MonoTODOAttribute* New_ctor();

  static inline ::System::MonoTODOAttribute* New_ctor(::StringW comment);

  constexpr ::StringW const& __cordl_internal_get_comment() const;

  constexpr ::StringW& __cordl_internal_get_comment();

  constexpr void __cordl_internal_set_comment(::StringW value);

  /// @brief Method .ctor, addr 0x5c70504, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5c7050c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW comment);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoTODOAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoTODOAttribute", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoTODOAttribute(MonoTODOAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoTODOAttribute", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoTODOAttribute(MonoTODOAttributeconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2546 };

  /// @brief Field comment, offset: 0x10, size: 0x8, def value: None
  ::StringW ___comment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::MonoTODOAttribute, ___comment) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::MonoTODOAttribute) == 0x18, "Size mismatch!");

} // namespace System
