#pragma once
// IWYU pragma private; include "System/Net/Security/AuthenticatedStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
CORDL_MODULE_EXPORT(AuthenticatedStream)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::Net::Security {
class AuthenticatedStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Security::AuthenticatedStream);
// Type: System.Net.Security::AuthenticatedStream
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Security {
// Is value type: false
// CS Name: ::System.Net.Security::AuthenticatedStream*
class CORDL_TYPE AuthenticatedStream : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_InnerStream)) ::System::IO::Stream* InnerStream;

  __declspec(property(get = get_IsAuthenticated)) bool IsAuthenticated;

  /// @brief Field _InnerStream, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__InnerStream, put = __cordl_internal_set__InnerStream)) ::System::IO::Stream* _InnerStream;

  /// @brief Field _LeaveStreamOpen, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__LeaveStreamOpen, put = __cordl_internal_set__LeaveStreamOpen)) bool _LeaveStreamOpen;

  /// @brief Method Dispose, addr 0x43a3678, size 0xe8, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::System::Net::Security::AuthenticatedStream* New_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen);

  constexpr ::System::IO::Stream*& __cordl_internal_get__InnerStream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get__InnerStream() const;

  constexpr bool const& __cordl_internal_get__LeaveStreamOpen() const;

  constexpr bool& __cordl_internal_get__LeaveStreamOpen();

  constexpr void __cordl_internal_set__InnerStream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set__LeaveStreamOpen(bool value);

  /// @brief Method .ctor, addr 0x43a34e0, size 0x190, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen);

  /// @brief Method get_InnerStream, addr 0x43a3670, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::Stream* get_InnerStream();

  /// @brief Method get_IsAuthenticated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsAuthenticated();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticatedStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AuthenticatedStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthenticatedStream(AuthenticatedStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticatedStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthenticatedStream(AuthenticatedStream const&) = delete;

  /// @brief Field _InnerStream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* ____InnerStream;

  /// @brief Field _LeaveStreamOpen, offset: 0x30, size: 0x1, def value: None
  bool ____LeaveStreamOpen;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9864 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Security::AuthenticatedStream, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Net::Security::AuthenticatedStream, ____InnerStream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::AuthenticatedStream, ____LeaveStreamOpen) == 0x30, "Offset mismatch!");

} // namespace System::Net::Security
NEED_NO_BOX(::System::Net::Security::AuthenticatedStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::AuthenticatedStream*, "System.Net.Security", "AuthenticatedStream");
