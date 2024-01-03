#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IPoolableSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentBag_1_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PoolableSerializable.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::PoolableSerializable::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x12a61d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(),
                                                                               "NoDomainReloadInit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoolableSerializable.Retain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PoolableSerializable::*)()>(&::GlobalNamespace::PoolableSerializable::Retain)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x12a5dac;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoolableSerializable.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PoolableSerializable::*)()>(&::GlobalNamespace::PoolableSerializable::Release)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x12a5ca0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoolableSerializable.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PoolableSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::PoolableSerializable::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoolableSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PoolableSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::PoolableSerializable::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoolableSerializable.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::IPoolableSerializable*)>(&::GlobalNamespace::PoolableSerializable::Release)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x12a6250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(), "Release", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPoolableSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoolableSerializable.GetPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Concurrent::ConcurrentBag_1<::GlobalNamespace::IPoolableSerializable*>* (*)(::System::Type*)>(
    &::GlobalNamespace::PoolableSerializable::GetPool)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x12a631c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(), "GetPool", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoolableSerializable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PoolableSerializable::*)()>(&::GlobalNamespace::PoolableSerializable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12a46d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IPoolableSerializable"
constexpr GlobalNamespace::PoolableSerializable::operator ::GlobalNamespace::IPoolableSerializable*() noexcept {
  return static_cast<::GlobalNamespace::IPoolableSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolableSerializable"
constexpr ::GlobalNamespace::IPoolableSerializable* GlobalNamespace::PoolableSerializable::i___GlobalNamespace__IPoolableSerializable() noexcept {
  return static_cast<::GlobalNamespace::IPoolableSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::PoolableSerializable::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::PoolableSerializable::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::PoolableSerializable::__get__referenceCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceCount;
}
constexpr int32_t const& GlobalNamespace::PoolableSerializable::__get__referenceCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceCount;
}
constexpr void GlobalNamespace::PoolableSerializable::__set__referenceCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____referenceCount = value;
}
inline void GlobalNamespace::PoolableSerializable::setStaticF__pools(
    ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Collections::Concurrent::ConcurrentBag_1<::GlobalNamespace::IPoolableSerializable*>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Collections::Concurrent::ConcurrentBag_1<::GlobalNamespace::IPoolableSerializable*>*>*, "_pools",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Collections::Concurrent::ConcurrentBag_1<::GlobalNamespace::IPoolableSerializable*>*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Collections::Concurrent::ConcurrentBag_1<::GlobalNamespace::IPoolableSerializable*>*>*
GlobalNamespace::PoolableSerializable::getStaticF__pools() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Collections::Concurrent::ConcurrentBag_1<::GlobalNamespace::IPoolableSerializable*>*>*, "_pools",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get>();
}
inline void GlobalNamespace::PoolableSerializable::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(),
                                                                             "NoDomainReloadInit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PoolableSerializable::Retain() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PoolableSerializable::Release() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PoolableSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::PoolableSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
template <typename T> inline T GlobalNamespace::PoolableSerializable::Obtain() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(), "Obtain",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PoolableSerializable::Release(::GlobalNamespace::IPoolableSerializable* t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(), "Release", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPoolableSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t);
}
inline ::System::Collections::Concurrent::ConcurrentBag_1<::GlobalNamespace::IPoolableSerializable*>* GlobalNamespace::PoolableSerializable::GetPool(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(), "GetPool", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Concurrent::ConcurrentBag_1<::GlobalNamespace::IPoolableSerializable*>*, false>(nullptr, ___internal_method, t);
}
inline ::GlobalNamespace::PoolableSerializable* GlobalNamespace::PoolableSerializable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PoolableSerializable*>());
}
inline void GlobalNamespace::PoolableSerializable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoolableSerializable*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PoolableSerializable::PoolableSerializable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
