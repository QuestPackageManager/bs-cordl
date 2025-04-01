#pragma once
// IWYU pragma private; include "JetBrains/Annotations/PublicAPIAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PublicAPIAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class PublicAPIAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::PublicAPIAttribute);
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.PublicAPIAttribute
class CORDL_TYPE PublicAPIAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Comment, put = set_Comment)) ::StringW Comment;

  /// @brief Field <Comment>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Comment_k__BackingField, put = __cordl_internal_set__Comment_k__BackingField)) ::StringW _Comment_k__BackingField;

  static inline ::JetBrains::Annotations::PublicAPIAttribute* New_ctor();

  static inline ::JetBrains::Annotations::PublicAPIAttribute* New_ctor(::StringW comment);

  constexpr ::StringW const& __cordl_internal_get__Comment_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Comment_k__BackingField();

  constexpr void __cordl_internal_set__Comment_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x4aed650, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4aed658, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW comment);

  /// @brief Method get_Comment, addr 0x4aed680, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Comment();

  /// @brief Method set_Comment, addr 0x4aed688, size 0x8, virtual false, abstract: false, final false
  inline void set_Comment(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PublicAPIAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PublicAPIAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PublicAPIAttribute(PublicAPIAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PublicAPIAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PublicAPIAttribute(PublicAPIAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18467 };

  /// @brief Field <Comment>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Comment_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JetBrains::Annotations::PublicAPIAttribute, ____Comment_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::PublicAPIAttribute, 0x18>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::PublicAPIAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::PublicAPIAttribute*, "JetBrains.Annotations", "PublicAPIAttribute");
