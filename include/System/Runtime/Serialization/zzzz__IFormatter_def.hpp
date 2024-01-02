#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFormatter)
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class IFormatter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::IFormatter);
// Type: System.Runtime.Serialization::IFormatter
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3215))
// CS Name: ::System.Runtime.Serialization::IFormatter*
class CORDL_TYPE IFormatter {
public:
  // Declarations
  __declspec(property(put = set_SurrogateSelector))::System::Runtime::Serialization::ISurrogateSelector* SurrogateSelector;

  /// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Serialize(::System::IO::Stream* serializationStream, ::System::Object* graph);

  /// @brief Method set_SurrogateSelector, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_SurrogateSelector(::System::Runtime::Serialization::ISurrogateSelector* value);

  // Ctor Parameters [CppParam { name: "", ty: "IFormatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IFormatter(IFormatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IFormatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFormatter(IFormatter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::IFormatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::IFormatter*, "System.Runtime.Serialization", "IFormatter");
