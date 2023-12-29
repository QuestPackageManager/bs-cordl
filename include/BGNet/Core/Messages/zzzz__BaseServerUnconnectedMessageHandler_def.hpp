#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/Messages/zzzz__ClientKeyExchangeRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedAuthenticateRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__UnconnectedMessageHandler_def.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_1_def.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "GlobalNamespace/zzzz__IDiffieHellmanKeyPair_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseServerUnconnectedMessageHandler)
namespace GlobalNamespace {
class ICertificateEncryptionProvider;
}
namespace BGNet::Core::Messages {
class IUnconnectedAuthenticateRequest;
}
namespace BGNet::Core::Messages {
struct __BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19;
}
namespace BGNet::Core::Messages {
struct __BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace GlobalNamespace {
class IAsyncComputeManager;
}
namespace BGNet::Core::Messages {
class __BaseServerUnconnectedMessageHandler__SigningComputeOperation;
}
namespace BGNet::Core {
class IAnalyticsManager;
}
namespace BGNet::Core::Messages {
class __BaseServerUnconnectedMessageHandler____c;
}
namespace BGNet::Core::Messages {
struct __BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23;
}
namespace BGNet::Core::Messages {
struct __BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24;
}
namespace BGNet::Core::Messages {
class __BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace BGNet::Core::Messages {
struct __UnconnectedMessageHandler__MessageOrigin;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace BGNet::Core::Messages {
class ClientHelloWithCookieRequest;
}
namespace GlobalNamespace {
class IDiffieHellmanKeyPair;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
class IUnconnectedMessageSender;
}
namespace BGNet::Core::Messages {
struct __BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21;
}
namespace System::Net {
class IPEndPoint;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace BGNet::Core::Messages {
class ClientHelloRequest;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace BGNet::Core::Messages {
class ClientKeyExchangeRequest;
}
namespace GlobalNamespace {
class __EncryptionUtility__IEncryptionState;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class BaseServerUnconnectedMessageHandler;
}
namespace BGNet::Core::Messages {
class __BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation;
}
namespace BGNet::Core::Messages {
class __BaseServerUnconnectedMessageHandler__SigningComputeOperation;
}
namespace BGNet::Core::Messages {
class __BaseServerUnconnectedMessageHandler____c;
}
namespace BGNet::Core::Messages {
struct __BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24;
}
namespace BGNet::Core::Messages {
struct __BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23;
}
namespace BGNet::Core::Messages {
struct __BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26;
}
namespace BGNet::Core::Messages {
struct __BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21;
}
namespace BGNet::Core::Messages {
struct __BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler);
MARK_REF_PTR_T(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation);
MARK_REF_PTR_T(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation);
MARK_REF_PTR_T(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c);
MARK_VAL_T(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24);
MARK_VAL_T(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23);
MARK_VAL_T(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26);
MARK_VAL_T(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21);
MARK_VAL_T(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19);
// Type: ::SigningComputeOperation
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12608), inst: 772 }), TypeDefinitionIndex(TypeDefinitionIndex(12608))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12956))
// CS Name: ::BaseServerUnconnectedMessageHandler::SigningComputeOperation*
class CORDL_TYPE __BaseServerUnconnectedMessageHandler__SigningComputeOperation : public ::GlobalNamespace::AsyncComputeOperation_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> {
public:
  // Declarations
  /// @brief Field _clientRandom, offset 0x28, size 0x8
  __declspec(property(get = __get__clientRandom, put = __set__clientRandom))::ArrayW<uint8_t, ::Array<uint8_t>*> _clientRandom;

  /// @brief Field _serverRandom, offset 0x30, size 0x8
  __declspec(property(get = __get__serverRandom, put = __set__serverRandom))::ArrayW<uint8_t, ::Array<uint8_t>*> _serverRandom;

  /// @brief Field _serverKey, offset 0x38, size 0x8
  __declspec(property(get = __get__serverKey, put = __set__serverKey))::ArrayW<uint8_t, ::Array<uint8_t>*> _serverKey;

  /// @brief Field _certificateEncryptionProvider, offset 0x40, size 0x8
  __declspec(property(get = __get__certificateEncryptionProvider, put = __set__certificateEncryptionProvider))::GlobalNamespace::ICertificateEncryptionProvider* _certificateEncryptionProvider;

  /// @brief Field _writer, offset 0x48, size 0x8
  __declspec(property(get = __get__writer, put = __set__writer))::LiteNetLib::Utils::NetDataWriter* _writer;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__clientRandom();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__clientRandom() const;

  constexpr void __set__clientRandom(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__serverRandom();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__serverRandom() const;

  constexpr void __set__serverRandom(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__serverKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__serverKey() const;

  constexpr void __set__serverKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::GlobalNamespace::ICertificateEncryptionProvider*& __get__certificateEncryptionProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICertificateEncryptionProvider*> const& __get__certificateEncryptionProvider() const;

  constexpr void __set__certificateEncryptionProvider(::GlobalNamespace::ICertificateEncryptionProvider* value);

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __get__writer();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& __get__writer() const;

  constexpr void __set__writer(::LiteNetLib::Utils::NetDataWriter* value);

  static inline ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation*
  New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverKey,
           ::GlobalNamespace::ICertificateEncryptionProvider* certificateEncryptionProvider, ::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method .ctor addr 0xde0a7c size 0x88 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverKey,
                    ::GlobalNamespace::ICertificateEncryptionProvider* certificateEncryptionProvider, ::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Compute addr 0xde0b04 size 0xf8 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Compute();

  /// @brief Method Finally addr 0xde0bfc size 0x1c virtual true final false
  inline void Finally();

  // Ctor Parameters [CppParam { name: "", ty: "__BaseServerUnconnectedMessageHandler__SigningComputeOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BaseServerUnconnectedMessageHandler__SigningComputeOperation(__BaseServerUnconnectedMessageHandler__SigningComputeOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BaseServerUnconnectedMessageHandler__SigningComputeOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BaseServerUnconnectedMessageHandler__SigningComputeOperation(__BaseServerUnconnectedMessageHandler__SigningComputeOperation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseServerUnconnectedMessageHandler__SigningComputeOperation();

public:
  /// @brief Field _clientRandom, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____clientRandom;

  /// @brief Field _serverRandom, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____serverRandom;

  /// @brief Field _serverKey, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____serverKey;

  /// @brief Field _certificateEncryptionProvider, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ICertificateEncryptionProvider* ____certificateEncryptionProvider;

  /// @brief Field _writer, offset: 0x48, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____writer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation, 0x50>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation, ____clientRandom) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation, ____serverRandom) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation, ____serverKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation, ____certificateEncryptionProvider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation, ____writer) == 0x48, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::GetPreMasterSecretComputeOperation
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12608)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12608), inst: 772 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12957))
// CS Name: ::BaseServerUnconnectedMessageHandler::GetPreMasterSecretComputeOperation*
class CORDL_TYPE __BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation : public ::GlobalNamespace::AsyncComputeOperation_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> {
public:
  // Declarations
  /// @brief Field _serverKey, offset 0x28, size 0x8
  __declspec(property(get = __get__serverKey, put = __set__serverKey))::GlobalNamespace::IDiffieHellmanKeyPair* _serverKey;

  /// @brief Field _clientKey, offset 0x30, size 0x8
  __declspec(property(get = __get__clientKey, put = __set__clientKey))::ArrayW<uint8_t, ::Array<uint8_t>*> _clientKey;

  constexpr ::GlobalNamespace::IDiffieHellmanKeyPair*& __get__serverKey();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDiffieHellmanKeyPair*> const& __get__serverKey() const;

  constexpr void __set__serverKey(::GlobalNamespace::IDiffieHellmanKeyPair* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__clientKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__clientKey() const;

  constexpr void __set__clientKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation* New_ctor(::GlobalNamespace::IDiffieHellmanKeyPair* serverKey,
                                                                                                                             ::ArrayW<uint8_t, ::Array<uint8_t>*> clientKey);

  /// @brief Method .ctor addr 0xde0c18 size 0x64 virtual false final false
  inline void _ctor(::GlobalNamespace::IDiffieHellmanKeyPair* serverKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientKey);

  /// @brief Method Compute addr 0xde0c7c size 0xac virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Compute();

  // Ctor Parameters [CppParam { name: "", ty: "__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation(__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation(__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation();

public:
  /// @brief Field _serverKey, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IDiffieHellmanKeyPair* ____serverKey;

  /// @brief Field _clientKey, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____clientKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation, 0x38>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation, ____serverKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation, ____clientKey) == 0x30, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12958))
// CS Name: ::BaseServerUnconnectedMessageHandler::<>c*
class CORDL_TYPE __BaseServerUnconnectedMessageHandler____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_0,
                             put = setStaticF___9__12_0))::System::Func_2<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::ArrayW<uint8_t, ::Array<uint8_t>*>>* __9__12_0;

  static inline void setStaticF___9(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c* value);

  static inline ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c* getStaticF___9();

  static inline void setStaticF___9__12_0(::System::Func_2<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::ArrayW<uint8_t, ::Array<uint8_t>*>>* value);

  static inline ::System::Func_2<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::ArrayW<uint8_t, ::Array<uint8_t>*>>* getStaticF___9__12_0();

  static inline ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c* New_ctor();

  /// @brief Method .ctor addr 0xde0d8c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <.ctor>b__12_0 addr 0xde0d94 size 0x24 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> __ctor_b__12_0(::System::Security::Cryptography::X509Certificates::X509Certificate2* cert);

  // Ctor Parameters [CppParam { name: "", ty: "__BaseServerUnconnectedMessageHandler____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BaseServerUnconnectedMessageHandler____c(__BaseServerUnconnectedMessageHandler____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BaseServerUnconnectedMessageHandler____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BaseServerUnconnectedMessageHandler____c(__BaseServerUnconnectedMessageHandler____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseServerUnconnectedMessageHandler____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c, 0x10>, "Size mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::<StartServerAuthenticationFlow>d__19
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3388)), TypeDefinitionIndex(TypeDefinitionIndex(3395))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12959))
// CS Name: ::BaseServerUnconnectedMessageHandler::<StartServerAuthenticationFlow>d__19
struct CORDL_TYPE __BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xde0db8 size 0x2a8 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xde1060 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*",
  // modifiers: "", def_value: None }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "endPoint", ty: "::System::Net::IPEndPoint*", modifiers:
  // "", def_value: None }, CppParam { name: "requestId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "certificateResponseId", ty: "uint32_t", modifiers: "", def_value: None },
  // CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr __BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                        ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* __4__this, uint32_t protocolVersion,
                                                                                        ::System::Net::IPEndPoint* endPoint, uint32_t requestId, uint32_t certificateResponseId,
                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom,
                                                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* __4__this;

  /// @brief Field protocolVersion, offset: 0x30, size: 0x4, def value: None
  uint32_t protocolVersion;

  /// @brief Field endPoint, offset: 0x38, size: 0x8, def value: None
  ::System::Net::IPEndPoint* endPoint;

  /// @brief Field requestId, offset: 0x40, size: 0x4, def value: None
  uint32_t requestId;

  /// @brief Field certificateResponseId, offset: 0x44, size: 0x4, def value: None
  uint32_t certificateResponseId;

  /// @brief Field clientRandom, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19, 0x58>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19, protocolVersion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19, endPoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19, requestId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19, certificateResponseId) == 0x44, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19, clientRandom) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19, __u__1) == 0x50, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::<StartServerAuthenticationFlowAsync>d__21
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 890 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 4700 }),
// TypeDefinitionIndex(TypeDefinitionIndex(12651)), TypeDefinitionIndex(TypeDefinitionIndex(12985)), TypeDefinitionIndex(TypeDefinitionIndex(3388)), TypeDefinitionIndex(TypeDefinitionIndex(3389)),
// TypeDefinitionIndex(TypeDefinitionIndex(3396)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 772 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3389), inst: 4955 }), TypeDefinitionIndex(TypeDefinitionIndex(12975))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12960)) CS Name:
// ::BaseServerUnconnectedMessageHandler::<StartServerAuthenticationFlowAsync>d__21
struct CORDL_TYPE __BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xde106c size 0xac8 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xde2080 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*",
  // modifiers: "", def_value: None }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "protocolVersion", ty: "uint32_t",
  // modifiers: "", def_value: None }, CppParam { name: "endPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: None }, CppParam { name: "certificateResponseId", ty: "uint32_t",
  // modifiers: "", def_value: None }, CppParam { name: "requestId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_serverRandom_5__2", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>",
  // modifiers: "", def_value: None }, CppParam { name: "_serverKeys_5__3", ty: "::GlobalNamespace::IDiffieHellmanKeyPair*", modifiers: "", def_value: None }, CppParam { name: "_responseId_5__4", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_encryptionState_5__5", ty: "::GlobalNamespace::__EncryptionUtility__IEncryptionState*", modifiers: "", def_value: None }, CppParam
  // { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::ClientKeyExchangeRequest*>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>", modifiers: "", def_value: None }, CppParam { name: "__u__4", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*>", modifiers: "", def_value: None }, CppParam { name: "__u__5", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* __4__this,
      ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom, uint32_t protocolVersion, ::System::Net::IPEndPoint* endPoint, uint32_t certificateResponseId, uint32_t requestId,
      ::ArrayW<uint8_t, ::Array<uint8_t>*> _serverRandom_5__2, ::GlobalNamespace::IDiffieHellmanKeyPair* _serverKeys_5__3, uint32_t _responseId_5__4,
      ::GlobalNamespace::__EncryptionUtility__IEncryptionState* _encryptionState_5__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::ClientKeyExchangeRequest*> __u__2,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> __u__3,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*> __u__4, ::System::Runtime::CompilerServices::TaskAwaiter __u__5) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* __4__this;

  /// @brief Field clientRandom, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom;

  /// @brief Field protocolVersion, offset: 0x30, size: 0x4, def value: None
  uint32_t protocolVersion;

  /// @brief Field endPoint, offset: 0x38, size: 0x8, def value: None
  ::System::Net::IPEndPoint* endPoint;

  /// @brief Field certificateResponseId, offset: 0x40, size: 0x4, def value: None
  uint32_t certificateResponseId;

  /// @brief Field requestId, offset: 0x44, size: 0x4, def value: None
  uint32_t requestId;

  /// @brief Field <serverRandom>5__2, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _serverRandom_5__2;

  /// @brief Field <serverKeys>5__3, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IDiffieHellmanKeyPair* _serverKeys_5__3;

  /// @brief Field <responseId>5__4, offset: 0x58, size: 0x4, def value: None
  uint32_t _responseId_5__4;

  /// @brief Field <encryptionState>5__5, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::__EncryptionUtility__IEncryptionState* _encryptionState_5__5;

  /// @brief Field <>u__1, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1;

  /// @brief Field <>u__2, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::ClientKeyExchangeRequest*> __u__2;

  /// @brief Field <>u__3, offset: 0x78, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> __u__3;

  /// @brief Field <>u__4, offset: 0x80, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*> __u__4;

  /// @brief Field <>u__5, offset: 0x88, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__5;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21, 0x90>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21, clientRandom) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21, protocolVersion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21, endPoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21, certificateResponseId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21, requestId) == 0x44, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21, _serverRandom_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21, _serverKeys_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21, _responseId_5__4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21, _encryptionState_5__5) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21, __u__1) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21, __u__2) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21, __u__3) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21, __u__4) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21, __u__5) == 0x88, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::<GetSignatureAsync>d__23
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 772 }), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(3389), inst: 772 }), TypeDefinitionIndex(TypeDefinitionIndex(3389))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12961)) CS Name:
// ::BaseServerUnconnectedMessageHandler::<GetSignatureAsync>d__23
struct CORDL_TYPE __BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xde208c size 0x3fc virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xde2488 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }, CppParam { name: "clientRandom", ty:
  // "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "serverRandom", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam {
  // name: "serverKey", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*",
  // modifiers: "", def_value: None }, CppParam { name: "_signingRequest_5__2", ty: "::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }]
  constexpr __BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23(int32_t __1__state,
                                                                            ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __t__builder,
                                                                            ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom,
                                                                            ::ArrayW<uint8_t, ::Array<uint8_t>*> serverKey, ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* __4__this,
                                                                            ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation* _signingRequest_5__2,
                                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __t__builder;

  /// @brief Field clientRandom, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom;

  /// @brief Field serverRandom, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom;

  /// @brief Field serverKey, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> serverKey;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* __4__this;

  /// @brief Field <signingRequest>5__2, offset: 0x40, size: 0x8, def value: None
  ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation* _signingRequest_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23, 0x50>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23, clientRandom) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23, serverRandom) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23, serverKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23, _signingRequest_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23, __u__1) == 0x48, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::<GetPreMasterSecretAsync>d__24
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 772 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 772 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(12962)) CS
// Name: ::BaseServerUnconnectedMessageHandler::<GetPreMasterSecretAsync>d__24
struct CORDL_TYPE __BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xde24e0 size 0x3c4 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xde28a4 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }, CppParam { name: "serverKeys", ty:
  // "::GlobalNamespace::IDiffieHellmanKeyPair*", modifiers: "", def_value: None }, CppParam { name: "clientKey", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam
  // { name: "__4__this", ty: "::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*", modifiers: "", def_value: None }, CppParam { name: "_preMasterSecretRequest_5__2", ty:
  // "::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }]
  constexpr __BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __t__builder, ::GlobalNamespace::IDiffieHellmanKeyPair* serverKeys,
      ::ArrayW<uint8_t, ::Array<uint8_t>*> clientKey, ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* __4__this,
      ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation* _preMasterSecretRequest_5__2,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __t__builder;

  /// @brief Field serverKeys, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IDiffieHellmanKeyPair* serverKeys;

  /// @brief Field clientKey, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> clientKey;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* __4__this;

  /// @brief Field <preMasterSecretRequest>5__2, offset: 0x38, size: 0x8, def value: None
  ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation* _preMasterSecretRequest_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24, 0x48>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24, serverKeys) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24, clientKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24, _preMasterSecretRequest_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24, __u__1) == 0x40, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::<RotateServerKeysAsync>d__26
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 4954 }), TypeDefinitionIndex(TypeDefinitionIndex(3396)),
// TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(12639))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12963)) CS Name:
// ::BaseServerUnconnectedMessageHandler::<RotateServerKeysAsync>d__26
struct CORDL_TYPE __BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xde28fc size 0x2c0 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xde2bbc size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IDiffieHellmanKeyPair*>", modifiers: "", def_value: None }]
  constexpr __BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* __4__this,
                                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IDiffieHellmanKeyPair*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IDiffieHellmanKeyPair*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26, 0x30>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26, __u__1) == 0x28, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: BGNet.Core.Messages::BaseServerUnconnectedMessageHandler
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13009))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12964))
// CS Name: ::BGNet.Core.Messages::BaseServerUnconnectedMessageHandler*
class CORDL_TYPE BaseServerUnconnectedMessageHandler : public ::BGNet::Core::Messages::UnconnectedMessageHandler {
public:
  // Declarations
  using _RotateServerKeysAsync_d__26 = ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26;

  using _GetPreMasterSecretAsync_d__24 = ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24;

  using _GetSignatureAsync_d__23 = ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23;

  using _StartServerAuthenticationFlowAsync_d__21 = ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21;

  using _StartServerAuthenticationFlow_d__19 = ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19;

  using __c = ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c;

  using GetPreMasterSecretComputeOperation = ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation;

  using SigningComputeOperation = ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation;

  /// @brief Field _certificateEncryptionProvider, offset 0x88, size 0x8
  __declspec(property(get = __get__certificateEncryptionProvider, put = __set__certificateEncryptionProvider))::GlobalNamespace::ICertificateEncryptionProvider* _certificateEncryptionProvider;

  /// @brief Field _certificateChain, offset 0x90, size 0x8
  __declspec(property(get = __get__certificateChain, put = __set__certificateChain))::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> _certificateChain;

  /// @brief Field _cookieWriter, offset 0x98, size 0x8
  __declspec(property(get = __get__cookieWriter, put = __set__cookieWriter))::LiteNetLib::Utils::NetDataWriter* _cookieWriter;

  /// @brief Field _signatureWriter, offset 0xa0, size 0x8
  __declspec(property(get = __get__signatureWriter, put = __set__signatureWriter))::LiteNetLib::Utils::NetDataWriter* _signatureWriter;

  /// @brief Field _asyncCompute, offset 0xa8, size 0x8
  __declspec(property(get = __get__asyncCompute, put = __set__asyncCompute))::GlobalNamespace::IAsyncComputeManager* _asyncCompute;

  /// @brief Field _lastServerKeyPairRequestTime, offset 0xb0, size 0x8
  __declspec(property(get = __get__lastServerKeyPairRequestTime, put = __set__lastServerKeyPairRequestTime)) int64_t _lastServerKeyPairRequestTime;

  /// @brief Field _serverKeys, offset 0xb8, size 0x8
  __declspec(property(get = __get__serverKeys, put = __set__serverKeys))::GlobalNamespace::IDiffieHellmanKeyPair* _serverKeys;

  /// @brief Field _serverKeyRotationTask, offset 0xc0, size 0x8
  __declspec(property(get = __get__serverKeyRotationTask, put = __set__serverKeyRotationTask))::System::Threading::Tasks::Task* _serverKeyRotationTask;

  /// @brief Field _hmacKey, offset 0xc8, size 0x8
  __declspec(property(get = __get__hmacKey, put = __set__hmacKey))::ArrayW<uint8_t, ::Array<uint8_t>*> _hmacKey;

  constexpr ::GlobalNamespace::ICertificateEncryptionProvider*& __get__certificateEncryptionProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICertificateEncryptionProvider*> const& __get__certificateEncryptionProvider() const;

  constexpr void __set__certificateEncryptionProvider(::GlobalNamespace::ICertificateEncryptionProvider* value);

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>& __get__certificateChain();

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& __get__certificateChain() const;

  constexpr void __set__certificateChain(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value);

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __get__cookieWriter();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& __get__cookieWriter() const;

  constexpr void __set__cookieWriter(::LiteNetLib::Utils::NetDataWriter* value);

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __get__signatureWriter();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& __get__signatureWriter() const;

  constexpr void __set__signatureWriter(::LiteNetLib::Utils::NetDataWriter* value);

  constexpr ::GlobalNamespace::IAsyncComputeManager*& __get__asyncCompute();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAsyncComputeManager*> const& __get__asyncCompute() const;

  constexpr void __set__asyncCompute(::GlobalNamespace::IAsyncComputeManager* value);

  constexpr int64_t& __get__lastServerKeyPairRequestTime();

  constexpr int64_t const& __get__lastServerKeyPairRequestTime() const;

  constexpr void __set__lastServerKeyPairRequestTime(int64_t value);

  constexpr ::GlobalNamespace::IDiffieHellmanKeyPair*& __get__serverKeys();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDiffieHellmanKeyPair*> const& __get__serverKeys() const;

  constexpr void __set__serverKeys(::GlobalNamespace::IDiffieHellmanKeyPair* value);

  constexpr ::System::Threading::Tasks::Task*& __get__serverKeyRotationTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __get__serverKeyRotationTask() const;

  constexpr void __set__serverKeyRotationTask(::System::Threading::Tasks::Task* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__hmacKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__hmacKey() const;

  constexpr void __set__hmacKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*
  New_ctor(::GlobalNamespace::IUnconnectedMessageSender* sender, ::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
           ::GlobalNamespace::IAsyncComputeManager* asyncCompute, ::BGNet::Core::IAnalyticsManager* analytics, ::GlobalNamespace::ICertificateEncryptionProvider* certificateEncryptionProvider,
           ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* certificateList);

  /// @brief Method .ctor addr 0xdde8c8 size 0x2f4 virtual false final false
  inline void _ctor(::GlobalNamespace::IUnconnectedMessageSender* sender, ::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                    ::GlobalNamespace::IAsyncComputeManager* asyncCompute, ::BGNet::Core::IAnalyticsManager* analytics,
                    ::GlobalNamespace::ICertificateEncryptionProvider* certificateEncryptionProvider,
                    ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* certificateList);

  /// @brief Method PollUpdate addr 0xddf948 size 0x18 virtual true final false
  inline void PollUpdate();

  /// @brief Method GetMessageType addr 0xddfb30 size 0x60 virtual true final false
  inline uint32_t GetMessageType(::BGNet::Core::Messages::IUnconnectedMessage* message);

  /// @brief Method ShouldHandleMessage addr 0xddfbf8 size 0x124 virtual true final false
  inline bool ShouldHandleMessage(::BGNet::Core::Messages::IUnconnectedMessage* packet, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin);

  /// @brief Method RegisterHandshakeMessageHandlers addr 0xddef5c size 0x928 virtual false final false
  inline void RegisterHandshakeMessageHandlers();

  /// @brief Method HandleClientHelloRequest addr 0xde01ac size 0xec virtual false final false
  inline void HandleClientHelloRequest(::BGNet::Core::Messages::ClientHelloRequest* packet, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin);

  /// @brief Method HandleClientHelloWithCookieRequest addr 0xde04b8 size 0x74 virtual false final false
  inline void HandleClientHelloWithCookieRequest(::BGNet::Core::Messages::ClientHelloWithCookieRequest* packet, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin);

  /// @brief Method StartServerAuthenticationFlow addr 0xde052c size 0xd4 virtual false final false
  inline void StartServerAuthenticationFlow(uint32_t protocolVersion, ::System::Net::IPEndPoint* endPoint, uint32_t requestId, uint32_t certificateResponseId,
                                            ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom);

  /// @brief Method VerifyAuthenticationRequest addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task* VerifyAuthenticationRequest(uint32_t protocolVersion, ::System::Net::IPEndPoint* endPoint,
                                                                       ::BGNet::Core::Messages::IUnconnectedAuthenticateRequest* authenticateRequest);

  /// @brief Method StartServerAuthenticationFlowAsync addr 0xde0600 size 0x110 virtual false final false
  inline ::System::Threading::Tasks::Task* StartServerAuthenticationFlowAsync(uint32_t protocolVersion, ::System::Net::IPEndPoint* endPoint, uint32_t requestId, uint32_t certificateResponseId,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom);

  /// @brief Method GetCookie addr 0xddfd70 size 0x29c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetCookie(::System::Net::IPEndPoint* endPoint, ::ArrayW<uint8_t, ::Array<uint8_t>*> random);

  /// @brief Method GetSignatureAsync addr 0xde0710 size 0x110 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* GetSignatureAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom,
                                                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverKey);

  /// @brief Method GetPreMasterSecretAsync addr 0xde0820 size 0x108 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* GetPreMasterSecretAsync(::GlobalNamespace::IDiffieHellmanKeyPair* serverKeys,
                                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> clientKey);

  /// @brief Method RotateServerKeys addr 0xddfa0c size 0x124 virtual false final false
  inline void RotateServerKeys();

  /// @brief Method RotateServerKeysAsync addr 0xde0928 size 0xc8 virtual false final false
  inline ::System::Threading::Tasks::Task* RotateServerKeysAsync();

  /// @brief Method HandshakeLog addr 0xde09f0 size 0x8c virtual false final false
  inline void HandshakeLog(::StringW message);

  // Ctor Parameters [CppParam { name: "", ty: "BaseServerUnconnectedMessageHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseServerUnconnectedMessageHandler(BaseServerUnconnectedMessageHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseServerUnconnectedMessageHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseServerUnconnectedMessageHandler(BaseServerUnconnectedMessageHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseServerUnconnectedMessageHandler();

public:
  /// @brief Field _certificateEncryptionProvider, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::ICertificateEncryptionProvider* ____certificateEncryptionProvider;

  /// @brief Field _certificateChain, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> ____certificateChain;

  /// @brief Field _cookieWriter, offset: 0x98, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____cookieWriter;

  /// @brief Field _signatureWriter, offset: 0xa0, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____signatureWriter;

  /// @brief Field _asyncCompute, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::IAsyncComputeManager* ____asyncCompute;

  /// @brief Field _lastServerKeyPairRequestTime, offset: 0xb0, size: 0x8, def value: None
  int64_t ____lastServerKeyPairRequestTime;

  /// @brief Field _serverKeys, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::IDiffieHellmanKeyPair* ____serverKeys;

  /// @brief Field _serverKeyRotationTask, offset: 0xc0, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____serverKeyRotationTask;

  /// @brief Field _hmacKey, offset: 0xc8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____hmacKey;

  /// @brief Field kServerKeyExpirationLength offset 0xffffffff size 0x8
  static constexpr int64_t kServerKeyExpirationLength{ static_cast<int64_t>(0xb2d05e00) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, 0xd0>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, ____certificateEncryptionProvider) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, ____certificateChain) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, ____cookieWriter) == 0x98, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, ____signatureWriter) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, ____asyncCompute) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, ____lastServerKeyPairRequestTime) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, ____serverKeys) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, ____serverKeyRotationTask) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, ____hmacKey) == 0xc8, "Offset mismatch!");

} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*, "BGNet.Core.Messages", "BaseServerUnconnectedMessageHandler");
NEED_NO_BOX(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation*, "BGNet.Core.Messages",
                       "BaseServerUnconnectedMessageHandler/GetPreMasterSecretComputeOperation");
NEED_NO_BOX(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation*, "BGNet.Core.Messages", "BaseServerUnconnectedMessageHandler/SigningComputeOperation");
NEED_NO_BOX(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c*, "BGNet.Core.Messages", "BaseServerUnconnectedMessageHandler/<>c");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24, "BGNet.Core.Messages",
                       "BaseServerUnconnectedMessageHandler/<GetPreMasterSecretAsync>d__24");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23, "BGNet.Core.Messages", "BaseServerUnconnectedMessageHandler/<GetSignatureAsync>d__23");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26, "BGNet.Core.Messages",
                       "BaseServerUnconnectedMessageHandler/<RotateServerKeysAsync>d__26");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21, "BGNet.Core.Messages",
                       "BaseServerUnconnectedMessageHandler/<StartServerAuthenticationFlowAsync>d__21");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19, "BGNet.Core.Messages",
                       "BaseServerUnconnectedMessageHandler/<StartServerAuthenticationFlow>d__19");
