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
struct WebExceptionInternalStatus;
}
namespace System::Net {
struct WebExceptionStatus;
}
namespace System::Net {
class WebResponse;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
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
// CS Name: ::System.Net::WebException*
class CORDL_TYPE WebException : public ::System::InvalidOperationException {
public:
  // Declarations
  __declspec(property(get = get_Response))::System::Net::WebResponse* Response;

  __declspec(property(get = get_Status))::System::Net::WebExceptionStatus Status;

  /// @brief Field m_InternalStatus, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InternalStatus, put = __cordl_internal_set_m_InternalStatus))::System::Net::WebExceptionInternalStatus m_InternalStatus;

  /// @brief Field m_Response, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Response, put = __cordl_internal_set_m_Response))::System::Net::WebResponse* m_Response;

  /// @brief Field m_Status, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Status, put = __cordl_internal_set_m_Status))::System::Net::WebExceptionStatus m_Status;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method GetObjectData, addr 0x2ed437c, size 0x8, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  static inline ::System::Net::WebException* New_ctor();

  static inline ::System::Net::WebException* New_ctor(::StringW message);

  static inline ::System::Net::WebException* New_ctor(::StringW message, ::StringW data, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status,
                                                      ::System::Net::WebResponse* response);

  static inline ::System::Net::WebException* New_ctor(::StringW message, ::StringW data, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status,
                                                      ::System::Net::WebResponse* response, ::System::Net::WebExceptionInternalStatus internalStatus);

  static inline ::System::Net::WebException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::System::Net::WebException* New_ctor(::StringW message, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response);

  static inline ::System::Net::WebException* New_ctor(::StringW message, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response,
                                                      ::System::Net::WebExceptionInternalStatus internalStatus);

  static inline ::System::Net::WebException* New_ctor(::StringW message, ::System::Net::WebExceptionStatus status);

  static inline ::System::Net::WebException* New_ctor(::StringW message, ::System::Net::WebExceptionStatus status, ::System::Net::WebExceptionInternalStatus internalStatus,
                                                      ::System::Exception* innerException);

  static inline ::System::Net::WebException* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x2ed4370, size 0xc, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  constexpr ::System::Net::WebExceptionInternalStatus const& __cordl_internal_get_m_InternalStatus() const;

  constexpr ::System::Net::WebExceptionInternalStatus& __cordl_internal_get_m_InternalStatus();

  constexpr ::System::Net::WebResponse*& __cordl_internal_get_m_Response();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebResponse*> const& __cordl_internal_get_m_Response() const;

  constexpr ::System::Net::WebExceptionStatus const& __cordl_internal_get_m_Status() const;

  constexpr ::System::Net::WebExceptionStatus& __cordl_internal_get_m_Status();

  constexpr void __cordl_internal_set_m_InternalStatus(::System::Net::WebExceptionInternalStatus value);

  constexpr void __cordl_internal_set_m_Response(::System::Net::WebResponse* value);

  constexpr void __cordl_internal_set_m_Status(::System::Net::WebExceptionStatus value);

  /// @brief Method .ctor, addr 0x2ed4128, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2ed2914, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x2ed4190, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW data, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response);

  /// @brief Method .ctor, addr 0x2ed4270, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW data, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response,
                    ::System::Net::WebExceptionInternalStatus internalStatus);

  /// @brief Method .ctor, addr 0x2ed4138, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x2ed4148, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response);

  /// @brief Method .ctor, addr 0x2ed4178, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response,
                    ::System::Net::WebExceptionInternalStatus internalStatus);

  /// @brief Method .ctor, addr 0x2ed2b00, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Net::WebExceptionStatus status);

  /// @brief Method .ctor, addr 0x2ed415c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Net::WebExceptionStatus status, ::System::Net::WebExceptionInternalStatus internalStatus, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x2ed4360, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method get_Response, addr 0x2ed438c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::WebResponse* get_Response();

  /// @brief Method get_Status, addr 0x2ed4384, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::WebExceptionStatus get_Status();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebException(WebException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebException(WebException const&) = delete;

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
