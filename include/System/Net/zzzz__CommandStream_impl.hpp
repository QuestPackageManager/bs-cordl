#pragma once
// IWYU pragma private; include "System/Net/CommandStream.hpp"
#include "System/Net/zzzz__NetworkStreamWrapper_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CommandStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/Net/zzzz__CommandStream_def.hpp"
#include "System/Net/zzzz__FtpStatusCode_def.hpp"
#include "System/Net/zzzz__ReceiveState_def.hpp"
#include "System/Net/zzzz__ResponseDescription_def.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::CommandStream_PipelineInstruction::CommandStream_PipelineInstruction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::CommandStream_PipelineInstruction::CommandStream_PipelineInstruction() {}
constexpr ::System::Net::CommandStream_PipelineInstruction System::Net::CommandStream_PipelineInstruction::Abort{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::CommandStream_PipelineInstruction System::Net::CommandStream_PipelineInstruction::Advance{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::CommandStream_PipelineInstruction System::Net::CommandStream_PipelineInstruction::Pause{ static_cast<int32_t>(0x2) };
constexpr ::System::Net::CommandStream_PipelineInstruction System::Net::CommandStream_PipelineInstruction::Reread{ static_cast<int32_t>(0x3) };
constexpr ::System::Net::CommandStream_PipelineInstruction System::Net::CommandStream_PipelineInstruction::GiveStream{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::CommandStream_PipelineEntryFlags::CommandStream_PipelineEntryFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::CommandStream_PipelineEntryFlags::CommandStream_PipelineEntryFlags() {}
constexpr ::System::Net::CommandStream_PipelineEntryFlags System::Net::CommandStream_PipelineEntryFlags::UserCommand{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::CommandStream_PipelineEntryFlags System::Net::CommandStream_PipelineEntryFlags::GiveDataStream{ static_cast<int32_t>(0x2) };
constexpr ::System::Net::CommandStream_PipelineEntryFlags System::Net::CommandStream_PipelineEntryFlags::CreateDataConnection{ static_cast<int32_t>(0x4) };
constexpr ::System::Net::CommandStream_PipelineEntryFlags System::Net::CommandStream_PipelineEntryFlags::DontLogParameter{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::System::Net::CommandStream_PipelineEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream_PipelineEntry::*)(::StringW)>(
    &::System::Net::CommandStream_PipelineEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62483d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream_PipelineEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream_PipelineEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream_PipelineEntry::*)(::StringW, ::System::Net::CommandStream_PipelineEntryFlags)>(
    &::System::Net::CommandStream_PipelineEntry::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62483e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream_PipelineEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CommandStream_PipelineEntryFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream_PipelineEntry.HasFlag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::CommandStream_PipelineEntry::*)(::System::Net::CommandStream_PipelineEntryFlags)>(
    &::System::Net::CommandStream_PipelineEntry::HasFlag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62470c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream_PipelineEntry*>::get(), "HasFlag", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CommandStream_PipelineEntryFlags>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::CommandStream_PipelineEntry::__cordl_internal_get_Command() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Command;
}
constexpr ::StringW const& System::Net::CommandStream_PipelineEntry::__cordl_internal_get_Command() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Command;
}
constexpr void System::Net::CommandStream_PipelineEntry::__cordl_internal_set_Command(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Command)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::CommandStream_PipelineEntryFlags& System::Net::CommandStream_PipelineEntry::__cordl_internal_get_Flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Flags;
}
constexpr ::System::Net::CommandStream_PipelineEntryFlags const& System::Net::CommandStream_PipelineEntry::__cordl_internal_get_Flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Flags;
}
constexpr void System::Net::CommandStream_PipelineEntry::__cordl_internal_set_Flags(::System::Net::CommandStream_PipelineEntryFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Flags = value;
}
inline void System::Net::CommandStream_PipelineEntry::_ctor(::StringW command) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream_PipelineEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, command);
}
inline void System::Net::CommandStream_PipelineEntry::_ctor(::StringW command, ::System::Net::CommandStream_PipelineEntryFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream_PipelineEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CommandStream_PipelineEntryFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, command, flags);
}
inline bool System::Net::CommandStream_PipelineEntry::HasFlag(::System::Net::CommandStream_PipelineEntryFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream_PipelineEntry*>::get(), "HasFlag", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CommandStream_PipelineEntryFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, flags);
}
inline ::System::Net::CommandStream_PipelineEntry* System::Net::CommandStream_PipelineEntry::New_ctor(::StringW command) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::CommandStream_PipelineEntry*>(command));
}
inline ::System::Net::CommandStream_PipelineEntry* System::Net::CommandStream_PipelineEntry::New_ctor(::StringW command, ::System::Net::CommandStream_PipelineEntryFlags flags) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::CommandStream_PipelineEntry*>(command, flags));
}
// Ctor Parameters []
constexpr ::System::Net::CommandStream_PipelineEntry::CommandStream_PipelineEntry() {}
//  Writing Method size for method: ::System::Net::CommandStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)(::System::Net::Sockets::TcpClient*)>(&::System::Net::CommandStream::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x62466a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::TcpClient*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.Abort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)(::System::Exception*)>(&::System::Net::CommandStream::Abort)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6246714;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)(bool)>(&::System::Net::CommandStream::Dispose)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6246900;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.InvokeRequestCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)(::System::Object*)>(&::System::Net::CommandStream::InvokeRequestCallback)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x624699c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "InvokeRequestCallback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.get_RecoverableFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::get_RecoverableFailure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6246a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "get_RecoverableFailure",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.MarkAsRecoverableFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::MarkAsRecoverableFailure)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6246a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "MarkAsRecoverableFailure",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.SubmitRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::CommandStream::*)(::System::Net::WebRequest*, bool, bool)>(
    &::System::Net::CommandStream::SubmitRequest)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6246a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "SubmitRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.ClearState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::ClearState)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6246e90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.BuildCommandsList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::CommandStream_PipelineEntry*, ::Array<::System::Net::CommandStream_PipelineEntry*>*> (
    ::System::Net::CommandStream::*)(::System::Net::WebRequest*)>(&::System::Net::CommandStream::BuildCommandsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6246ec4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.GenerateException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Exception* (::System::Net::CommandStream::*)(::StringW, ::System::Net::WebExceptionStatus, ::System::Exception*)>(&::System::Net::CommandStream::GenerateException)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6246ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "GenerateException", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebExceptionStatus>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.GenerateException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Exception* (::System::Net::CommandStream::*)(::System::Net::FtpStatusCode, ::StringW, ::System::Exception*)>(&::System::Net::CommandStream::GenerateException)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6246f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "GenerateException", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.InitCommandPipeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Net::CommandStream::*)(::System::Net::WebRequest*, ::ArrayW<::System::Net::CommandStream_PipelineEntry*, ::Array<::System::Net::CommandStream_PipelineEntry*>*>, bool)>(
        &::System::Net::CommandStream::InitCommandPipeline)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6246ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "InitCommandPipeline", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Net::CommandStream_PipelineEntry*, ::Array<::System::Net::CommandStream_PipelineEntry*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.CheckContinuePipeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::CheckContinuePipeline)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6247008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "CheckContinuePipeline",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.ContinueCommandPipeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::ContinueCommandPipeline)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x6246b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "ContinueCommandPipeline",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.PostSendCommandProcessing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::CommandStream::*)(::ByRef<::System::IO::Stream*>)>(
    &::System::Net::CommandStream::PostSendCommandProcessing)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x62470d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "PostSendCommandProcessing", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Stream*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.PostReadCommandProcessing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::CommandStream::*)(::ByRef<::System::IO::Stream*>)>(
    &::System::Net::CommandStream::PostReadCommandProcessing)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x6247534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "PostReadCommandProcessing", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Stream*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.PipelineCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::CommandStream_PipelineInstruction (::System::Net::CommandStream::*)(
    ::System::Net::CommandStream_PipelineEntry*, ::System::Net::ResponseDescription*, bool, ::ByRef<::System::IO::Stream*>)>(&::System::Net::CommandStream::PipelineCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6247758;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.ReadCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::Net::CommandStream::ReadCallback)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x6247760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "ReadCallback", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.WriteCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::Net::CommandStream::WriteCallback)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x6247f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "WriteCallback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.get_Encoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::get_Encoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6248224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "get_Encoding",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.set_Encoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)(::System::Text::Encoding*)>(&::System::Net::CommandStream::set_Encoding)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x624822c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "set_Encoding", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.CheckValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::CommandStream::*)(::System::Net::ResponseDescription*, ::ByRef<int32_t>, ::ByRef<int32_t>)>(
    &::System::Net::CommandStream::CheckValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6248264;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.ReceiveCommandResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ResponseDescription* (::System::Net::CommandStream::*)()>(
    &::System::Net::CommandStream::ReceiveCommandResponse)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x62471f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "ReceiveCommandResponse",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.ReceiveCommandResponseCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)(::System::Net::ReceiveState*, int32_t)>(
    &::System::Net::CommandStream::ReceiveCommandResponseCallback)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x6247a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "ReceiveCommandResponseCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ReceiveState*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr bool& System::Net::CommandStream::__cordl_internal_get__recoverableFailure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recoverableFailure;
}
constexpr bool const& System::Net::CommandStream::__cordl_internal_get__recoverableFailure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recoverableFailure;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__recoverableFailure(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recoverableFailure = value;
}
constexpr ::System::Net::WebRequest*& System::Net::CommandStream::__cordl_internal_get__request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____request;
}
constexpr ::System::Net::WebRequest* const& System::Net::CommandStream::__cordl_internal_get__request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____request;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__request(::System::Net::WebRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::CommandStream::__cordl_internal_get__isAsync() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAsync;
}
constexpr bool const& System::Net::CommandStream::__cordl_internal_get__isAsync() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAsync;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__isAsync(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isAsync = value;
}
constexpr bool& System::Net::CommandStream::__cordl_internal_get__aborted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____aborted;
}
constexpr bool const& System::Net::CommandStream::__cordl_internal_get__aborted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____aborted;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__aborted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____aborted = value;
}
constexpr ::ArrayW<::System::Net::CommandStream_PipelineEntry*, ::Array<::System::Net::CommandStream_PipelineEntry*>*>& System::Net::CommandStream::__cordl_internal_get__commands() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commands;
}
constexpr ::ArrayW<::System::Net::CommandStream_PipelineEntry*, ::Array<::System::Net::CommandStream_PipelineEntry*>*> const& System::Net::CommandStream::__cordl_internal_get__commands() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commands;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__commands(::ArrayW<::System::Net::CommandStream_PipelineEntry*, ::Array<::System::Net::CommandStream_PipelineEntry*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____commands)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::CommandStream::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr int32_t const& System::Net::CommandStream::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
constexpr bool& System::Net::CommandStream::__cordl_internal_get__doRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____doRead;
}
constexpr bool const& System::Net::CommandStream::__cordl_internal_get__doRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____doRead;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__doRead(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____doRead = value;
}
constexpr bool& System::Net::CommandStream::__cordl_internal_get__doSend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____doSend;
}
constexpr bool const& System::Net::CommandStream::__cordl_internal_get__doSend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____doSend;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__doSend(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____doSend = value;
}
constexpr ::System::Net::ResponseDescription*& System::Net::CommandStream::__cordl_internal_get__currentResponseDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentResponseDescription;
}
constexpr ::System::Net::ResponseDescription* const& System::Net::CommandStream::__cordl_internal_get__currentResponseDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentResponseDescription;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__currentResponseDescription(::System::Net::ResponseDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentResponseDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::CommandStream::__cordl_internal_get__abortReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____abortReason;
}
constexpr ::StringW const& System::Net::CommandStream::__cordl_internal_get__abortReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____abortReason;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__abortReason(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____abortReason)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::CommandStream::__cordl_internal_get__buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr ::StringW const& System::Net::CommandStream::__cordl_internal_get__buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__buffer(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::Encoding*& System::Net::CommandStream::__cordl_internal_get__encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr ::System::Text::Encoding* const& System::Net::CommandStream::__cordl_internal_get__encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____encoding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::Decoder*& System::Net::CommandStream::__cordl_internal_get__decoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decoder;
}
constexpr ::System::Text::Decoder* const& System::Net::CommandStream::__cordl_internal_get__decoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decoder;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__decoder(::System::Text::Decoder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____decoder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::CommandStream::setStaticF_s_writeCallbackDelegate(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "s_writeCallbackDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get>(
      std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::CommandStream::getStaticF_s_writeCallbackDelegate() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "s_writeCallbackDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get>();
}
inline void System::Net::CommandStream::setStaticF_s_readCallbackDelegate(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "s_readCallbackDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get>(
      std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::CommandStream::getStaticF_s_readCallbackDelegate() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "s_readCallbackDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get>();
}
inline void System::Net::CommandStream::_ctor(::System::Net::Sockets::TcpClient* client) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::TcpClient*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, client);
}
inline void System::Net::CommandStream::Abort(::System::Exception* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::Net::CommandStream::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Net::CommandStream::InvokeRequestCallback(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "InvokeRequestCallback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline bool System::Net::CommandStream::get_RecoverableFailure() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "get_RecoverableFailure",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::CommandStream::MarkAsRecoverableFailure() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "MarkAsRecoverableFailure",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IO::Stream* System::Net::CommandStream::SubmitRequest(::System::Net::WebRequest* request, bool isAsync, bool readInitalResponseOnConnect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "SubmitRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, request, isAsync, readInitalResponseOnConnect);
}
inline void System::Net::CommandStream::ClearState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Net::CommandStream_PipelineEntry*, ::Array<::System::Net::CommandStream_PipelineEntry*>*> System::Net::CommandStream::BuildCommandsList(::System::Net::WebRequest* request) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::CommandStream_PipelineEntry*, ::Array<::System::Net::CommandStream_PipelineEntry*>*>, false>(this, ___internal_method, request);
}
inline ::System::Exception* System::Net::CommandStream::GenerateException(::StringW message, ::System::Net::WebExceptionStatus status, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "GenerateException", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebExceptionStatus>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, message, status, innerException);
}
inline ::System::Exception* System::Net::CommandStream::GenerateException(::System::Net::FtpStatusCode code, ::StringW statusDescription, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "GenerateException", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, code, statusDescription, innerException);
}
inline void System::Net::CommandStream::InitCommandPipeline(::System::Net::WebRequest* request,
                                                            ::ArrayW<::System::Net::CommandStream_PipelineEntry*, ::Array<::System::Net::CommandStream_PipelineEntry*>*> commands, bool isAsync) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "InitCommandPipeline", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Net::CommandStream_PipelineEntry*, ::Array<::System::Net::CommandStream_PipelineEntry*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, commands, isAsync);
}
inline void System::Net::CommandStream::CheckContinuePipeline() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "CheckContinuePipeline",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IO::Stream* System::Net::CommandStream::ContinueCommandPipeline() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "ContinueCommandPipeline",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline bool System::Net::CommandStream::PostSendCommandProcessing(::ByRef<::System::IO::Stream*> stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "PostSendCommandProcessing", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Stream*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, stream);
}
inline bool System::Net::CommandStream::PostReadCommandProcessing(::ByRef<::System::IO::Stream*> stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "PostReadCommandProcessing", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Stream*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, stream);
}
inline ::System::Net::CommandStream_PipelineInstruction System::Net::CommandStream::PipelineCallback(::System::Net::CommandStream_PipelineEntry* entry, ::System::Net::ResponseDescription* response,
                                                                                                     bool timeout, ::ByRef<::System::IO::Stream*> stream) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CommandStream_PipelineInstruction, false>(this, ___internal_method, entry, response, timeout, stream);
}
inline void System::Net::CommandStream::ReadCallback(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "ReadCallback", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncResult);
}
inline void System::Net::CommandStream::WriteCallback(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "WriteCallback", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncResult);
}
inline ::System::Text::Encoding* System::Net::CommandStream::get_Encoding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "get_Encoding",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(this, ___internal_method);
}
inline void System::Net::CommandStream::set_Encoding(::System::Text::Encoding* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "set_Encoding", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::CommandStream::CheckValid(::System::Net::ResponseDescription* response, ::ByRef<int32_t> validThrough, ::ByRef<int32_t> completeLength) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, response, validThrough, completeLength);
}
inline ::System::Net::ResponseDescription* System::Net::CommandStream::ReceiveCommandResponse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "ReceiveCommandResponse",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ResponseDescription*, false>(this, ___internal_method);
}
inline void System::Net::CommandStream::ReceiveCommandResponseCallback(::System::Net::ReceiveState* state, int32_t bytesRead) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "ReceiveCommandResponseCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ReceiveState*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, bytesRead);
}
inline ::System::Net::CommandStream* System::Net::CommandStream::New_ctor(::System::Net::Sockets::TcpClient* client) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::CommandStream*>(client));
}
// Ctor Parameters []
constexpr ::System::Net::CommandStream::CommandStream() {}
