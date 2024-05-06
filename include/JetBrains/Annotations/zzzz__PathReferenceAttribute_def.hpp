#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PathReferenceAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class PathReferenceAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::PathReferenceAttribute);
// Type: JetBrains.Annotations::PathReferenceAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::PathReferenceAttribute*
class CORDL_TYPE PathReferenceAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_BasePath, put = set_BasePath))::StringW BasePath;

  /// @brief Field <BasePath>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__BasePath_k__BackingField, put = __cordl_internal_set__BasePath_k__BackingField))::StringW _BasePath_k__BackingField;

  static inline ::JetBrains::Annotations::PathReferenceAttribute* New_ctor();

  static inline ::JetBrains::Annotations::PathReferenceAttribute* New_ctor(::StringW basePath);

  constexpr ::StringW const& __cordl_internal_get__BasePath_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__BasePath_k__BackingField();

  constexpr void __cordl_internal_set__BasePath_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x360efe0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x360efe8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW basePath);

  /// @brief Method get_BasePath, addr 0x360f010, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_BasePath();

  /// @brief Method set_BasePath, addr 0x360f018, size 0x8, virtual false, abstract: false, final false
  inline void set_BasePath(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PathReferenceAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PathReferenceAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PathReferenceAttribute(PathReferenceAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PathReferenceAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PathReferenceAttribute(PathReferenceAttribute const&) = delete;

  /// @brief Field <BasePath>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____BasePath_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::PathReferenceAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::JetBrains::Annotations::PathReferenceAttribute, ____BasePath_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::PathReferenceAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::PathReferenceAttribute*, "JetBrains.Annotations", "PathReferenceAttribute");
