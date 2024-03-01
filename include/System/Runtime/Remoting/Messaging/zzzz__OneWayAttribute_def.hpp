#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(OneWayAttribute)
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class OneWayAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::OneWayAttribute);
// Type: System.Runtime.Remoting.Messaging::OneWayAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::OneWayAttribute*
class CORDL_TYPE OneWayAttribute : public ::System::Attribute {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OneWayAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OneWayAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OneWayAttribute(OneWayAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OneWayAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OneWayAttribute(OneWayAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::OneWayAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::OneWayAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::OneWayAttribute*, "System.Runtime.Remoting.Messaging", "OneWayAttribute");
