#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDeserializationCallback)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::IDeserializationCallback);
// Type: System.Runtime.Serialization::IDeserializationCallback
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: ::System.Runtime.Serialization::IDeserializationCallback*
class CORDL_TYPE IDeserializationCallback {
public:
  // Declarations
  /// @brief Method OnDeserialization, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnDeserialization(::System::Object* sender);

  // Ctor Parameters [CppParam { name: "", ty: "IDeserializationCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDeserializationCallback(IDeserializationCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDeserializationCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDeserializationCallback(IDeserializationCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::IDeserializationCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::IDeserializationCallback*, "System.Runtime.Serialization", "IDeserializationCallback");
