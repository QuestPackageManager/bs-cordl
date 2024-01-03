#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NetPacketPool_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "LiteNetLib/zzzz__PacketProperty_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLockSlim_def.hpp"
//  Writing Method size for method: ::LiteNetLib::NetPacketPool.GetWithData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPacket* (
    ::LiteNetLib::NetPacketPool::*)(::LiteNetLib::PacketProperty, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::LiteNetLib::NetPacketPool::GetWithData)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x220152c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketPool*>::get(), "GetWithData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::PacketProperty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacketPool.GetWithProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPacket* (::LiteNetLib::NetPacketPool::*)(::LiteNetLib::PacketProperty, int32_t)>(
    &::LiteNetLib::NetPacketPool::GetWithProperty)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x21ff0b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketPool*>::get(), "GetWithProperty", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::PacketProperty>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacketPool.GetWithProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPacket* (::LiteNetLib::NetPacketPool::*)(::LiteNetLib::PacketProperty)>(
    &::LiteNetLib::NetPacketPool::GetWithProperty)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21ffc58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketPool*>::get(), "GetWithProperty", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::PacketProperty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacketPool.GetPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPacket* (::LiteNetLib::NetPacketPool::*)(int32_t)>(&::LiteNetLib::NetPacketPool::GetPacket)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x21fd95c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketPool*>::get(), "GetPacket", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacketPool.Recycle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPacketPool::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::NetPacketPool::Recycle)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x21fc4a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketPool*>::get(), "Recycle", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacketPool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPacketPool::*)()>(&::LiteNetLib::NetPacketPool::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x21fd208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketPool*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*>& LiteNetLib::NetPacketPool::__get__pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pool;
}
constexpr ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> const& LiteNetLib::NetPacketPool::__get__pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pool;
}
constexpr void LiteNetLib::NetPacketPool::__set__pool(::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ReaderWriterLockSlim*& LiteNetLib::NetPacketPool::__get__lock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLockSlim*> const& LiteNetLib::NetPacketPool::__get__lock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
constexpr void LiteNetLib::NetPacketPool::__set__lock(::System::Threading::ReaderWriterLockSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& LiteNetLib::NetPacketPool::__get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr int32_t const& LiteNetLib::NetPacketPool::__get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr void LiteNetLib::NetPacketPool::__set__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
inline ::LiteNetLib::NetPacket* LiteNetLib::NetPacketPool::GetWithData(::LiteNetLib::PacketProperty property, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketPool*>::get(), "GetWithData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::PacketProperty>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPacket*, false>(this, ___internal_method, property, data, start, length);
}
inline ::LiteNetLib::NetPacket* LiteNetLib::NetPacketPool::GetWithProperty(::LiteNetLib::PacketProperty property, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketPool*>::get(), "GetWithProperty", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::PacketProperty>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPacket*, false>(this, ___internal_method, property, size);
}
inline ::LiteNetLib::NetPacket* LiteNetLib::NetPacketPool::GetWithProperty(::LiteNetLib::PacketProperty property) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketPool*>::get(), "GetWithProperty", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::PacketProperty>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPacket*, false>(this, ___internal_method, property);
}
inline ::LiteNetLib::NetPacket* LiteNetLib::NetPacketPool::GetPacket(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketPool*>::get(), "GetPacket", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPacket*, false>(this, ___internal_method, size);
}
inline void LiteNetLib::NetPacketPool::Recycle(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketPool*>::get(), "Recycle", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet);
}
inline ::LiteNetLib::NetPacketPool* LiteNetLib::NetPacketPool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::NetPacketPool*>());
}
inline void LiteNetLib::NetPacketPool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketPool*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetPacketPool::NetPacketPool() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
