#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__CommandStream_def.hpp"
#include "System/Net/zzzz__NetworkStreamWrapper_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CommandStream)
namespace System::Net {
struct __CommandStream__PipelineEntryFlags;
}
namespace System::Text {
class Decoder;
}
namespace System::Net {
class __CommandStream__PipelineEntry;
}
namespace System::Net {
class WebRequest;
}
namespace System::Text {
class Encoding;
}
namespace System::Net {
struct FtpStatusCode;
}
namespace System::Net {
struct WebExceptionStatus;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System::Net {
struct __CommandStream__PipelineInstruction;
}
namespace System::Net::Sockets {
class TcpClient;
}
namespace System::Net {
class ResponseDescription;
}
namespace System {
class Exception;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class ReceiveState;
}
// Forward declare root types
namespace System::Net {
struct __CommandStream__PipelineEntryFlags;
}
namespace System::Net {
struct __CommandStream__PipelineInstruction;
}
namespace System::Net {
class CommandStream;
}
namespace System::Net {
class __CommandStream__PipelineEntry;
}
// Write type traits
MARK_VAL_T(::System::Net::__CommandStream__PipelineEntryFlags);
MARK_VAL_T(::System::Net::__CommandStream__PipelineInstruction);
MARK_REF_PTR_T(::System::Net::CommandStream);
MARK_REF_PTR_T(::System::Net::__CommandStream__PipelineEntry);
// Type: ::PipelineInstruction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7870))
// CS Name: ::CommandStream::PipelineInstruction
struct CORDL_TYPE __CommandStream__PipelineInstruction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____CommandStream__PipelineInstruction_Unwrapped
  enum struct ____CommandStream__PipelineInstruction_Unwrapped : int32_t {
    __E_Abort = static_cast<int32_t>(0x0),
    __E_Advance = static_cast<int32_t>(0x1),
    __E_Pause = static_cast<int32_t>(0x2),
    __E_Reread = static_cast<int32_t>(0x3),
    __E_GiveStream = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____CommandStream__PipelineInstruction_Unwrapped() const noexcept {
    return static_cast<____CommandStream__PipelineInstruction_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __CommandStream__PipelineInstruction(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CommandStream__PipelineInstruction();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Abort value: static_cast<int32_t>(0x0)
  static ::System::Net::__CommandStream__PipelineInstruction const Abort;

  /// @brief Field Advance value: static_cast<int32_t>(0x1)
  static ::System::Net::__CommandStream__PipelineInstruction const Advance;

  /// @brief Field Pause value: static_cast<int32_t>(0x2)
  static ::System::Net::__CommandStream__PipelineInstruction const Pause;

  /// @brief Field Reread value: static_cast<int32_t>(0x3)
  static ::System::Net::__CommandStream__PipelineInstruction const Reread;

  /// @brief Field GiveStream value: static_cast<int32_t>(0x4)
  static ::System::Net::__CommandStream__PipelineInstruction const GiveStream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__CommandStream__PipelineInstruction, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::__CommandStream__PipelineInstruction, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net
// Type: ::PipelineEntryFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7871))
// CS Name: ::CommandStream::PipelineEntryFlags
struct CORDL_TYPE __CommandStream__PipelineEntryFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____CommandStream__PipelineEntryFlags_Unwrapped
  enum struct ____CommandStream__PipelineEntryFlags_Unwrapped : int32_t {
    __E_UserCommand = static_cast<int32_t>(0x1),
    __E_GiveDataStream = static_cast<int32_t>(0x2),
    __E_CreateDataConnection = static_cast<int32_t>(0x4),
    __E_DontLogParameter = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____CommandStream__PipelineEntryFlags_Unwrapped() const noexcept {
    return static_cast<____CommandStream__PipelineEntryFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __CommandStream__PipelineEntryFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CommandStream__PipelineEntryFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field UserCommand value: static_cast<int32_t>(0x1)
  static ::System::Net::__CommandStream__PipelineEntryFlags const UserCommand;

  /// @brief Field GiveDataStream value: static_cast<int32_t>(0x2)
  static ::System::Net::__CommandStream__PipelineEntryFlags const GiveDataStream;

  /// @brief Field CreateDataConnection value: static_cast<int32_t>(0x4)
  static ::System::Net::__CommandStream__PipelineEntryFlags const CreateDataConnection;

  /// @brief Field DontLogParameter value: static_cast<int32_t>(0x8)
  static ::System::Net::__CommandStream__PipelineEntryFlags const DontLogParameter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__CommandStream__PipelineEntryFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::__CommandStream__PipelineEntryFlags, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net
// Type: ::PipelineEntry
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7871)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7872))
// CS Name: ::CommandStream::PipelineEntry*
class CORDL_TYPE __CommandStream__PipelineEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field Command, offset 0x10, size 0x8
  __declspec(property(get = __get_Command, put = __set_Command))::StringW Command;

  /// @brief Field Flags, offset 0x18, size 0x4
  __declspec(property(get = __get_Flags, put = __set_Flags))::System::Net::__CommandStream__PipelineEntryFlags Flags;

  constexpr ::StringW& __get_Command();

  constexpr ::StringW const& __get_Command() const;

  constexpr void __set_Command(::StringW value);

  constexpr ::System::Net::__CommandStream__PipelineEntryFlags& __get_Flags();

  constexpr ::System::Net::__CommandStream__PipelineEntryFlags const& __get_Flags() const;

  constexpr void __set_Flags(::System::Net::__CommandStream__PipelineEntryFlags value);

  static inline ::System::Net::__CommandStream__PipelineEntry* New_ctor(::StringW command);

  /// @brief Method .ctor addr 0x2811340 size 0x28 virtual false final false
  inline void _ctor(::StringW command);

  static inline ::System::Net::__CommandStream__PipelineEntry* New_ctor(::StringW command, ::System::Net::__CommandStream__PipelineEntryFlags flags);

  /// @brief Method .ctor addr 0x2811368 size 0x30 virtual false final false
  inline void _ctor(::StringW command, ::System::Net::__CommandStream__PipelineEntryFlags flags);

  /// @brief Method HasFlag addr 0x2810004 size 0x10 virtual false final false
  inline bool HasFlag(::System::Net::__CommandStream__PipelineEntryFlags flags);

  // Ctor Parameters [CppParam { name: "", ty: "__CommandStream__PipelineEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CommandStream__PipelineEntry(__CommandStream__PipelineEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CommandStream__PipelineEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CommandStream__PipelineEntry(__CommandStream__PipelineEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CommandStream__PipelineEntry();

public:
  /// @brief Field Command, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Command;

  /// @brief Field Flags, offset: 0x18, size: 0x4, def value: None
  ::System::Net::__CommandStream__PipelineEntryFlags ___Flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__CommandStream__PipelineEntry, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::__CommandStream__PipelineEntry, ___Command) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::__CommandStream__PipelineEntry, ___Flags) == 0x18, "Offset mismatch!");

} // namespace System::Net
// Type: System.Net::CommandStream
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7891))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7873))
// CS Name: ::System.Net::CommandStream*
class CORDL_TYPE CommandStream : public ::System::Net::NetworkStreamWrapper {
public:
  // Declarations
  using PipelineEntry = ::System::Net::__CommandStream__PipelineEntry;

  using PipelineEntryFlags = ::System::Net::__CommandStream__PipelineEntryFlags;

  using PipelineInstruction = ::System::Net::__CommandStream__PipelineInstruction;

  /// @brief Field _recoverableFailure, offset 0x38, size 0x1
  __declspec(property(get = __get__recoverableFailure, put = __set__recoverableFailure)) bool _recoverableFailure;

  /// @brief Field _request, offset 0x40, size 0x8
  __declspec(property(get = __get__request, put = __set__request))::System::Net::WebRequest* _request;

  /// @brief Field _isAsync, offset 0x48, size 0x1
  __declspec(property(get = __get__isAsync, put = __set__isAsync)) bool _isAsync;

  /// @brief Field _aborted, offset 0x49, size 0x1
  __declspec(property(get = __get__aborted, put = __set__aborted)) bool _aborted;

  /// @brief Field _commands, offset 0x50, size 0x8
  __declspec(property(get = __get__commands, put = __set__commands))::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*> _commands;

  /// @brief Field _index, offset 0x58, size 0x4
  __declspec(property(get = __get__index, put = __set__index)) int32_t _index;

  /// @brief Field _doRead, offset 0x5c, size 0x1
  __declspec(property(get = __get__doRead, put = __set__doRead)) bool _doRead;

  /// @brief Field _doSend, offset 0x5d, size 0x1
  __declspec(property(get = __get__doSend, put = __set__doSend)) bool _doSend;

  /// @brief Field _currentResponseDescription, offset 0x60, size 0x8
  __declspec(property(get = __get__currentResponseDescription, put = __set__currentResponseDescription))::System::Net::ResponseDescription* _currentResponseDescription;

  /// @brief Field _abortReason, offset 0x68, size 0x8
  __declspec(property(get = __get__abortReason, put = __set__abortReason))::StringW _abortReason;

  /// @brief Field _buffer, offset 0x70, size 0x8
  __declspec(property(get = __get__buffer, put = __set__buffer))::StringW _buffer;

  /// @brief Field _encoding, offset 0x78, size 0x8
  __declspec(property(get = __get__encoding, put = __set__encoding))::System::Text::Encoding* _encoding;

  /// @brief Field _decoder, offset 0x80, size 0x8
  __declspec(property(get = __get__decoder, put = __set__decoder))::System::Text::Decoder* _decoder;

  /// @brief Field s_writeCallbackDelegate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_writeCallbackDelegate, put = setStaticF_s_writeCallbackDelegate))::System::AsyncCallback* s_writeCallbackDelegate;

  /// @brief Field s_readCallbackDelegate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_readCallbackDelegate, put = setStaticF_s_readCallbackDelegate))::System::AsyncCallback* s_readCallbackDelegate;

  __declspec(property(get = get_RecoverableFailure)) bool RecoverableFailure;

  __declspec(property(get = get_Encoding, put = set_Encoding))::System::Text::Encoding* Encoding;

  constexpr bool& __get__recoverableFailure();

  constexpr bool const& __get__recoverableFailure() const;

  constexpr void __set__recoverableFailure(bool value);

  constexpr ::System::Net::WebRequest*& __get__request();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequest*> const& __get__request() const;

  constexpr void __set__request(::System::Net::WebRequest* value);

  constexpr bool& __get__isAsync();

  constexpr bool const& __get__isAsync() const;

  constexpr void __set__isAsync(bool value);

  constexpr bool& __get__aborted();

  constexpr bool const& __get__aborted() const;

  constexpr void __set__aborted(bool value);

  constexpr ::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*>& __get__commands();

  constexpr ::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*> const& __get__commands() const;

  constexpr void __set__commands(::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*> value);

  constexpr int32_t& __get__index();

  constexpr int32_t const& __get__index() const;

  constexpr void __set__index(int32_t value);

  constexpr bool& __get__doRead();

  constexpr bool const& __get__doRead() const;

  constexpr void __set__doRead(bool value);

  constexpr bool& __get__doSend();

  constexpr bool const& __get__doSend() const;

  constexpr void __set__doSend(bool value);

  constexpr ::System::Net::ResponseDescription*& __get__currentResponseDescription();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ResponseDescription*> const& __get__currentResponseDescription() const;

  constexpr void __set__currentResponseDescription(::System::Net::ResponseDescription* value);

  constexpr ::StringW& __get__abortReason();

  constexpr ::StringW const& __get__abortReason() const;

  constexpr void __set__abortReason(::StringW value);

  constexpr ::StringW& __get__buffer();

  constexpr ::StringW const& __get__buffer() const;

  constexpr void __set__buffer(::StringW value);

  constexpr ::System::Text::Encoding*& __get__encoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __get__encoding() const;

  constexpr void __set__encoding(::System::Text::Encoding* value);

  constexpr ::System::Text::Decoder*& __get__decoder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Decoder*> const& __get__decoder() const;

  constexpr void __set__decoder(::System::Text::Decoder* value);

  static inline void setStaticF_s_writeCallbackDelegate(::System::AsyncCallback* value);

  static inline ::System::AsyncCallback* getStaticF_s_writeCallbackDelegate();

  static inline void setStaticF_s_readCallbackDelegate(::System::AsyncCallback* value);

  static inline ::System::AsyncCallback* getStaticF_s_readCallbackDelegate();

  static inline ::System::Net::CommandStream* New_ctor(::System::Net::Sockets::TcpClient* client);

  /// @brief Method .ctor addr 0x280f394 size 0x94 virtual false final false
  inline void _ctor(::System::Net::Sockets::TcpClient* client);

  /// @brief Method Abort addr 0x280f4ac size 0x1f8 virtual true final false
  inline void Abort(::System::Exception* e);

  /// @brief Method Dispose addr 0x280f6d4 size 0x94 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method InvokeRequestCallback addr 0x280f768 size 0x70 virtual false final false
  inline void InvokeRequestCallback(::System::Object* obj);

  /// @brief Method get_RecoverableFailure addr 0x280f7e8 size 0x8 virtual false final false
  inline bool get_RecoverableFailure();

  /// @brief Method MarkAsRecoverableFailure addr 0x280f7f0 size 0x18 virtual false final false
  inline void MarkAsRecoverableFailure();

  /// @brief Method SubmitRequest addr 0x280f808 size 0x80 virtual false final false
  inline ::System::IO::Stream* SubmitRequest(::System::Net::WebRequest* request, bool isAsync, bool readInitalResponseOnConnect);

  /// @brief Method ClearState addr 0x280fdf0 size 0x10 virtual true final false
  inline void ClearState();

  /// @brief Method BuildCommandsList addr 0x280fe00 size 0x8 virtual true final false
  inline ::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*> BuildCommandsList(::System::Net::WebRequest* request);

  /// @brief Method GenerateException addr 0x280fe08 size 0x80 virtual false final false
  inline ::System::Exception* GenerateException(::StringW message, ::System::Net::WebExceptionStatus status, ::System::Exception* innerException);

  /// @brief Method GenerateException addr 0x280fe88 size 0xc8 virtual false final false
  inline ::System::Exception* GenerateException(::System::Net::FtpStatusCode code, ::StringW statusDescription, ::System::Exception* innerException);

  /// @brief Method InitCommandPipeline addr 0x280f888 size 0x90 virtual false final false
  inline void InitCommandPipeline(::System::Net::WebRequest* request, ::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*> commands,
                                  bool isAsync);

  /// @brief Method CheckContinuePipeline addr 0x280ff50 size 0xb4 virtual false final false
  inline void CheckContinuePipeline();

  /// @brief Method ContinueCommandPipeline addr 0x280f918 size 0x4d8 virtual false final false
  inline ::System::IO::Stream* ContinueCommandPipeline();

  /// @brief Method PostSendCommandProcessing addr 0x2810014 size 0x130 virtual false final false
  inline bool PostSendCommandProcessing(ByRef<::System::IO::Stream*> stream);

  /// @brief Method PostReadCommandProcessing addr 0x281046c size 0x200 virtual false final false
  inline bool PostReadCommandProcessing(ByRef<::System::IO::Stream*> stream);

  /// @brief Method PipelineCallback addr 0x281066c size 0x8 virtual true final false
  inline ::System::Net::__CommandStream__PipelineInstruction PipelineCallback(::System::Net::__CommandStream__PipelineEntry* entry, ::System::Net::ResponseDescription* response, bool timeout,
                                                                              ByRef<::System::IO::Stream*> stream);

  /// @brief Method ReadCallback addr 0x2810674 size 0x2d0 virtual false final false
  static inline void ReadCallback(::System::IAsyncResult* asyncResult);

  /// @brief Method WriteCallback addr 0x2810ed0 size 0x2b4 virtual false final false
  static inline void WriteCallback(::System::IAsyncResult* asyncResult);

  /// @brief Method get_Encoding addr 0x2811184 size 0x8 virtual false final false
  inline ::System::Text::Encoding* get_Encoding();

  /// @brief Method set_Encoding addr 0x281118c size 0x38 virtual false final false
  inline void set_Encoding(::System::Text::Encoding* value);

  /// @brief Method CheckValid addr 0x28111c4 size 0x8 virtual true final false
  inline bool CheckValid(::System::Net::ResponseDescription* response, ByRef<int32_t> validThrough, ByRef<int32_t> completeLength);

  /// @brief Method ReceiveCommandResponse addr 0x2810144 size 0x328 virtual false final false
  inline ::System::Net::ResponseDescription* ReceiveCommandResponse();

  /// @brief Method ReceiveCommandResponseCallback addr 0x281097c size 0x554 virtual false final false
  inline void ReceiveCommandResponseCallback(::System::Net::ReceiveState* state, int32_t bytesRead);

  // Ctor Parameters [CppParam { name: "", ty: "CommandStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandStream(CommandStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandStream(CommandStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandStream();

public:
  /// @brief Field _recoverableFailure, offset: 0x38, size: 0x1, def value: None
  bool ____recoverableFailure;

  /// @brief Field _request, offset: 0x40, size: 0x8, def value: None
  ::System::Net::WebRequest* ____request;

  /// @brief Field _isAsync, offset: 0x48, size: 0x1, def value: None
  bool ____isAsync;

  /// @brief Field _aborted, offset: 0x49, size: 0x1, def value: None
  bool ____aborted;

  /// @brief Field _commands, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*> ____commands;

  /// @brief Field _index, offset: 0x58, size: 0x4, def value: None
  int32_t ____index;

  /// @brief Field _doRead, offset: 0x5c, size: 0x1, def value: None
  bool ____doRead;

  /// @brief Field _doSend, offset: 0x5d, size: 0x1, def value: None
  bool ____doSend;

  /// @brief Field _currentResponseDescription, offset: 0x60, size: 0x8, def value: None
  ::System::Net::ResponseDescription* ____currentResponseDescription;

  /// @brief Field _abortReason, offset: 0x68, size: 0x8, def value: None
  ::StringW ____abortReason;

  /// @brief Field _buffer, offset: 0x70, size: 0x8, def value: None
  ::StringW ____buffer;

  /// @brief Field _encoding, offset: 0x78, size: 0x8, def value: None
  ::System::Text::Encoding* ____encoding;

  /// @brief Field _decoder, offset: 0x80, size: 0x8, def value: None
  ::System::Text::Decoder* ____decoder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::CommandStream, 0x88>, "Size mismatch!");

static_assert(offsetof(::System::Net::CommandStream, ____recoverableFailure) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::CommandStream, ____request) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::CommandStream, ____isAsync) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::CommandStream, ____aborted) == 0x49, "Offset mismatch!");

static_assert(offsetof(::System::Net::CommandStream, ____commands) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::CommandStream, ____index) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::CommandStream, ____doRead) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Net::CommandStream, ____doSend) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::System::Net::CommandStream, ____currentResponseDescription) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::CommandStream, ____abortReason) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::CommandStream, ____buffer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::CommandStream, ____encoding) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::CommandStream, ____decoder) == 0x80, "Offset mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__CommandStream__PipelineEntryFlags, "System.Net", "CommandStream/PipelineEntryFlags");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__CommandStream__PipelineInstruction, "System.Net", "CommandStream/PipelineInstruction");
NEED_NO_BOX(::System::Net::CommandStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CommandStream*, "System.Net", "CommandStream");
NEED_NO_BOX(::System::Net::__CommandStream__PipelineEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__CommandStream__PipelineEntry*, "System.Net", "CommandStream/PipelineEntry");
