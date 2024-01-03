#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Security/zzzz__AuthenticatedStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SslStream)
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace Mono::Security::Interface {
class MonoTlsProvider;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Security {
class LocalCertificateSelectionCallback;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace System::Net::Security {
class __SslStream____c__DisplayClass21_0;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Security {
class SslStream;
}
namespace System::Net::Security {
class __SslStream____c__DisplayClass21_0;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Security::SslStream);
MARK_REF_PTR_T(::System::Net::Security::__SslStream____c__DisplayClass21_0);
// Type: ::<>c__DisplayClass21_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9372))
// CS Name: ::SslStream::<>c__DisplayClass21_0*
class CORDL_TYPE __SslStream____c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __get_callback, put = __set_callback))::System::Net::Security::LocalCertificateSelectionCallback* callback;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::System::Net::Security::SslStream* __4__this;

  constexpr ::System::Net::Security::LocalCertificateSelectionCallback*& __get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::LocalCertificateSelectionCallback*> const& __get_callback() const;

  constexpr void __set_callback(::System::Net::Security::LocalCertificateSelectionCallback* value);

  constexpr ::System::Net::Security::SslStream*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::SslStream*> const& __get___4__this() const;

  constexpr void __set___4__this(::System::Net::Security::SslStream* value);

  static inline ::System::Net::Security::__SslStream____c__DisplayClass21_0* New_ctor();

  /// @brief Method .ctor, addr 0x2900368, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SetAndVerifySelectionCallback>b__0, addr 0x2900b34, size 0x38, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* _SetAndVerifySelectionCallback_b__0(::StringW t,
                                                                                                                  ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* lc,
                                                                                                                  ::System::Security::Cryptography::X509Certificates::X509Certificate* rc,
                                                                                                                  ::ArrayW<::StringW, ::Array<::StringW>*> ai);

  // Ctor Parameters [CppParam { name: "", ty: "__SslStream____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SslStream____c__DisplayClass21_0(__SslStream____c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SslStream____c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SslStream____c__DisplayClass21_0(__SslStream____c__DisplayClass21_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SslStream____c__DisplayClass21_0();

public:
  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Security::LocalCertificateSelectionCallback* ___callback;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Security::SslStream* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Security::__SslStream____c__DisplayClass21_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::Security::__SslStream____c__DisplayClass21_0, ___callback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::__SslStream____c__DisplayClass21_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace System::Net::Security
// Type: System.Net.Security::SslStream
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 97, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9364))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9373))
// CS Name: ::System.Net.Security::SslStream*
class CORDL_TYPE SslStream : public ::System::Net::Security::AuthenticatedStream {
public:
  // Declarations
  using __c__DisplayClass21_0 = ::System::Net::Security::__SslStream____c__DisplayClass21_0;

  /// @brief Field provider, offset 0x38, size 0x8
  __declspec(property(get = __get_provider, put = __set_provider))::Mono::Net::Security::MobileTlsProvider* provider;

  /// @brief Field settings, offset 0x40, size 0x8
  __declspec(property(get = __get_settings, put = __set_settings))::Mono::Security::Interface::MonoTlsSettings* settings;

  /// @brief Field validationCallback, offset 0x48, size 0x8
  __declspec(property(get = __get_validationCallback, put = __set_validationCallback))::System::Net::Security::RemoteCertificateValidationCallback* validationCallback;

  /// @brief Field selectionCallback, offset 0x50, size 0x8
  __declspec(property(get = __get_selectionCallback, put = __set_selectionCallback))::System::Net::Security::LocalCertificateSelectionCallback* selectionCallback;

  /// @brief Field impl, offset 0x58, size 0x8
  __declspec(property(get = __get_impl, put = __set_impl))::Mono::Net::Security::MobileAuthenticatedStream* impl;

  /// @brief Field explicitSettings, offset 0x60, size 0x1
  __declspec(property(get = __get_explicitSettings, put = __set_explicitSettings)) bool explicitSettings;

  __declspec(property(get = get_Impl))::Mono::Net::Security::MobileAuthenticatedStream* Impl;

  __declspec(property(get = get_InternalTargetHost))::StringW InternalTargetHost;

  __declspec(property(get = get_IsAuthenticated)) bool IsAuthenticated;

  __declspec(property(get = get_LocalCertificate))::System::Security::Cryptography::X509Certificates::X509Certificate* LocalCertificate;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanTimeout)) bool CanTimeout;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_ReadTimeout, put = set_ReadTimeout)) int32_t ReadTimeout;

  __declspec(property(get = get_WriteTimeout, put = set_WriteTimeout)) int32_t WriteTimeout;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  constexpr ::Mono::Net::Security::MobileTlsProvider*& __get_provider();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::MobileTlsProvider*> const& __get_provider() const;

  constexpr void __set_provider(::Mono::Net::Security::MobileTlsProvider* value);

  constexpr ::Mono::Security::Interface::MonoTlsSettings*& __get_settings();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::MonoTlsSettings*> const& __get_settings() const;

  constexpr void __set_settings(::Mono::Security::Interface::MonoTlsSettings* value);

  constexpr ::System::Net::Security::RemoteCertificateValidationCallback*& __get_validationCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::RemoteCertificateValidationCallback*> const& __get_validationCallback() const;

  constexpr void __set_validationCallback(::System::Net::Security::RemoteCertificateValidationCallback* value);

  constexpr ::System::Net::Security::LocalCertificateSelectionCallback*& __get_selectionCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::LocalCertificateSelectionCallback*> const& __get_selectionCallback() const;

  constexpr void __set_selectionCallback(::System::Net::Security::LocalCertificateSelectionCallback* value);

  constexpr ::Mono::Net::Security::MobileAuthenticatedStream*& __get_impl();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::MobileAuthenticatedStream*> const& __get_impl() const;

  constexpr void __set_impl(::Mono::Net::Security::MobileAuthenticatedStream* value);

  constexpr bool& __get_explicitSettings();

  constexpr bool const& __get_explicitSettings() const;

  constexpr void __set_explicitSettings(bool value);

  /// @brief Method get_Impl, addr 0x28ffe44, size 0x18, virtual false, abstract: false, final false
  inline ::Mono::Net::Security::MobileAuthenticatedStream* get_Impl();

  /// @brief Method get_InternalTargetHost, addr 0x28ffebc, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_InternalTargetHost();

  /// @brief Method GetProvider, addr 0x28ffee0, size 0x70, virtual false, abstract: false, final false
  static inline ::Mono::Net::Security::MobileTlsProvider* GetProvider();

  static inline ::System::Net::Security::SslStream* New_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen,
                                                             ::System::Net::Security::RemoteCertificateValidationCallback* userCertificateValidationCallback);

  /// @brief Method .ctor, addr 0x28fff50, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::System::Net::Security::RemoteCertificateValidationCallback* userCertificateValidationCallback);

  static inline ::System::Net::Security::SslStream* New_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen,
                                                             ::System::Net::Security::RemoteCertificateValidationCallback* userCertificateValidationCallback,
                                                             ::System::Net::Security::LocalCertificateSelectionCallback* userCertificateSelectionCallback);

  /// @brief Method .ctor, addr 0x28fff5c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::System::Net::Security::RemoteCertificateValidationCallback* userCertificateValidationCallback,
                    ::System::Net::Security::LocalCertificateSelectionCallback* userCertificateSelectionCallback);

  static inline ::System::Net::Security::SslStream* New_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::Mono::Security::Interface::MonoTlsProvider* provider,
                                                             ::Mono::Security::Interface::MonoTlsSettings* settings);

  /// @brief Method .ctor, addr 0x2900244, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::Mono::Security::Interface::MonoTlsProvider* provider, ::Mono::Security::Interface::MonoTlsSettings* settings);

  /// @brief Method SetAndVerifyValidationCallback, addr 0x28fffec, size 0xe0, virtual false, abstract: false, final false
  inline void SetAndVerifyValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback* callback);

  /// @brief Method SetAndVerifySelectionCallback, addr 0x29000cc, size 0x178, virtual false, abstract: false, final false
  inline void SetAndVerifySelectionCallback(::System::Net::Security::LocalCertificateSelectionCallback* callback);

  /// @brief Method AuthenticateAsClient, addr 0x2900370, size 0x54, virtual true, abstract: false, final false
  inline void AuthenticateAsClient(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates,
                                   ::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);

  /// @brief Method BeginAuthenticateAsClient, addr 0x29003c4, size 0x74, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginAuthenticateAsClient(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates,
                                                           ::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation,
                                                           ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState);

  /// @brief Method EndAuthenticateAsClient, addr 0x2900438, size 0xc, virtual true, abstract: false, final false
  inline void EndAuthenticateAsClient(::System::IAsyncResult* asyncResult);

  /// @brief Method AuthenticateAsServer, addr 0x2900444, size 0x54, virtual true, abstract: false, final false
  inline void AuthenticateAsServer(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, bool clientCertificateRequired,
                                   ::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);

  /// @brief Method AuthenticateAsClientAsync, addr 0x2900498, size 0x54, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* AuthenticateAsClientAsync(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates,
                                                                     ::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);

  /// @brief Method get_IsAuthenticated, addr 0x29004ec, size 0x2c, virtual true, abstract: false, final false
  inline bool get_IsAuthenticated();

  /// @brief Method get_LocalCertificate, addr 0x2900518, size 0x24, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalCertificate();

  /// @brief Method get_CanSeek, addr 0x290053c, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanRead, addr 0x2900544, size 0x18, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanTimeout, addr 0x290055c, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanTimeout();

  /// @brief Method get_CanWrite, addr 0x290057c, size 0x18, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_ReadTimeout, addr 0x2900594, size 0x2c, virtual true, abstract: false, final false
  inline int32_t get_ReadTimeout();

  /// @brief Method set_ReadTimeout, addr 0x29005c0, size 0x3c, virtual true, abstract: false, final false
  inline void set_ReadTimeout(int32_t value);

  /// @brief Method get_WriteTimeout, addr 0x29005fc, size 0x2c, virtual true, abstract: false, final false
  inline int32_t get_WriteTimeout();

  /// @brief Method set_WriteTimeout, addr 0x2900628, size 0x3c, virtual true, abstract: false, final false
  inline void set_WriteTimeout(int32_t value);

  /// @brief Method get_Length, addr 0x2900664, size 0x28, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x290068c, size 0x2c, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x29006b8, size 0x60, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

  /// @brief Method SetLength, addr 0x2900718, size 0x3c, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method Seek, addr 0x2900754, size 0x60, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method FlushAsync, addr 0x29007b4, size 0x24, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Flush, addr 0x29007d8, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method CheckDisposed, addr 0x28ffe5c, size 0x60, virtual false, abstract: false, final false
  inline void CheckDisposed();

  /// @brief Method Dispose, addr 0x29007fc, size 0xac, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Read, addr 0x29008a8, size 0x54, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Write, addr 0x29008fc, size 0x54, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadAsync, addr 0x2900950, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteAsync, addr 0x29009ac, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method BeginRead, addr 0x2900a08, size 0x6c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method EndRead, addr 0x2900a74, size 0x48, virtual true, abstract: false, final false
  inline int32_t EndRead(::System::IAsyncResult* asyncResult);

  /// @brief Method BeginWrite, addr 0x2900abc, size 0x6c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method EndWrite, addr 0x2900b28, size 0xc, virtual true, abstract: false, final false
  inline void EndWrite(::System::IAsyncResult* asyncResult);

  // Ctor Parameters [CppParam { name: "", ty: "SslStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SslStream(SslStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SslStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SslStream(SslStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SslStream();

public:
  /// @brief Field provider, offset: 0x38, size: 0x8, def value: None
  ::Mono::Net::Security::MobileTlsProvider* ___provider;

  /// @brief Field settings, offset: 0x40, size: 0x8, def value: None
  ::Mono::Security::Interface::MonoTlsSettings* ___settings;

  /// @brief Field validationCallback, offset: 0x48, size: 0x8, def value: None
  ::System::Net::Security::RemoteCertificateValidationCallback* ___validationCallback;

  /// @brief Field selectionCallback, offset: 0x50, size: 0x8, def value: None
  ::System::Net::Security::LocalCertificateSelectionCallback* ___selectionCallback;

  /// @brief Field impl, offset: 0x58, size: 0x8, def value: None
  ::Mono::Net::Security::MobileAuthenticatedStream* ___impl;

  /// @brief Field explicitSettings, offset: 0x60, size: 0x1, def value: None
  bool ___explicitSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Security::SslStream, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Net::Security::SslStream, ___provider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SslStream, ___settings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SslStream, ___validationCallback) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SslStream, ___selectionCallback) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SslStream, ___impl) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SslStream, ___explicitSettings) == 0x60, "Offset mismatch!");

} // namespace System::Net::Security
NEED_NO_BOX(::System::Net::Security::SslStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::SslStream*, "System.Net.Security", "SslStream");
NEED_NO_BOX(::System::Net::Security::__SslStream____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::__SslStream____c__DisplayClass21_0*, "System.Net.Security", "SslStream/<>c__DisplayClass21_0");
