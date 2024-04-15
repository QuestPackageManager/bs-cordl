#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SurrogateForCyclicalReference)
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
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
class SurrogateForCyclicalReference;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SurrogateForCyclicalReference);
// Type: System.Runtime.Serialization::SurrogateForCyclicalReference
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: ::System.Runtime.Serialization::SurrogateForCyclicalReference*
class CORDL_TYPE SurrogateForCyclicalReference : public ::System::Object {
public:
  // Declarations
  /// @brief Field innerSurrogate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_innerSurrogate, put = __cordl_internal_set_innerSurrogate))::System::Runtime::Serialization::ISerializationSurrogate* innerSurrogate;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializationSurrogate"
  constexpr operator ::System::Runtime::Serialization::ISerializationSurrogate*() noexcept;

  /// @brief Method GetObjectData, addr 0x273ac88, size 0xd0, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method SetObjectData, addr 0x273ad58, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Object* SetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context,
                                         ::System::Runtime::Serialization::ISurrogateSelector* selector);

  constexpr ::System::Runtime::Serialization::ISerializationSurrogate*& __cordl_internal_get_innerSurrogate();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISerializationSurrogate*> const& __cordl_internal_get_innerSurrogate() const;

  constexpr void __cordl_internal_set_innerSurrogate(::System::Runtime::Serialization::ISerializationSurrogate* value);

  /// @brief Convert to "::System::Runtime::Serialization::ISerializationSurrogate"
  constexpr ::System::Runtime::Serialization::ISerializationSurrogate* i___System__Runtime__Serialization__ISerializationSurrogate() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SurrogateForCyclicalReference();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SurrogateForCyclicalReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SurrogateForCyclicalReference(SurrogateForCyclicalReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SurrogateForCyclicalReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SurrogateForCyclicalReference(SurrogateForCyclicalReference const&) = delete;

  /// @brief Field innerSurrogate, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::ISerializationSurrogate* ___innerSurrogate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SurrogateForCyclicalReference, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SurrogateForCyclicalReference, ___innerSurrogate) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SurrogateForCyclicalReference);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SurrogateForCyclicalReference*, "System.Runtime.Serialization", "SurrogateForCyclicalReference");
