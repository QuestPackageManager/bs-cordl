#pragma once
// IWYU pragma private; include "System/Net/WebException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebExceptionInternalStatus_def.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
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
// Dependencies System.InvalidOperationException, System.Net.WebExceptionInternalStatus, System.Net.WebExceptionStatus, System.Runtime.Serialization.ISerializable
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebException
class CORDL_TYPE WebException : public ::System::InvalidOperationException {
public:
  // Declarations
  __declspec(property(get = get_Response)) ::System::Net::WebResponse* Response;

  __declspec(property(get = get_Status)) ::System::Net::WebExceptionStatus Status;

  /// @brief Field m_InternalStatus, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InternalStatus, put = __cordl_internal_set_m_InternalStatus)) ::System::Net::WebExceptionInternalStatus m_InternalStatus;

  /// @brief Field m_Response, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Response, put = __cordl_internal_set_m_Response)) ::System::Net::WebResponse* m_Response;

  /// @brief Field m_Status, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Status, put = __cordl_internal_set_m_Status)) ::System::Net::WebExceptionStatus m_Status;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method GetObjectData, addr 0x449ddec, size 0x8, virtual true, abstract: false, final false
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

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x449dde0, size 0xc, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  constexpr ::System::Net::WebExceptionInternalStatus const& __cordl_internal_get_m_InternalStatus() const;

  constexpr ::System::Net::WebExceptionInternalStatus& __cordl_internal_get_m_InternalStatus();

  constexpr ::System::Net::WebResponse* const& __cordl_internal_get_m_Response() const;

  constexpr ::System::Net::WebResponse*& __cordl_internal_get_m_Response();

  constexpr ::System::Net::WebExceptionStatus const& __cordl_internal_get_m_Status() const;

  constexpr ::System::Net::WebExceptionStatus& __cordl_internal_get_m_Status();

  constexpr void __cordl_internal_set_m_InternalStatus(::System::Net::WebExceptionInternalStatus value);

  constexpr void __cordl_internal_set_m_Response(::System::Net::WebResponse* value);

  constexpr void __cordl_internal_set_m_Status(::System::Net::WebExceptionStatus value);

  /// @brief Method .ctor, addr 0x449dbbc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x449c74c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x449dc00, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW data, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response);

  /// @brief Method .ctor, addr 0x449dce0, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW data, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response,
                    ::System::Net::WebExceptionInternalStatus internalStatus);

  /// @brief Method .ctor, addr 0x4497460, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x449744c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response);

  /// @brief Method .ctor, addr 0x449dbe8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response,
                    ::System::Net::WebExceptionInternalStatus internalStatus);

  /// @brief Method .ctor, addr 0x4496828, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Net::WebExceptionStatus status);

  /// @brief Method .ctor, addr 0x449dbcc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Net::WebExceptionStatus status, ::System::Net::WebExceptionInternalStatus internalStatus, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x449ddd0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method get_Response, addr 0x449ddfc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::WebResponse* get_Response();

  /// @brief Method get_Status, addr 0x449ddf4, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9606 };

  /// @brief Field m_Status, offset: 0x8c, size: 0x4, def value: None
  ::System::Net::WebExceptionStatus ___m_Status;

  /// @brief Field m_Response, offset: 0x90, size: 0x8, def value: None
  ::System::Net::WebResponse* ___m_Response;

  /// @brief Field m_InternalStatus, offset: 0x98, size: 0x4, def value: None
  ::System::Net::WebExceptionInternalStatus ___m_InternalStatus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebException, ___m_Status) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebException, ___m_Response) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebException, ___m_InternalStatus) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebException, 0xa0>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebException);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebException*, "System.Net", "WebException");
