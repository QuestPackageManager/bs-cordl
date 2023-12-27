#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SurrogateForCyclicalReference)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SurrogateForCyclicalReference;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SurrogateForCyclicalReference);
// Type: System.Runtime.Serialization::SurrogateForCyclicalReference
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3214))
// CS Name: ::System.Runtime.Serialization::SurrogateForCyclicalReference*
class CORDL_TYPE SurrogateForCyclicalReference : public ::System::Object {
public:
  // Declarations
  /// @brief Field innerSurrogate, offset 0x10, size 0x8
  __declspec(property(get = __get_innerSurrogate, put = __set_innerSurrogate))::System::Runtime::Serialization::ISerializationSurrogate* innerSurrogate;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializationSurrogate"
  constexpr operator ::System::Runtime::Serialization::ISerializationSurrogate*() noexcept;

  constexpr ::System::Runtime::Serialization::ISerializationSurrogate*& __get_innerSurrogate();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISerializationSurrogate*> const& __get_innerSurrogate() const;

  constexpr void __set_innerSurrogate(::System::Runtime::Serialization::ISerializationSurrogate* value);

  /// @brief Method GetObjectData addr 0x24b8338 size 0xd0 virtual true final true
  inline void GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method SetObjectData addr 0x24b8408 size 0xdc virtual true final true
  inline ::System::Object* SetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context,
                                         ::System::Runtime::Serialization::ISurrogateSelector* selector);

  // Ctor Parameters [CppParam { name: "", ty: "SurrogateForCyclicalReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SurrogateForCyclicalReference(SurrogateForCyclicalReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SurrogateForCyclicalReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SurrogateForCyclicalReference(SurrogateForCyclicalReference const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SurrogateForCyclicalReference();

public:
  /// @brief Field innerSurrogate, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::ISerializationSurrogate* ___innerSurrogate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SurrogateForCyclicalReference, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SurrogateForCyclicalReference);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SurrogateForCyclicalReference*, "System.Runtime.Serialization", "SurrogateForCyclicalReference");
