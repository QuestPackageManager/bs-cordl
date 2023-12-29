#pragma once
#include "System/Net/Sockets/zzzz__SocketFlags_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketOperation_impl.hpp"
#include "System/zzzz__IOAsyncResult_impl.hpp"
#include "System/zzzz__Memory_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncResult_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncResult_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/Sockets/zzzz__SocketOperation_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::__SocketAsyncResult____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__SocketAsyncResult____c::*)()>(
    &::System::Net::Sockets::__SocketAsyncResult____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2780fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__SocketAsyncResult____c*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__SocketAsyncResult____c._Complete_b__27_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__SocketAsyncResult____c::*)(::System::Object*)>(
    &::System::Net::Sockets::__SocketAsyncResult____c::_Complete_b__27_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2780ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__SocketAsyncResult____c*>::get(), "<Complete>b__27_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::Sockets::__SocketAsyncResult____c::setStaticF___9(::System::Net::Sockets::__SocketAsyncResult____c* value) {
  ::cordl_internals::setStaticField<::System::Net::Sockets::__SocketAsyncResult____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__SocketAsyncResult____c*>::get>(
      std::forward<::System::Net::Sockets::__SocketAsyncResult____c*>(value));
}
inline ::System::Net::Sockets::__SocketAsyncResult____c* System::Net::Sockets::__SocketAsyncResult____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::Sockets::__SocketAsyncResult____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__SocketAsyncResult____c*>::get>();
}
inline void System::Net::Sockets::__SocketAsyncResult____c::setStaticF___9__27_0(::System::Threading::WaitCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::WaitCallback*, "<>9__27_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__SocketAsyncResult____c*>::get>(
      std::forward<::System::Threading::WaitCallback*>(value));
}
inline ::System::Threading::WaitCallback* System::Net::Sockets::__SocketAsyncResult____c::getStaticF___9__27_0() {
  return ::cordl_internals::getStaticField<::System::Threading::WaitCallback*, "<>9__27_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__SocketAsyncResult____c*>::get>();
}
inline ::System::Net::Sockets::__SocketAsyncResult____c* System::Net::Sockets::__SocketAsyncResult____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Sockets::__SocketAsyncResult____c*>());
}
inline void System::Net::Sockets::__SocketAsyncResult____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__SocketAsyncResult____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::__SocketAsyncResult____c::_Complete_b__27_0(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__SocketAsyncResult____c*>::get(), "<Complete>b__27_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::__SocketAsyncResult____c::__SocketAsyncResult____c() {}
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.get_Handle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::System::Net::Sockets::SocketAsyncResult::*)()>(&::System::Net::Sockets::SocketAsyncResult::get_Handle)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2780cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), "get_Handle",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)()>(&::System::Net::Sockets::SocketAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2780994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(
    ::System::Net::Sockets::Socket*, ::System::AsyncCallback*, ::System::Object*, ::System::Net::Sockets::SocketOperation)>(&::System::Net::Sockets::SocketAsyncResult::Init)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2780d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), "Init", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOperation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(
    ::System::Net::Sockets::Socket*, ::System::AsyncCallback*, ::System::Object*, ::System::Net::Sockets::SocketOperation)>(&::System::Net::Sockets::SocketAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2780e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOperation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.get_ErrorCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::SocketError (::System::Net::Sockets::SocketAsyncResult::*)()>(
    &::System::Net::Sockets::SocketAsyncResult::get_ErrorCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2780e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                                                                               "get_ErrorCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.CheckIfThrowDelayedException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)()>(
    &::System::Net::Sockets::SocketAsyncResult::CheckIfThrowDelayedException)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2780ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                                                                               "CheckIfThrowDelayedException", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.CompleteDisposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)()>(
    &::System::Net::Sockets::SocketAsyncResult::CompleteDisposed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2780f68;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)()>(&::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x277cc08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), "Complete",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(bool)>(&::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2780f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), "Complete", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(int32_t)>(&::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277d6c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), "Complete", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(::System::Exception*, bool)>(
    &::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2780f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), "Complete", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(::System::Exception*)>(
    &::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277c480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), "Complete", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(::System::Net::Sockets::Socket*)>(
    &::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277c488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), "Complete", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(::System::Net::Sockets::Socket*, int32_t)>(
    &::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x277c6d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), "Complete", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& System::Net::Sockets::SocketAsyncResult::__get_socket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___socket;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& System::Net::Sockets::SocketAsyncResult::__get_socket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___socket;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_socket(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___socket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Sockets::SocketOperation& System::Net::Sockets::SocketAsyncResult::__get_operation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___operation;
}
constexpr ::System::Net::Sockets::SocketOperation const& System::Net::Sockets::SocketAsyncResult::__get_operation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___operation;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_operation(::System::Net::Sockets::SocketOperation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___operation = value;
}
constexpr ::System::Exception*& System::Net::Sockets::SocketAsyncResult::__get_DelayedException() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DelayedException;
}
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& System::Net::Sockets::SocketAsyncResult::__get_DelayedException() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DelayedException;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_DelayedException(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DelayedException)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::EndPoint*& System::Net::Sockets::SocketAsyncResult::__get_EndPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndPoint;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::EndPoint*> const& System::Net::Sockets::SocketAsyncResult::__get_EndPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndPoint;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_EndPoint(::System::Net::EndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___EndPoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Memory_1<uint8_t>& System::Net::Sockets::SocketAsyncResult::__get_Buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffer;
}
constexpr ::System::Memory_1<uint8_t> const& System::Net::Sockets::SocketAsyncResult::__get_Buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffer;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Buffer(::System::Memory_1<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Buffer = value;
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__get_Offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Offset;
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__get_Offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Offset;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Offset = value;
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__get_Size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__get_Size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Size = value;
}
constexpr ::System::Net::Sockets::SocketFlags& System::Net::Sockets::SocketAsyncResult::__get_SockFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SockFlags;
}
constexpr ::System::Net::Sockets::SocketFlags const& System::Net::Sockets::SocketAsyncResult::__get_SockFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SockFlags;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_SockFlags(::System::Net::Sockets::SocketFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SockFlags = value;
}
constexpr ::System::Net::Sockets::Socket*& System::Net::Sockets::SocketAsyncResult::__get_AcceptSocket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AcceptSocket;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& System::Net::Sockets::SocketAsyncResult::__get_AcceptSocket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AcceptSocket;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_AcceptSocket(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AcceptSocket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>& System::Net::Sockets::SocketAsyncResult::__get_Addresses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Addresses;
}
constexpr ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> const& System::Net::Sockets::SocketAsyncResult::__get_Addresses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Addresses;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Addresses(::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Addresses)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__get_Port() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Port;
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__get_Port() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Port;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Port(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Port = value;
}
constexpr ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*& System::Net::Sockets::SocketAsyncResult::__get_Buffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*> const& System::Net::Sockets::SocketAsyncResult::__get_Buffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffers;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Buffers(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Buffers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::Sockets::SocketAsyncResult::__get_ReuseSocket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReuseSocket;
}
constexpr bool const& System::Net::Sockets::SocketAsyncResult::__get_ReuseSocket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReuseSocket;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_ReuseSocket(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ReuseSocket = value;
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__get_CurrentAddress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentAddress;
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__get_CurrentAddress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentAddress;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_CurrentAddress(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CurrentAddress = value;
}
constexpr ::System::Net::Sockets::Socket*& System::Net::Sockets::SocketAsyncResult::__get_AcceptedSocket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AcceptedSocket;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& System::Net::Sockets::SocketAsyncResult::__get_AcceptedSocket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AcceptedSocket;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_AcceptedSocket(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AcceptedSocket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__get_Total() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Total;
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__get_Total() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Total;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Total(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Total = value;
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__get_error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__get_error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_error(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___error = value;
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__get_EndCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndCalled;
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__get_EndCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndCalled;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_EndCalled(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EndCalled = value;
}
inline void* System::Net::Sockets::SocketAsyncResult::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), "get_Handle",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method);
}
inline ::System::Net::Sockets::SocketAsyncResult* System::Net::Sockets::SocketAsyncResult::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Sockets::SocketAsyncResult*>());
}
inline void System::Net::Sockets::SocketAsyncResult::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncResult::Init(::System::Net::Sockets::Socket* socket, ::System::AsyncCallback* callback, ::System::Object* state,
                                                          ::System::Net::Sockets::SocketOperation operation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), "Init", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOperation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, socket, callback, state, operation);
}
inline ::System::Net::Sockets::SocketAsyncResult* System::Net::Sockets::SocketAsyncResult::New_ctor(::System::Net::Sockets::Socket* socket, ::System::AsyncCallback* callback, ::System::Object* state,
                                                                                                    ::System::Net::Sockets::SocketOperation operation) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Sockets::SocketAsyncResult*>(socket, callback, state, operation));
}
inline void System::Net::Sockets::SocketAsyncResult::_ctor(::System::Net::Sockets::Socket* socket, ::System::AsyncCallback* callback, ::System::Object* state,
                                                           ::System::Net::Sockets::SocketOperation operation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOperation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, socket, callback, state, operation);
}
inline ::System::Net::Sockets::SocketError System::Net::Sockets::SocketAsyncResult::get_ErrorCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), "get_ErrorCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::SocketError, false>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncResult::CheckIfThrowDelayedException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                                                                             "CheckIfThrowDelayedException", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncResult::CompleteDisposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                                                                             "CompleteDisposed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), "Complete",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete(bool synch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), "Complete", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, synch);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete(int32_t total) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), "Complete", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, total);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete(::System::Exception* e, bool synch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), "Complete", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, synch);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete(::System::Exception* e) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), "Complete", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete(::System::Net::Sockets::Socket* s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), "Complete", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete(::System::Net::Sockets::Socket* s, int32_t total) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(), "Complete", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s, total);
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::SocketAsyncResult::SocketAsyncResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
