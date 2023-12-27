#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__InvalidOperationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProtocolViolationException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Net {
class ProtocolViolationException;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ProtocolViolationException);
// Type: System.Net::ProtocolViolationException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2427))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9082))
// CS Name: ::System.Net::ProtocolViolationException*
class CORDL_TYPE ProtocolViolationException : public ::System::InvalidOperationException {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  static inline ::System::Net::ProtocolViolationException* New_ctor();

  /// @brief Method .ctor addr 0x299ec40 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::System::Net::ProtocolViolationException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x299ec48 size 0x8 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::System::Net::ProtocolViolationException* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                    ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor addr 0x299ec50 size 0x8 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x299ec58 size 0x8 virtual true final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method GetObjectData addr 0x299ec60 size 0x8 virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  // Ctor Parameters [CppParam { name: "", ty: "ProtocolViolationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProtocolViolationException(ProtocolViolationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProtocolViolationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProtocolViolationException(ProtocolViolationException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProtocolViolationException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ProtocolViolationException, 0x90>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::ProtocolViolationException);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ProtocolViolationException*, "System.Net", "ProtocolViolationException");
