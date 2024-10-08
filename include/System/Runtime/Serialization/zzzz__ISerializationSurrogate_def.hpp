#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ISerializationSurrogate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISerializationSurrogate)
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ISerializationSurrogate);
// Type: System.Runtime.Serialization::ISerializationSurrogate
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: ::System.Runtime.Serialization::ISerializationSurrogate*
class CORDL_TYPE ISerializationSurrogate {
public:
  // Declarations
  /// @brief Method GetObjectData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method SetObjectData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* SetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context,
                                         ::System::Runtime::Serialization::ISurrogateSelector* selector);

  // Ctor Parameters [CppParam { name: "", ty: "ISerializationSurrogate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISerializationSurrogate(ISerializationSurrogate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISerializationSurrogate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISerializationSurrogate(ISerializationSurrogate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3203 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ISerializationSurrogate);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ISerializationSurrogate*, "System.Runtime.Serialization", "ISerializationSurrogate");
