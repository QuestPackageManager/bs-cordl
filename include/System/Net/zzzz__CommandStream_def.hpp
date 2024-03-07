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
namespace System::IO {
class Stream;
}
namespace System::Net::Sockets {
class TcpClient;
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
namespace System::Net {
struct __CommandStream__PipelineEntryFlags;
}
namespace System::Net {
class __CommandStream__PipelineEntry;
}
namespace System::Net {
struct __CommandStream__PipelineInstruction;
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CommandStream__PipelineInstruction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __CommandStream__PipelineInstruction(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Abort value: static_cast<int32_t>(0x0)
  static ::System::Net::__CommandStream__PipelineInstruction const Abort;

  /// @brief Field Advance value: static_cast<int32_t>(0x1)
  static ::System::Net::__CommandStream__PipelineInstruction const Advance;

  /// @brief Field GiveStream value: static_cast<int32_t>(0x4)
  static ::System::Net::__CommandStream__PipelineInstruction const GiveStream;

  /// @brief Field Pause value: static_cast<int32_t>(0x2)
  static ::System::Net::__CommandStream__PipelineInstruction const Pause;

  /// @brief Field Reread value: static_cast<int32_t>(0x3)
  static ::System::Net::__CommandStream__PipelineInstruction const Reread;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CommandStream__PipelineEntryFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __CommandStream__PipelineEntryFlags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CreateDataConnection value: static_cast<int32_t>(0x4)
  static ::System::Net::__CommandStream__PipelineEntryFlags const CreateDataConnection;

  /// @brief Field DontLogParameter value: static_cast<int32_t>(0x8)
  static ::System::Net::__CommandStream__PipelineEntryFlags const DontLogParameter;

  /// @brief Field GiveDataStream value: static_cast<int32_t>(0x2)
  static ::System::Net::__CommandStream__PipelineEntryFlags const GiveDataStream;

  /// @brief Field UserCommand value: static_cast<int32_t>(0x1)
  static ::System::Net::__CommandStream__PipelineEntryFlags const UserCommand;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

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
// CS Name: ::CommandStream::PipelineEntry*
class CORDL_TYPE __CommandStream__PipelineEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field Command, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Command, put = __cordl_internal_set_Command))::StringW Command;

  /// @brief Field Flags, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Flags, put = __cordl_internal_set_Flags))::System::Net::__CommandStream__PipelineEntryFlags Flags;

  /// @brief Method HasFlag, addr 0x2ad8c24, size 0x10, virtual false, abstract: false, final false
  inline bool HasFlag(::System::Net::__CommandStream__PipelineEntryFlags flags);

  static inline ::System::Net::__CommandStream__PipelineEntry* New_ctor(::StringW command);

  static inline ::System::Net::__CommandStream__PipelineEntry* New_ctor(::StringW command, ::System::Net::__CommandStream__PipelineEntryFlags flags);

  constexpr ::StringW const& __cordl_internal_get_Command() const;

  constexpr ::StringW& __cordl_internal_get_Command();

  constexpr ::System::Net::__CommandStream__PipelineEntryFlags const& __cordl_internal_get_Flags() const;

  constexpr ::System::Net::__CommandStream__PipelineEntryFlags& __cordl_internal_get_Flags();

  constexpr void __cordl_internal_set_Command(::StringW value);

  constexpr void __cordl_internal_set_Flags(::System::Net::__CommandStream__PipelineEntryFlags value);

  /// @brief Method .ctor, addr 0x2ad9f60, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW command);

  /// @brief Method .ctor, addr 0x2ad9f88, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW command, ::System::Net::__CommandStream__PipelineEntryFlags flags);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CommandStream__PipelineEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CommandStream__PipelineEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CommandStream__PipelineEntry(__CommandStream__PipelineEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CommandStream__PipelineEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CommandStream__PipelineEntry(__CommandStream__PipelineEntry const&) = delete;

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
// CS Name: ::System.Net::CommandStream*
class CORDL_TYPE CommandStream : public ::System::Net::NetworkStreamWrapper {
public:
  // Declarations
  using PipelineEntry = ::System::Net::__CommandStream__PipelineEntry;

  using PipelineEntryFlags = ::System::Net::__CommandStream__PipelineEntryFlags;

  using PipelineInstruction = ::System::Net::__CommandStream__PipelineInstruction;

  __declspec(property(get = get_Encoding, put = set_Encoding))::System::Text::Encoding* Encoding;

  __declspec(property(get = get_RecoverableFailure)) bool RecoverableFailure;

  /// @brief Field _abortReason, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__abortReason, put = __cordl_internal_set__abortReason))::StringW _abortReason;

  /// @brief Field _aborted, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get__aborted, put = __cordl_internal_set__aborted)) bool _aborted;

  /// @brief Field _buffer, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__buffer, put = __cordl_internal_set__buffer))::StringW _buffer;

  /// @brief Field _commands, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__commands,
                      put = __cordl_internal_set__commands))::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*> _commands;

  /// @brief Field _currentResponseDescription, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__currentResponseDescription, put = __cordl_internal_set__currentResponseDescription))::System::Net::ResponseDescription* _currentResponseDescription;

  /// @brief Field _decoder, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__decoder, put = __cordl_internal_set__decoder))::System::Text::Decoder* _decoder;

  /// @brief Field _doRead, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get__doRead, put = __cordl_internal_set__doRead)) bool _doRead;

  /// @brief Field _doSend, offset 0x5d, size 0x1
  __declspec(property(get = __cordl_internal_get__doSend, put = __cordl_internal_set__doSend)) bool _doSend;

  /// @brief Field _encoding, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__encoding, put = __cordl_internal_set__encoding))::System::Text::Encoding* _encoding;

  /// @brief Field _index, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Field _isAsync, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__isAsync, put = __cordl_internal_set__isAsync)) bool _isAsync;

  /// @brief Field _recoverableFailure, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__recoverableFailure, put = __cordl_internal_set__recoverableFailure)) bool _recoverableFailure;

  /// @brief Field _request, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__request, put = __cordl_internal_set__request))::System::Net::WebRequest* _request;

  /// @brief Field s_readCallbackDelegate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_readCallbackDelegate, put = setStaticF_s_readCallbackDelegate))::System::AsyncCallback* s_readCallbackDelegate;

  /// @brief Field s_writeCallbackDelegate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_writeCallbackDelegate, put = setStaticF_s_writeCallbackDelegate))::System::AsyncCallback* s_writeCallbackDelegate;

  /// @brief Method Abort, addr 0x2ad80cc, size 0x1f8, virtual true, abstract: false, final false
  inline void Abort(::System::Exception* e);

  /// @brief Method BuildCommandsList, addr 0x2ad8a20, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*> BuildCommandsList(::System::Net::WebRequest* request);

  /// @brief Method CheckContinuePipeline, addr 0x2ad8b70, size 0xb4, virtual false, abstract: false, final false
  inline void CheckContinuePipeline();

  /// @brief Method CheckValid, addr 0x2ad9de4, size 0x8, virtual true, abstract: false, final false
  inline bool CheckValid(::System::Net::ResponseDescription* response, ByRef<int32_t> validThrough, ByRef<int32_t> completeLength);

  /// @brief Method ClearState, addr 0x2ad8a10, size 0x10, virtual true, abstract: false, final false
  inline void ClearState();

  /// @brief Method ContinueCommandPipeline, addr 0x2ad8538, size 0x4d8, virtual false, abstract: false, final false
  inline ::System::IO::Stream* ContinueCommandPipeline();

  /// @brief Method Dispose, addr 0x2ad82f4, size 0x94, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GenerateException, addr 0x2ad8aa8, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Exception* GenerateException(::System::Net::FtpStatusCode code, ::StringW statusDescription, ::System::Exception* innerException);

  /// @brief Method GenerateException, addr 0x2ad8a28, size 0x80, virtual false, abstract: false, final false
  inline ::System::Exception* GenerateException(::StringW message, ::System::Net::WebExceptionStatus status, ::System::Exception* innerException);

  /// @brief Method InitCommandPipeline, addr 0x2ad84a8, size 0x90, virtual false, abstract: false, final false
  inline void InitCommandPipeline(::System::Net::WebRequest* request, ::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*> commands,
                                  bool isAsync);

  /// @brief Method InvokeRequestCallback, addr 0x2ad8388, size 0x70, virtual false, abstract: false, final false
  inline void InvokeRequestCallback(::System::Object* obj);

  /// @brief Method MarkAsRecoverableFailure, addr 0x2ad8410, size 0x18, virtual false, abstract: false, final false
  inline void MarkAsRecoverableFailure();

  static inline ::System::Net::CommandStream* New_ctor(::System::Net::Sockets::TcpClient* client);

  /// @brief Method PipelineCallback, addr 0x2ad928c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Net::__CommandStream__PipelineInstruction PipelineCallback(::System::Net::__CommandStream__PipelineEntry* entry, ::System::Net::ResponseDescription* response, bool timeout,
                                                                              ByRef<::System::IO::Stream*> stream);

  /// @brief Method PostReadCommandProcessing, addr 0x2ad908c, size 0x200, virtual false, abstract: false, final false
  inline bool PostReadCommandProcessing(ByRef<::System::IO::Stream*> stream);

  /// @brief Method PostSendCommandProcessing, addr 0x2ad8c34, size 0x130, virtual false, abstract: false, final false
  inline bool PostSendCommandProcessing(ByRef<::System::IO::Stream*> stream);

  /// @brief Method ReadCallback, addr 0x2ad9294, size 0x2d0, virtual false, abstract: false, final false
  static inline void ReadCallback(::System::IAsyncResult* asyncResult);

  /// @brief Method ReceiveCommandResponse, addr 0x2ad8d64, size 0x328, virtual false, abstract: false, final false
  inline ::System::Net::ResponseDescription* ReceiveCommandResponse();

  /// @brief Method ReceiveCommandResponseCallback, addr 0x2ad959c, size 0x554, virtual false, abstract: false, final false
  inline void ReceiveCommandResponseCallback(::System::Net::ReceiveState* state, int32_t bytesRead);

  /// @brief Method SubmitRequest, addr 0x2ad8428, size 0x80, virtual false, abstract: false, final false
  inline ::System::IO::Stream* SubmitRequest(::System::Net::WebRequest* request, bool isAsync, bool readInitalResponseOnConnect);

  /// @brief Method WriteCallback, addr 0x2ad9af0, size 0x2b4, virtual false, abstract: false, final false
  static inline void WriteCallback(::System::IAsyncResult* asyncResult);

  constexpr ::StringW const& __cordl_internal_get__abortReason() const;

  constexpr ::StringW& __cordl_internal_get__abortReason();

  constexpr bool const& __cordl_internal_get__aborted() const;

  constexpr bool& __cordl_internal_get__aborted();

  constexpr ::StringW const& __cordl_internal_get__buffer() const;

  constexpr ::StringW& __cordl_internal_get__buffer();

  constexpr ::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*> const& __cordl_internal_get__commands() const;

  constexpr ::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*>& __cordl_internal_get__commands();

  constexpr ::System::Net::ResponseDescription*& __cordl_internal_get__currentResponseDescription();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ResponseDescription*> const& __cordl_internal_get__currentResponseDescription() const;

  constexpr ::System::Text::Decoder*& __cordl_internal_get__decoder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Decoder*> const& __cordl_internal_get__decoder() const;

  constexpr bool const& __cordl_internal_get__doRead() const;

  constexpr bool& __cordl_internal_get__doRead();

  constexpr bool const& __cordl_internal_get__doSend() const;

  constexpr bool& __cordl_internal_get__doSend();

  constexpr ::System::Text::Encoding*& __cordl_internal_get__encoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __cordl_internal_get__encoding() const;

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr bool const& __cordl_internal_get__isAsync() const;

  constexpr bool& __cordl_internal_get__isAsync();

  constexpr bool const& __cordl_internal_get__recoverableFailure() const;

  constexpr bool& __cordl_internal_get__recoverableFailure();

  constexpr ::System::Net::WebRequest*& __cordl_internal_get__request();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequest*> const& __cordl_internal_get__request() const;

  constexpr void __cordl_internal_set__abortReason(::StringW value);

  constexpr void __cordl_internal_set__aborted(bool value);

  constexpr void __cordl_internal_set__buffer(::StringW value);

  constexpr void __cordl_internal_set__commands(::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*> value);

  constexpr void __cordl_internal_set__currentResponseDescription(::System::Net::ResponseDescription* value);

  constexpr void __cordl_internal_set__decoder(::System::Text::Decoder* value);

  constexpr void __cordl_internal_set__doRead(bool value);

  constexpr void __cordl_internal_set__doSend(bool value);

  constexpr void __cordl_internal_set__encoding(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set__index(int32_t value);

  constexpr void __cordl_internal_set__isAsync(bool value);

  constexpr void __cordl_internal_set__recoverableFailure(bool value);

  constexpr void __cordl_internal_set__request(::System::Net::WebRequest* value);

  /// @brief Method .ctor, addr 0x2ad7fb4, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::TcpClient* client);

  static inline ::System::AsyncCallback* getStaticF_s_readCallbackDelegate();

  static inline ::System::AsyncCallback* getStaticF_s_writeCallbackDelegate();

  /// @brief Method get_Encoding, addr 0x2ad9da4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Text::Encoding* get_Encoding();

  /// @brief Method get_RecoverableFailure, addr 0x2ad8408, size 0x8, virtual false, abstract: false, final false
  inline bool get_RecoverableFailure();

  static inline void setStaticF_s_readCallbackDelegate(::System::AsyncCallback* value);

  static inline void setStaticF_s_writeCallbackDelegate(::System::AsyncCallback* value);

  /// @brief Method set_Encoding, addr 0x2ad9dac, size 0x38, virtual false, abstract: false, final false
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
