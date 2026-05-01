#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ISurrogateSelector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISurrogateSelector)
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ISurrogateSelector);
// Dependencies
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.ISurrogateSelector
class CORDL_TYPE ISurrogateSelector {
public:
  // Declarations
  /// @brief Method GetSurrogate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::ISerializationSurrogate* GetSurrogate(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context,
                                                                                 ::ByRef<::System::Runtime::Serialization::ISurrogateSelector*> selector);

  // Ctor Parameters [CppParam { name: "", ty: "ISurrogateSelector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISurrogateSelector(ISurrogateSelector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3221 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ISurrogateSelector);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ISurrogateSelector*, "System.Runtime.Serialization", "ISurrogateSelector");
