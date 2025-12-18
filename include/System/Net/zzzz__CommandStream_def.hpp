#pragma once
// IWYU pragma private; include "System/Net/CommandStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__NetworkStreamWrapper_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CommandStream)
namespace System::IO {
class Stream;
}
namespace System::Net::Sockets {
class TcpClient;
}
namespace System::Net {
struct CommandStream_PipelineEntryFlags;
}
namespace System::Net {
class CommandStream_PipelineEntry;
}
namespace System::Net {
struct CommandStream_PipelineInstruction;
}
namespace System::Net {
struct FtpStatusCode;
}
namespace System::Net {
class ReceiveState;
}
namespace System::Net {
class ResponseDescription;
}
namespace System::Net {
struct WebExceptionStatus;
}
namespace System::Net {
class WebRequest;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class Encoding;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
struct CommandStream_PipelineEntryFlags;
}
namespace System::Net {
struct CommandStream_PipelineInstruction;
}
namespace System::Net {
class CommandStream;
}
namespace System::Net {
class CommandStream_PipelineEntry;
}
// Write type traits
MARK_VAL_T(::System::Net::CommandStream_PipelineEntryFlags);
MARK_VAL_T(::System::Net::CommandStream_PipelineInstruction);
MARK_REF_PTR_T(::System::Net::CommandStream);
MARK_REF_PTR_T(::System::Net::CommandStream_PipelineEntry);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.CommandStream/PipelineInstruction
struct CORDL_TYPE CommandStream_PipelineInstruction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CommandStream_PipelineInstruction_Unwrapped
  enum struct __CommandStream_PipelineInstruction_Unwrapped : int32_t {
    __E_Abort = static_cast<int32_t>(0x0),
    __E_Advance = static_cast<int32_t>(0x1),
    __E_Pause = static_cast<int32_t>(0x2),
    __E_Reread = static_cast<int32_t>(0x3),
    __E_GiveStream = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CommandStream_PipelineInstruction_Unwrapped() const noexcept {
    return static_cast<__CommandStream_PipelineInstruction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandStream_PipelineInstruction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CommandStream_PipelineInstruction(int32_t value__) noexcept;

  /// @brief Field Abort value: I32(0)
  static ::System::Net::CommandStream_PipelineInstruction const Abort;

  /// @brief Field Advance value: I32(1)
  static ::System::Net::CommandStream_PipelineInstruction const Advance;

  /// @brief Field GiveStream value: I32(4)
  static ::System::Net::CommandStream_PipelineInstruction const GiveStream;

  /// @brief Field Pause value: I32(2)
  static ::System::Net::CommandStream_PipelineInstruction const Pause;

  /// @brief Field Reread value: I32(3)
  static ::System::Net::CommandStream_PipelineInstruction const Reread;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11432 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::CommandStream_PipelineInstruction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::CommandStream_PipelineInstruction, 0x4>, "Size mismatch!");

} // namespace System::Net
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.CommandStream/PipelineEntryFlags
struct CORDL_TYPE CommandStream_PipelineEntryFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CommandStream_PipelineEntryFlags_Unwrapped
  enum struct __CommandStream_PipelineEntryFlags_Unwrapped : int32_t {
    __E_UserCommand = static_cast<int32_t>(0x1),
    __E_GiveDataStream = static_cast<int32_t>(0x2),
    __E_CreateDataConnection = static_cast<int32_t>(0x4),
    __E_DontLogParameter = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CommandStream_PipelineEntryFlags_Unwrapped() const noexcept {
    return static_cast<__CommandStream_PipelineEntryFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandStream_PipelineEntryFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CommandStream_PipelineEntryFlags(int32_t value__) noexcept;

  /// @brief Field CreateDataConnection value: I32(4)
  static ::System::Net::CommandStream_PipelineEntryFlags const CreateDataConnection;

  /// @brief Field DontLogParameter value: I32(8)
  static ::System::Net::CommandStream_PipelineEntryFlags const DontLogParameter;

  /// @brief Field GiveDataStream value: I32(2)
  static ::System::Net::CommandStream_PipelineEntryFlags const GiveDataStream;

  /// @brief Field UserCommand value: I32(1)
  static ::System::Net::CommandStream_PipelineEntryFlags const UserCommand;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11433 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::CommandStream_PipelineEntryFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::CommandStream_PipelineEntryFlags, 0x4>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Net.CommandStream::PipelineEntryFlags, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.CommandStream/PipelineEntry
class CORDL_TYPE CommandStream_PipelineEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field Command, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Command, put = __cordl_internal_set_Command)) ::StringW Command;

  /// @brief Field Flags, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Flags, put = __cordl_internal_set_Flags)) ::System::Net::CommandStream_PipelineEntryFlags Flags;

  /// @brief Method HasFlag, addr 0x62470c0, size 0x10, virtual false, abstract: false, final false
  inline bool HasFlag(::System::Net::CommandStream_PipelineEntryFlags flags);

  static inline ::System::Net::CommandStream_PipelineEntry* New_ctor(::StringW command);

  static inline ::System::Net::CommandStream_PipelineEntry* New_ctor(::StringW command, ::System::Net::CommandStream_PipelineEntryFlags flags);

  constexpr ::StringW const& __cordl_internal_get_Command() const;

  constexpr ::StringW& __cordl_internal_get_Command();

  constexpr ::System::Net::CommandStream_PipelineEntryFlags const& __cordl_internal_get_Flags() const;

  constexpr ::System::Net::CommandStream_PipelineEntryFlags& __cordl_internal_get_Flags();

  constexpr void __cordl_internal_set_Command(::StringW value);

  constexpr void __cordl_internal_set_Flags(::System::Net::CommandStream_PipelineEntryFlags value);

  /// @brief Method .ctor, addr 0x62483d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW command);

  /// @brief Method .ctor, addr 0x62483e0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW command, ::System::Net::CommandStream_PipelineEntryFlags flags);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandStream_PipelineEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandStream_PipelineEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandStream_PipelineEntry(CommandStream_PipelineEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandStream_PipelineEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandStream_PipelineEntry(CommandStream_PipelineEntry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11434 };

  /// @brief Field Command, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Command;

  /// @brief Field Flags, offset: 0x18, size: 0x4, def value: None
  ::System::Net::CommandStream_PipelineEntryFlags ___Flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::CommandStream_PipelineEntry, ___Command) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::CommandStream_PipelineEntry, ___Flags) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::CommandStream_PipelineEntry, 0x20>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Net.NetworkStreamWrapper
namespace System::Net {
// Is value type: false
// CS Name: System.Net.CommandStream
class CORDL_TYPE CommandStream : public ::System::Net::NetworkStreamWrapper {
public:
  // Declarations
  using PipelineEntry = ::System::Net::CommandStream_PipelineEntry;

  using PipelineEntryFlags = ::System::Net::CommandStream_PipelineEntryFlags;

  using PipelineInstruction = ::System::Net::CommandStream_PipelineInstruction;

  __declspec(property(get = get_Encoding, put = set_Encoding)) ::System::Text::Encoding* Encoding;

  __declspec(property(get = get_RecoverableFailure)) bool RecoverableFailure;

  /// @brief Field _abortReason, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__abortReason, put = __cordl_internal_set__abortReason)) ::StringW _abortReason;

  /// @brief Field _aborted, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get__aborted, put = __cordl_internal_set__aborted)) bool _aborted;

  /// @brief Field _buffer, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__buffer, put = __cordl_internal_set__buffer)) ::StringW _buffer;

  /// @brief Field _commands, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__commands,
                      put = __cordl_internal_set__commands)) ::ArrayW<::System::Net::CommandStream_PipelineEntry*, ::Array<::System::Net::CommandStream_PipelineEntry*>*>
      _commands;

  /// @brief Field _currentResponseDescription, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__currentResponseDescription, put = __cordl_internal_set__currentResponseDescription)) ::System::Net::ResponseDescription* _currentResponseDescription;

  /// @brief Field _decoder, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__decoder, put = __cordl_internal_set__decoder)) ::System::Text::Decoder* _decoder;

  /// @brief Field _doRead, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get__doRead, put = __cordl_internal_set__doRead)) bool _doRead;

  /// @brief Field _doSend, offset 0x5d, size 0x1
  __declspec(property(get = __cordl_internal_get__doSend, put = __cordl_internal_set__doSend)) bool _doSend;

  /// @brief Field _encoding, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__encoding, put = __cordl_internal_set__encoding)) ::System::Text::Encoding* _encoding;

  /// @brief Field _index, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Field _isAsync, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__isAsync, put = __cordl_internal_set__isAsync)) bool _isAsync;

  /// @brief Field _recoverableFailure, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__recoverableFailure, put = __cordl_internal_set__recoverableFailure)) bool _recoverableFailure;

  /// @brief Field _request, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__request, put = __cordl_internal_set__request)) ::System::Net::WebRequest* _request;

  /// @brief Field s_readCallbackDelegate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_readCallbackDelegate, put = setStaticF_s_readCallbackDelegate)) ::System::AsyncCallback* s_readCallbackDelegate;

  /// @brief Field s_writeCallbackDelegate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_writeCallbackDelegate, put = setStaticF_s_writeCallbackDelegate)) ::System::AsyncCallback* s_writeCallbackDelegate;

  /// @brief Method Abort, addr 0x6246714, size 0x1ec, virtual true, abstract: false, final false
  inline void Abort(::System::Exception* e);

  /// @brief Method BuildCommandsList, addr 0x6246ec4, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Net::CommandStream_PipelineEntry*, ::Array<::System::Net::CommandStream_PipelineEntry*>*> BuildCommandsList(::System::Net::WebRequest* request);

  /// @brief Method CheckContinuePipeline, addr 0x6247008, size 0xb8, virtual false, abstract: false, final false
  inline void CheckContinuePipeline();

  /// @brief Method CheckValid, addr 0x6248264, size 0x8, virtual true, abstract: false, final false
  inline bool CheckValid(::System::Net::ResponseDescription* response, ::ByRef<int32_t> validThrough, ::ByRef<int32_t> completeLength);

  /// @brief Method ClearState, addr 0x6246e90, size 0x34, virtual true, abstract: false, final false
  inline void ClearState();

  /// @brief Method ContinueCommandPipeline, addr 0x6246b18, size 0x378, virtual false, abstract: false, final false
  inline ::System::IO::Stream* ContinueCommandPipeline();

  /// @brief Method Dispose, addr 0x6246900, size 0x9c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GenerateException, addr 0x6246f48, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Exception* GenerateException(::System::Net::FtpStatusCode code, ::StringW statusDescription, ::System::Exception* innerException);

  /// @brief Method GenerateException, addr 0x6246ecc, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Exception* GenerateException(::StringW message, ::System::Net::WebExceptionStatus status, ::System::Exception* innerException);

  /// @brief Method InitCommandPipeline, addr 0x6246ae0, size 0x38, virtual false, abstract: false, final false
  inline void InitCommandPipeline(::System::Net::WebRequest* request, ::ArrayW<::System::Net::CommandStream_PipelineEntry*, ::Array<::System::Net::CommandStream_PipelineEntry*>*> commands,
                                  bool isAsync);

  /// @brief Method InvokeRequestCallback, addr 0x624699c, size 0x84, virtual false, abstract: false, final false
  inline void InvokeRequestCallback(::System::Object* obj);

  /// @brief Method MarkAsRecoverableFailure, addr 0x6246a28, size 0x18, virtual false, abstract: false, final false
  inline void MarkAsRecoverableFailure();

  static inline ::System::Net::CommandStream* New_ctor(::System::Net::Sockets::TcpClient* client);

  /// @brief Method PipelineCallback, addr 0x6247758, size 0x8, virtual true, abstract: false, final false
  inline ::System::Net::CommandStream_PipelineInstruction PipelineCallback(::System::Net::CommandStream_PipelineEntry* entry, ::System::Net::ResponseDescription* response, bool timeout,
                                                                           ::ByRef<::System::IO::Stream*> stream);

  /// @brief Method PostReadCommandProcessing, addr 0x6247534, size 0x224, virtual false, abstract: false, final false
  inline bool PostReadCommandProcessing(::ByRef<::System::IO::Stream*> stream);

  /// @brief Method PostSendCommandProcessing, addr 0x62470d0, size 0x120, virtual false, abstract: false, final false
  inline bool PostSendCommandProcessing(::ByRef<::System::IO::Stream*> stream);

  /// @brief Method ReadCallback, addr 0x6247760, size 0x2d4, virtual false, abstract: false, final false
  static inline void ReadCallback(::System::IAsyncResult* asyncResult);

  /// @brief Method ReceiveCommandResponse, addr 0x62471f0, size 0x344, virtual false, abstract: false, final false
  inline ::System::Net::ResponseDescription* ReceiveCommandResponse();

  /// @brief Method ReceiveCommandResponseCallback, addr 0x6247a34, size 0x544, virtual false, abstract: false, final false
  inline void ReceiveCommandResponseCallback(::System::Net::ReceiveState* state, int32_t bytesRead);

  /// @brief Method SubmitRequest, addr 0x6246a40, size 0xa0, virtual false, abstract: false, final false
  inline ::System::IO::Stream* SubmitRequest(::System::Net::WebRequest* request, bool isAsync, bool readInitalResponseOnConnect);

  /// @brief Method WriteCallback, addr 0x6247f78, size 0x2ac, virtual false, abstract: false, final false
  static inline void WriteCallback(::System::IAsyncResult* asyncResult);

  constexpr ::StringW const& __cordl_internal_get__abortReason() const;

  constexpr ::StringW& __cordl_internal_get__abortReason();

  constexpr bool const& __cordl_internal_get__aborted() const;

  constexpr bool& __cordl_internal_get__aborted();

  constexpr ::StringW const& __cordl_internal_get__buffer() const;

  constexpr ::StringW& __cordl_internal_get__buffer();

  constexpr ::ArrayW<::System::Net::CommandStream_PipelineEntry*, ::Array<::System::Net::CommandStream_PipelineEntry*>*> const& __cordl_internal_get__commands() const;

  constexpr ::ArrayW<::System::Net::CommandStream_PipelineEntry*, ::Array<::System::Net::CommandStream_PipelineEntry*>*>& __cordl_internal_get__commands();

  constexpr ::System::Net::ResponseDescription* const& __cordl_internal_get__currentResponseDescription() const;

  constexpr ::System::Net::ResponseDescription*& __cordl_internal_get__currentResponseDescription();

  constexpr ::System::Text::Decoder* const& __cordl_internal_get__decoder() const;

  constexpr ::System::Text::Decoder*& __cordl_internal_get__decoder();

  constexpr bool const& __cordl_internal_get__doRead() const;

  constexpr bool& __cordl_internal_get__doRead();

  constexpr bool const& __cordl_internal_get__doSend() const;

  constexpr bool& __cordl_internal_get__doSend();

  constexpr ::System::Text::Encoding* const& __cordl_internal_get__encoding() const;

  constexpr ::System::Text::Encoding*& __cordl_internal_get__encoding();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr bool const& __cordl_internal_get__isAsync() const;

  constexpr bool& __cordl_internal_get__isAsync();

  constexpr bool const& __cordl_internal_get__recoverableFailure() const;

  constexpr bool& __cordl_internal_get__recoverableFailure();

  constexpr ::System::Net::WebRequest* const& __cordl_internal_get__request() const;

  constexpr ::System::Net::WebRequest*& __cordl_internal_get__request();

  constexpr void __cordl_internal_set__abortReason(::StringW value);

  constexpr void __cordl_internal_set__aborted(bool value);

  constexpr void __cordl_internal_set__buffer(::StringW value);

  constexpr void __cordl_internal_set__commands(::ArrayW<::System::Net::CommandStream_PipelineEntry*, ::Array<::System::Net::CommandStream_PipelineEntry*>*> value);

  constexpr void __cordl_internal_set__currentResponseDescription(::System::Net::ResponseDescription* value);

  constexpr void __cordl_internal_set__decoder(::System::Text::Decoder* value);

  constexpr void __cordl_internal_set__doRead(bool value);

  constexpr void __cordl_internal_set__doSend(bool value);

  constexpr void __cordl_internal_set__encoding(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set__index(int32_t value);

  constexpr void __cordl_internal_set__isAsync(bool value);

  constexpr void __cordl_internal_set__recoverableFailure(bool value);

  constexpr void __cordl_internal_set__request(::System::Net::WebRequest* value);

  /// @brief Method .ctor, addr 0x62466a8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::TcpClient* client);

  static inline ::System::AsyncCallback* getStaticF_s_readCallbackDelegate();

  static inline ::System::AsyncCallback* getStaticF_s_writeCallbackDelegate();

  /// @brief Method get_Encoding, addr 0x6248224, size 0x8, virtual false, abstract: false, final false
  inline ::System::Text::Encoding* get_Encoding();

  /// @brief Method get_RecoverableFailure, addr 0x6246a20, size 0x8, virtual false, abstract: false, final false
  inline bool get_RecoverableFailure();

  static inline void setStaticF_s_readCallbackDelegate(::System::AsyncCallback* value);

  static inline void setStaticF_s_writeCallbackDelegate(::System::AsyncCallback* value);

  /// @brief Method set_Encoding, addr 0x624822c, size 0x38, virtual false, abstract: false, final false
  inline void set_Encoding(::System::Text::Encoding* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandStream(CommandStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandStream(CommandStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11435 };

  /// @brief Field _recoverableFailure, offset: 0x38, size: 0x1, def value: None
  bool ____recoverableFailure;

  /// @brief Field _request, offset: 0x40, size: 0x8, def value: None
  ::System::Net::WebRequest* ____request;

  /// @brief Field _isAsync, offset: 0x48, size: 0x1, def value: None
  bool ____isAsync;

  /// @brief Field _aborted, offset: 0x49, size: 0x1, def value: None
  bool ____aborted;

  /// @brief Field _commands, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Net::CommandStream_PipelineEntry*, ::Array<::System::Net::CommandStream_PipelineEntry*>*> ____commands;

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

static_assert(::cordl_internals::size_check_v<::System::Net::CommandStream, 0x88>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CommandStream_PipelineEntryFlags, "System.Net", "CommandStream/PipelineEntryFlags");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CommandStream_PipelineInstruction, "System.Net", "CommandStream/PipelineInstruction");
NEED_NO_BOX(::System::Net::CommandStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CommandStream*, "System.Net", "CommandStream");
NEED_NO_BOX(::System::Net::CommandStream_PipelineEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CommandStream_PipelineEntry*, "System.Net", "CommandStream/PipelineEntry");
