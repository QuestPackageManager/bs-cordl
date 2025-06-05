#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/GuidAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GuidAttribute)
// Forward declare root types
namespace System::Runtime::InteropServices {
class GuidAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::GuidAttribute);
// Dependencies System.Attribute
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.GuidAttribute
class CORDL_TYPE GuidAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _val, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__val, put = __cordl_internal_set__val)) ::StringW _val;

  static inline ::System::Runtime::InteropServices::GuidAttribute* New_ctor(::StringW guid);

  constexpr ::StringW const& __cordl_internal_get__val() const;

  constexpr ::StringW& __cordl_internal_get__val();

  constexpr void __cordl_internal_set__val(::StringW value);

  /// @brief Method .ctor, addr 0x3d14c8c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW guid);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GuidAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GuidAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GuidAttribute(GuidAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GuidAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GuidAttribute(GuidAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3323 };

  /// @brief Field _val, offset: 0x10, size: 0x8, def value: None
  ::StringW ____val;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::InteropServices::GuidAttribute, ____val) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::GuidAttribute, 0x18>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::GuidAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::GuidAttribute*, "System.Runtime.InteropServices", "GuidAttribute");
