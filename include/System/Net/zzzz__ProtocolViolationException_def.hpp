#pragma once
// IWYU pragma private; include "System/Net/ProtocolViolationException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__InvalidOperationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProtocolViolationException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Net {
class ProtocolViolationException;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ProtocolViolationException);
// Dependencies System.InvalidOperationException, System.Runtime.Serialization.ISerializable
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ProtocolViolationException
class CORDL_TYPE ProtocolViolationException : public ::System::InvalidOperationException {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method GetObjectData, addr 0x44a1bc8, size 0x8, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  static inline ::System::Net::ProtocolViolationException* New_ctor();

  static inline ::System::Net::ProtocolViolationException* New_ctor(::StringW message);

  static inline ::System::Net::ProtocolViolationException* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                    ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x44a1bc0, size 0x8, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor, addr 0x44a1bb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x449a658, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x44a1bb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProtocolViolationException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProtocolViolationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProtocolViolationException(ProtocolViolationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProtocolViolationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProtocolViolationException(ProtocolViolationException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9603 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ProtocolViolationException, 0x90>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::ProtocolViolationException);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ProtocolViolationException*, "System.Net", "ProtocolViolationException");
