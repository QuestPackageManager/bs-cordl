#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__IRemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
template <typename T> constexpr T& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::__cordl_internal_get__v() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____v;
}
template <typename T> constexpr T const& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::__cordl_internal_get__v() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____v;
}
template <typename T> constexpr void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::__cordl_internal_set__v(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____v)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline bool GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::get_hasValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                                                                             "get_hasValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::get_value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                                                                             "get_value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::Set(T v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(), "Set",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
template <typename T> inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                                                                             "Release", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
template <typename T> inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
template <typename T> inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>* GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>());
}
template <typename T> inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::__RemoteProcedureCall__TypeWrapper_1() {}
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.get_syncTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::RemoteProcedureCall::*)()>(&::GlobalNamespace::RemoteProcedureCall::get_syncTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10b2bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(), "get_syncTime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.set_syncTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)(int64_t)>(&::GlobalNamespace::RemoteProcedureCall::set_syncTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10b2bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(), "set_syncTime", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.SerializeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)(::LiteNetLib::Utils::NetDataWriter*, uint32_t)>(
    &::GlobalNamespace::RemoteProcedureCall::SerializeData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x10b2bbc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.DeserializeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)(::LiteNetLib::Utils::NetDataReader*, uint32_t)>(
    &::GlobalNamespace::RemoteProcedureCall::DeserializeData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x10b2bc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.LiteNetLib_Utils_INetSerializable_Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::RemoteProcedureCall::LiteNetLib_Utils_INetSerializable_Serialize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x10b2bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(), "LiteNetLib.Utils.INetSerializable.Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.LiteNetLib_Utils_INetSerializable_Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::RemoteProcedureCall::LiteNetLib_Utils_INetSerializable_Deserialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x10b2c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(), "LiteNetLib.Utils.INetSerializable.Deserialize",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)()>(&::GlobalNamespace::RemoteProcedureCall::Release)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x10b2c48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IRemoteProcedureCall* (::GlobalNamespace::RemoteProcedureCall::*)(int64_t)>(
    &::GlobalNamespace::RemoteProcedureCall::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10b2d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)()>(&::GlobalNamespace::RemoteProcedureCall::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10a79fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IRemoteProcedureCall"
constexpr GlobalNamespace::RemoteProcedureCall::operator ::GlobalNamespace::IRemoteProcedureCall*() noexcept {
  return static_cast<::GlobalNamespace::IRemoteProcedureCall*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRemoteProcedureCall"
constexpr ::GlobalNamespace::IRemoteProcedureCall* GlobalNamespace::RemoteProcedureCall::i___GlobalNamespace__IRemoteProcedureCall() noexcept {
  return static_cast<::GlobalNamespace::IRemoteProcedureCall*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::RemoteProcedureCall::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::RemoteProcedureCall::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::RemoteProcedureCall::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::RemoteProcedureCall::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
constexpr int64_t& GlobalNamespace::RemoteProcedureCall::__cordl_internal_get__syncTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncTime_k__BackingField;
}
constexpr int64_t const& GlobalNamespace::RemoteProcedureCall::__cordl_internal_get__syncTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncTime_k__BackingField;
}
constexpr void GlobalNamespace::RemoteProcedureCall::__cordl_internal_set__syncTime_k__BackingField(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____syncTime_k__BackingField = value;
}
inline int64_t GlobalNamespace::RemoteProcedureCall::get_syncTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(), "get_syncTime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::RemoteProcedureCall::set_syncTime(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(), "set_syncTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::RemoteProcedureCall::SerializeData(::LiteNetLib::Utils::NetDataWriter* writer, uint32_t protocolVersion) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, protocolVersion);
}
inline void GlobalNamespace::RemoteProcedureCall::DeserializeData(::LiteNetLib::Utils::NetDataReader* reader, uint32_t protocolVersion) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, protocolVersion);
}
inline void GlobalNamespace::RemoteProcedureCall::LiteNetLib_Utils_INetSerializable_Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(), "LiteNetLib.Utils.INetSerializable.Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::RemoteProcedureCall::LiteNetLib_Utils_INetSerializable_Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(), "LiteNetLib.Utils.INetSerializable.Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::RemoteProcedureCall::Release() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IRemoteProcedureCall* GlobalNamespace::RemoteProcedureCall::Init(int64_t syncTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IRemoteProcedureCall*, false>(this, ___internal_method, syncTime);
}
inline ::GlobalNamespace::RemoteProcedureCall* GlobalNamespace::RemoteProcedureCall::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RemoteProcedureCall*>());
}
inline void GlobalNamespace::RemoteProcedureCall::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RemoteProcedureCall::RemoteProcedureCall() {}
