#pragma once
// IWYU pragma private; include "System/Xml/Linq/BaseUriAnnotation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BaseUriAnnotation)
// Forward declare root types
namespace System::Xml::Linq {
class BaseUriAnnotation;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::BaseUriAnnotation);
// Dependencies System.Object
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.BaseUriAnnotation
class CORDL_TYPE BaseUriAnnotation : public ::System::Object {
public:
  // Declarations
  /// @brief Field baseUri, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_baseUri, put = __cordl_internal_set_baseUri)) ::StringW baseUri;

  static inline ::System::Xml::Linq::BaseUriAnnotation* New_ctor(::StringW baseUri);

  constexpr ::StringW const& __cordl_internal_get_baseUri() const;

  constexpr ::StringW& __cordl_internal_get_baseUri();

  constexpr void __cordl_internal_set_baseUri(::StringW value);

  /// @brief Method .ctor, addr 0x42470c0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW baseUri);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseUriAnnotation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseUriAnnotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseUriAnnotation(BaseUriAnnotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseUriAnnotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseUriAnnotation(BaseUriAnnotation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17947 };

  /// @brief Field baseUri, offset: 0x10, size: 0x8, def value: None
  ::StringW ___baseUri;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::BaseUriAnnotation, ___baseUri) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::BaseUriAnnotation, 0x18>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::BaseUriAnnotation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::BaseUriAnnotation*, "System.Xml.Linq", "BaseUriAnnotation");
