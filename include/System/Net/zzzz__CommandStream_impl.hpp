#pragma once
#include "System/Net/zzzz__CommandStream_impl.hpp"
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
constexpr ::System::Net::__CommandStream__PipelineInstruction::__CommandStream__PipelineInstruction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::__CommandStream__PipelineInstruction::__CommandStream__PipelineInstruction() {}
constexpr ::System::Net::__CommandStream__PipelineInstruction System::Net::__CommandStream__PipelineInstruction::Abort{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::__CommandStream__PipelineInstruction System::Net::__CommandStream__PipelineInstruction::Advance{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::__CommandStream__PipelineInstruction System::Net::__CommandStream__PipelineInstruction::Pause{ static_cast<int32_t>(0x2) };
constexpr ::System::Net::__CommandStream__PipelineInstruction System::Net::__CommandStream__PipelineInstruction::Reread{ static_cast<int32_t>(0x3) };
constexpr ::System::Net::__CommandStream__PipelineInstruction System::Net::__CommandStream__PipelineInstruction::GiveStream{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__CommandStream__PipelineEntryFlags::__CommandStream__PipelineEntryFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::__CommandStream__PipelineEntryFlags::__CommandStream__PipelineEntryFlags() {}
constexpr ::System::Net::__CommandStream__PipelineEntryFlags System::Net::__CommandStream__PipelineEntryFlags::UserCommand{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::__CommandStream__PipelineEntryFlags System::Net::__CommandStream__PipelineEntryFlags::GiveDataStream{ static_cast<int32_t>(0x2) };
constexpr ::System::Net::__CommandStream__PipelineEntryFlags System::Net::__CommandStream__PipelineEntryFlags::CreateDataConnection{ static_cast<int32_t>(0x4) };
constexpr ::System::Net::__CommandStream__PipelineEntryFlags System::Net::__CommandStream__PipelineEntryFlags::DontLogParameter{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::System::Net::__CommandStream__PipelineEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__CommandStream__PipelineEntry::*)(::StringW)>(
    &::System::Net::__CommandStream__PipelineEntry::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2fc4d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__CommandStream__PipelineEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__CommandStream__PipelineEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Net::__CommandStream__PipelineEntry::*)(::StringW, ::System::Net::__CommandStream__PipelineEntryFlags)>(&::System::Net::__CommandStream__PipelineEntry::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2fc4d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__CommandStream__PipelineEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__CommandStream__PipelineEntryFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__CommandStream__PipelineEntry.HasFlag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__CommandStream__PipelineEntry::*)(::System::Net::__CommandStream__PipelineEntryFlags)>(
    &::System::Net::__CommandStream__PipelineEntry::HasFlag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2fc39d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__CommandStream__PipelineEntry*>::get(), "HasFlag", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__CommandStream__PipelineEntryFlags>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::__CommandStream__PipelineEntry::__cordl_internal_get_Command() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Command;
}
constexpr ::StringW const& System::Net::__CommandStream__PipelineEntry::__cordl_internal_get_Command() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Command;
}
constexpr void System::Net::__CommandStream__PipelineEntry::__cordl_internal_set_Command(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Command)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::__CommandStream__PipelineEntryFlags& System::Net::__CommandStream__PipelineEntry::__cordl_internal_get_Flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Flags;
}
constexpr ::System::Net::__CommandStream__PipelineEntryFlags const& System::Net::__CommandStream__PipelineEntry::__cordl_internal_get_Flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Flags;
}
constexpr void System::Net::__CommandStream__PipelineEntry::__cordl_internal_set_Flags(::System::Net::__CommandStream__PipelineEntryFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Flags = value;
}
inline ::System::Net::__CommandStream__PipelineEntry* System::Net::__CommandStream__PipelineEntry::New_ctor(::StringW command) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::__CommandStream__PipelineEntry*>(command));
}
inline void System::Net::__CommandStream__PipelineEntry::_ctor(::StringW command) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__CommandStream__PipelineEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, command);
}
inline ::System::Net::__CommandStream__PipelineEntry* System::Net::__CommandStream__PipelineEntry::New_ctor(::StringW command, ::System::Net::__CommandStream__PipelineEntryFlags flags) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::__CommandStream__PipelineEntry*>(command, flags));
}
inline void System::Net::__CommandStream__PipelineEntry::_ctor(::StringW command, ::System::Net::__CommandStream__PipelineEntryFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__CommandStream__PipelineEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__CommandStream__PipelineEntryFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, command, flags);
}
inline bool System::Net::__CommandStream__PipelineEntry::HasFlag(::System::Net::__CommandStream__PipelineEntryFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__CommandStream__PipelineEntry*>::get(), "HasFlag", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__CommandStream__PipelineEntryFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, flags);
}
// Ctor Parameters []
constexpr ::System::Net::__CommandStream__PipelineEntry::__CommandStream__PipelineEntry() {}
//  Writing Method size for method: ::System::Net::CommandStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)(::System::Net::Sockets::TcpClient*)>(&::System::Net::CommandStream::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2fc2d60;

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
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2fc2e78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)(bool)>(&::System::Net::CommandStream::Dispose)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2fc30a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.InvokeRequestCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)(::System::Object*)>(&::System::Net::CommandStream::InvokeRequestCallback)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2fc3134;

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
  constexpr static std::size_t addrs = 0x2fc31b4;

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
  constexpr static std::size_t addrs = 0x2fc31bc;

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
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2fc31d4;

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
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2fc37bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.BuildCommandsList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*> (
    ::System::Net::CommandStream::*)(::System::Net::WebRequest*)>(&::System::Net::CommandStream::BuildCommandsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc37cc;

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
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2fc37d4;

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
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2fc3854;

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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)(
    ::System::Net::WebRequest*, ::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*>, bool)>(
    &::System::Net::CommandStream::InitCommandPipeline)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2fc3254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "InitCommandPipeline", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.CheckContinuePipeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::CheckContinuePipeline)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2fc391c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "CheckContinuePipeline",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.ContinueCommandPipeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::ContinueCommandPipeline)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x2fc32e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "ContinueCommandPipeline",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.PostSendCommandProcessing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::CommandStream::*)(ByRef<::System::IO::Stream*>)>(
    &::System::Net::CommandStream::PostSendCommandProcessing)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2fc39e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "PostSendCommandProcessing", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Stream*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.PostReadCommandProcessing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::CommandStream::*)(ByRef<::System::IO::Stream*>)>(
    &::System::Net::CommandStream::PostReadCommandProcessing)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x2fc3e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "PostReadCommandProcessing", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Stream*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.PipelineCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__CommandStream__PipelineInstruction (::System::Net::CommandStream::*)(
    ::System::Net::__CommandStream__PipelineEntry*, ::System::Net::ResponseDescription*, bool, ByRef<::System::IO::Stream*>)>(&::System::Net::CommandStream::PipelineCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc4038;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.ReadCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::Net::CommandStream::ReadCallback)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x2fc4040;

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
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2fc489c;

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
  constexpr static std::size_t addrs = 0x2fc4b50;

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
  constexpr static std::size_t addrs = 0x2fc4b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "set_Encoding", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.CheckValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::CommandStream::*)(::System::Net::ResponseDescription*, ByRef<int32_t>, ByRef<int32_t>)>(
    &::System::Net::CommandStream::CheckValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc4b90;

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
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x2fc3b10;

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
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x2fc4348;

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
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequest*> const& System::Net::CommandStream::__cordl_internal_get__request() const {
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
constexpr ::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*>& System::Net::CommandStream::__cordl_internal_get__commands() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commands;
}
constexpr ::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*> const& System::Net::CommandStream::__cordl_internal_get__commands() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commands;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__commands(::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*> value) {
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
constexpr ::cordl_internals::to_const_pointer<::System::Net::ResponseDescription*> const& System::Net::CommandStream::__cordl_internal_get__currentResponseDescription() const {
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
constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& System::Net::CommandStream::__cordl_internal_get__encoding() const {
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
constexpr ::cordl_internals::to_const_pointer<::System::Text::Decoder*> const& System::Net::CommandStream::__cordl_internal_get__decoder() const {
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
inline ::System::Net::CommandStream* System::Net::CommandStream::New_ctor(::System::Net::Sockets::TcpClient* client) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::CommandStream*>(client));
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
inline ::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*>
System::Net::CommandStream::BuildCommandsList(::System::Net::WebRequest* request) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*>, false>(this, ___internal_method,
                                                                                                                                                                        request);
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
                                                            ::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*> commands, bool isAsync) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "InitCommandPipeline", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*>>::get(),
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
inline bool System::Net::CommandStream::PostSendCommandProcessing(ByRef<::System::IO::Stream*> stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "PostSendCommandProcessing", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Stream*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, stream);
}
inline bool System::Net::CommandStream::PostReadCommandProcessing(ByRef<::System::IO::Stream*> stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), "PostReadCommandProcessing", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Stream*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, stream);
}
inline ::System::Net::__CommandStream__PipelineInstruction
System::Net::CommandStream::PipelineCallback(::System::Net::__CommandStream__PipelineEntry* entry, ::System::Net::ResponseDescription* response, bool timeout, ByRef<::System::IO::Stream*> stream) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__CommandStream__PipelineInstruction, false>(this, ___internal_method, entry, response, timeout, stream);
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
inline bool System::Net::CommandStream::CheckValid(::System::Net::ResponseDescription* response, ByRef<int32_t> validThrough, ByRef<int32_t> completeLength) {
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
// Ctor Parameters []
constexpr ::System::Net::CommandStream::CommandStream() {}
