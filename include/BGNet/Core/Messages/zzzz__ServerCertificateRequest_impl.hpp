#pragma once
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGNet/Core/Messages/zzzz__ServerCertificateRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "BGNet/Core/Messages/zzzz__IHandshakeServerToClientMessage_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "BGNet/Core/Messages/zzzz__IHandshakeMessage_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ByteArrayNetSerializable_def.hpp"
#include "BGNet/Core/Messages/zzzz__ServerCertificateRequest_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
//  Writing Method size for method: ::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::*)(int32_t)>(
    &::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xde32a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::*)()>(
    &::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xde398c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::*)()>(
    &::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xde3990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5*>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5.System_Collections_Generic_IEnumerator_System_Byte____get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::*)()>(
        &::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::System_Collections_Generic_IEnumerator_System_Byte____get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde3a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Byte[]>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::*)()>(
    &::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xde3a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::*)()>(
    &::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde3a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5.System_Collections_Generic_IEnumerable_System_Byte____GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::*)()>(
        &::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::System_Collections_Generic_IEnumerable_System_Byte____GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xde3a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5*>::get(),
                                                 "System.Collections.Generic.IEnumerable<System.Byte[]>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerator* (::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::*)()>(
        &::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xde3b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t,::Array<uint8_t>*>>"
constexpr BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::operator ::System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::ArrayW<uint8_t,::Array<uint8_t>*>>"
constexpr BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::operator ::System::Collections::Generic::IEnumerator_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::__set___2__current(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::BGNet::Core::Messages::ServerCertificateRequest*& BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::Messages::ServerCertificateRequest*> const&
BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::__set___4__this(::BGNet::Core::Messages::ServerCertificateRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::__get__i_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
constexpr int32_t const& BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::__get__i_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
constexpr void BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::__set__i_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__2 = value;
}
inline ::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5* BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5*>(__1__state));
}
inline void BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5*>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::System_Collections_Generic_IEnumerator_System_Byte____get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Byte[]>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*
BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::System_Collections_Generic_IEnumerable_System_Byte____GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5*>::get(),
                                               "System.Collections.Generic.IEnumerable<System.Byte[]>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5::__ServerCertificateRequest___get_certificateList_d__5() {}
//  Writing Method size for method: ::BGNet::Core::Messages::ServerCertificateRequest.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ServerCertificateRequest*>* (*)()>(
    &::BGNet::Core::Messages::ServerCertificateRequest::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xde00ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ServerCertificateRequest*>::get(),
                                                                               "get_pool", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::ServerCertificateRequest.get_certificateList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (
    ::BGNet::Core::Messages::ServerCertificateRequest::*)()>(&::BGNet::Core::Messages::ServerCertificateRequest::get_certificateList)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xdddb74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ServerCertificateRequest*>::get(),
                                                                               "get_certificateList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::ServerCertificateRequest.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::Messages::ServerCertificateRequest* (
    ::BGNet::Core::Messages::ServerCertificateRequest::*)(::System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*)>(
    &::BGNet::Core::Messages::ServerCertificateRequest::Init)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0xde1b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ServerCertificateRequest*>::get(), "Init", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::ServerCertificateRequest.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::ServerCertificateRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::BGNet::Core::Messages::ServerCertificateRequest::Serialize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xde32d4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ServerCertificateRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ServerCertificateRequest*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::ServerCertificateRequest.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::ServerCertificateRequest::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::BGNet::Core::Messages::ServerCertificateRequest::Deserialize)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xde3358;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ServerCertificateRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ServerCertificateRequest*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::ServerCertificateRequest.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::ServerCertificateRequest::*)()>(
    &::BGNet::Core::Messages::ServerCertificateRequest::Release)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xde349c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ServerCertificateRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ServerCertificateRequest*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::ServerCertificateRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::ServerCertificateRequest::*)()>(
    &::BGNet::Core::Messages::ServerCertificateRequest::_ctor)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0xde353c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ServerCertificateRequest*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BGNet::Core::Messages::IHandshakeServerToClientMessage"
constexpr BGNet::Core::Messages::ServerCertificateRequest::operator ::BGNet::Core::Messages::IHandshakeServerToClientMessage*() noexcept {
  return static_cast<::BGNet::Core::Messages::IHandshakeServerToClientMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IHandshakeMessage"
constexpr BGNet::Core::Messages::ServerCertificateRequest::operator ::BGNet::Core::Messages::IHandshakeMessage*() noexcept {
  return static_cast<::BGNet::Core::Messages::IHandshakeMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
constexpr BGNet::Core::Messages::ServerCertificateRequest::operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr BGNet::Core::Messages::ServerCertificateRequest::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr BGNet::Core::Messages::ServerCertificateRequest::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::GlobalNamespace::ByteArrayNetSerializable*, ::Array<::GlobalNamespace::ByteArrayNetSerializable*>*>& BGNet::Core::Messages::ServerCertificateRequest::__get__certificateList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certificateList;
}
constexpr ::ArrayW<::GlobalNamespace::ByteArrayNetSerializable*, ::Array<::GlobalNamespace::ByteArrayNetSerializable*>*> const&
BGNet::Core::Messages::ServerCertificateRequest::__get__certificateList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certificateList;
}
constexpr void
BGNet::Core::Messages::ServerCertificateRequest::__set__certificateList(::ArrayW<::GlobalNamespace::ByteArrayNetSerializable*, ::Array<::GlobalNamespace::ByteArrayNetSerializable*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____certificateList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& BGNet::Core::Messages::ServerCertificateRequest::__get__certificateCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certificateCount;
}
constexpr int32_t const& BGNet::Core::Messages::ServerCertificateRequest::__get__certificateCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certificateCount;
}
constexpr void BGNet::Core::Messages::ServerCertificateRequest::__set__certificateCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____certificateCount = value;
}
inline ::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ServerCertificateRequest*>* BGNet::Core::Messages::ServerCertificateRequest::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ServerCertificateRequest*>::get(),
                                                                             "get_pool", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ServerCertificateRequest*>*, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* BGNet::Core::Messages::ServerCertificateRequest::get_certificateList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ServerCertificateRequest*>::get(),
                                                                             "get_certificateList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(this, ___internal_method);
}
inline ::BGNet::Core::Messages::ServerCertificateRequest*
BGNet::Core::Messages::ServerCertificateRequest::Init(::System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* certificateList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ServerCertificateRequest*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGNet::Core::Messages::ServerCertificateRequest*, false>(this, ___internal_method, certificateList);
}
inline void BGNet::Core::Messages::ServerCertificateRequest::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ServerCertificateRequest*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void BGNet::Core::Messages::ServerCertificateRequest::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ServerCertificateRequest*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void BGNet::Core::Messages::ServerCertificateRequest::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ServerCertificateRequest*>::get(),
                                                                             "Release", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGNet::Core::Messages::ServerCertificateRequest* BGNet::Core::Messages::ServerCertificateRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::Messages::ServerCertificateRequest*>());
}
inline void BGNet::Core::Messages::ServerCertificateRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ServerCertificateRequest*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::ServerCertificateRequest::ServerCertificateRequest() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
