#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(ISurrogateSelector)
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ISurrogateSelector);
// Type: System.Runtime.Serialization::ISurrogateSelector
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3204))
// CS Name: ::System.Runtime.Serialization::ISurrogateSelector*
class CORDL_TYPE ISurrogateSelector {
public:
  // Declarations
  /// @brief Method GetSurrogate addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Runtime::Serialization::ISerializationSurrogate* GetSurrogate(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context,
                                                                                 ByRef<::System::Runtime::Serialization::ISurrogateSelector*> selector);

  // Ctor Parameters [CppParam { name: "", ty: "ISurrogateSelector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISurrogateSelector(ISurrogateSelector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISurrogateSelector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISurrogateSelector(ISurrogateSelector const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ISurrogateSelector);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ISurrogateSelector*, "System.Runtime.Serialization", "ISurrogateSelector");
