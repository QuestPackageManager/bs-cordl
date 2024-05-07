#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/IgnoreDataMemberAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(IgnoreDataMemberAttribute)
// Forward declare root types
namespace System::Runtime::Serialization {
class IgnoreDataMemberAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::IgnoreDataMemberAttribute);
// Type: System.Runtime.Serialization::IgnoreDataMemberAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: ::System.Runtime.Serialization::IgnoreDataMemberAttribute*
class CORDL_TYPE IgnoreDataMemberAttribute : public ::System::Attribute {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoreDataMemberAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IgnoreDataMemberAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IgnoreDataMemberAttribute(IgnoreDataMemberAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IgnoreDataMemberAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IgnoreDataMemberAttribute(IgnoreDataMemberAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::IgnoreDataMemberAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::IgnoreDataMemberAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::IgnoreDataMemberAttribute*, "System.Runtime.Serialization", "IgnoreDataMemberAttribute");
