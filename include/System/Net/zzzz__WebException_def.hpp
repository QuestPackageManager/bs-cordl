#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebExceptionInternalStatus_def.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
#include "System/zzzz__InvalidOperationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WebException)
namespace System::Net {
struct WebExceptionStatus;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Exception;
}
namespace System::Net {
class WebResponse;
}
namespace System::Net {
struct WebExceptionInternalStatus;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Net {
class WebException;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebException);
// Type: System.Net::WebException
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 156, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7924)), TypeDefinitionIndex(TypeDefinitionIndex(2425)), TypeDefinitionIndex(TypeDefinitionIndex(7923))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7922))
// CS Name: ::System.Net::WebException*
class CORDL_TYPE WebException : public ::System::InvalidOperationException {
public:
  // Declarations
  /// @brief Field m_Status, offset 0x8c, size 0x4
  __declspec(property(get = __get_m_Status, put = __set_m_Status))::System::Net::WebExceptionStatus m_Status;

  /// @brief Field m_Response, offset 0x90, size 0x8
  __declspec(property(get = __get_m_Response, put = __set_m_Response))::System::Net::WebResponse* m_Response;

  /// @brief Field m_InternalStatus, offset 0x98, size 0x4
  __declspec(property(get = __get_m_InternalStatus, put = __set_m_InternalStatus))::System::Net::WebExceptionInternalStatus m_InternalStatus;

  __declspec(property(get = get_Status))::System::Net::WebExceptionStatus Status;

  __declspec(property(get = get_Response))::System::Net::WebResponse* Response;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  constexpr ::System::Net::WebExceptionStatus& __get_m_Status();

  constexpr ::System::Net::WebExceptionStatus const& __get_m_Status() const;

  constexpr void __set_m_Status(::System::Net::WebExceptionStatus value);

  constexpr ::System::Net::WebResponse*& __get_m_Response();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebResponse*> const& __get_m_Response() const;

  constexpr void __set_m_Response(::System::Net::WebResponse* value);

  constexpr ::System::Net::WebExceptionInternalStatus& __get_m_InternalStatus();

  constexpr ::System::Net::WebExceptionInternalStatus const& __get_m_InternalStatus() const;

  constexpr void __set_m_InternalStatus(::System::Net::WebExceptionInternalStatus value);

  static inline ::System::Net::WebException* New_ctor();

  /// @brief Method .ctor addr 0x2822054 size 0x10 virtual false final false
  inline void _ctor();

  static inline ::System::Net::WebException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x2820840 size 0x14 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::System::Net::WebException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor addr 0x2822064 size 0x10 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  static inline ::System::Net::WebException* New_ctor(::StringW message, ::System::Net::WebExceptionStatus status);

  /// @brief Method .ctor addr 0x2820a2c size 0x14 virtual false final false
  inline void _ctor(::StringW message, ::System::Net::WebExceptionStatus status);

  static inline ::System::Net::WebException* New_ctor(::StringW message, ::System::Net::WebExceptionStatus status, ::System::Net::WebExceptionInternalStatus internalStatus,
                                                      ::System::Exception* innerException);

  /// @brief Method .ctor addr 0x2822088 size 0x1c virtual false final false
  inline void _ctor(::StringW message, ::System::Net::WebExceptionStatus status, ::System::Net::WebExceptionInternalStatus internalStatus, ::System::Exception* innerException);

  static inline ::System::Net::WebException* New_ctor(::StringW message, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response);

  /// @brief Method .ctor addr 0x2822074 size 0x14 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response);

  static inline ::System::Net::WebException* New_ctor(::StringW message, ::StringW data, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status,
                                                      ::System::Net::WebResponse* response);

  /// @brief Method .ctor addr 0x28220bc size 0xe0 virtual false final false
  inline void _ctor(::StringW message, ::StringW data, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response);

  static inline ::System::Net::WebException* New_ctor(::StringW message, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response,
                                                      ::System::Net::WebExceptionInternalStatus internalStatus);

  /// @brief Method .ctor addr 0x28220a4 size 0x18 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response,
                    ::System::Net::WebExceptionInternalStatus internalStatus);

  static inline ::System::Net::WebException* New_ctor(::StringW message, ::StringW data, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status,
                                                      ::System::Net::WebResponse* response, ::System::Net::WebExceptionInternalStatus internalStatus);

  /// @brief Method .ctor addr 0x282219c size 0xf0 virtual false final false
  inline void _ctor(::StringW message, ::StringW data, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response,
                    ::System::Net::WebExceptionInternalStatus internalStatus);

  static inline ::System::Net::WebException* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor addr 0x282228c size 0x10 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x282229c size 0xc virtual true final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method GetObjectData addr 0x28222a8 size 0x8 virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method get_Status addr 0x28222b0 size 0x8 virtual false final false
  inline ::System::Net::WebExceptionStatus get_Status();

  /// @brief Method get_Response addr 0x28222b8 size 0x8 virtual false final false
  inline ::System::Net::WebResponse* get_Response();

  // Ctor Parameters [CppParam { name: "", ty: "WebException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebException(WebException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebException(WebException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebException();

public:
  /// @brief Field m_Status, offset: 0x8c, size: 0x4, def value: None
  ::System::Net::WebExceptionStatus ___m_Status;

  /// @brief Field m_Response, offset: 0x90, size: 0x8, def value: None
  ::System::Net::WebResponse* ___m_Response;

  /// @brief Field m_InternalStatus, offset: 0x98, size: 0x4, def value: None
  ::System::Net::WebExceptionInternalStatus ___m_InternalStatus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebException, 0xa0>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebException, ___m_Status) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebException, ___m_Response) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebException, ___m_InternalStatus) == 0x98, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebException);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebException*, "System.Net", "WebException");
