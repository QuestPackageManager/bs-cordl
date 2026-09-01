#pragma once
// IWYU pragma private; include "GlobalNamespace\PoolableSerializable.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::PoolableSerializable::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3781284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), { "NoDomainReloadInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoolableSerializable.Retain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PoolableSerializable::*)()>(&::GlobalNamespace::PoolableSerializable::Retain)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3780e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), { ::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoolableSerializable.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PoolableSerializable::*)()>(&::GlobalNamespace::PoolableSerializable::Release)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3780d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), { ::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoolableSerializable.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PoolableSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::PoolableSerializable::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), { ::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoolableSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PoolableSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::PoolableSerializable::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), { ::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoolableSerializable.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::IPoolableSerializable*)>(&::GlobalNamespace::PoolableSerializable::Release)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3781304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), { "Release", {}, { ::i2c::type_of<::GlobalNamespace::IPoolableSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoolableSerializable.GetPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Concurrent::ConcurrentBag_1<::GlobalNamespace::IPoolableSerializable*>* (*)(::System::Type*)>(
    &::GlobalNamespace::PoolableSerializable::GetPool)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x37813dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), { "GetPool", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoolableSerializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PoolableSerializable::*)()>(&::GlobalNamespace::PoolableSerializable::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x377f538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PoolableSerializable::__cordl_internal_get__referenceCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceCount;
}
constexpr int32_t const& GlobalNamespace::PoolableSerializable::__cordl_internal_get__referenceCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceCount;
}
constexpr void GlobalNamespace::PoolableSerializable::__cordl_internal_set__referenceCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____referenceCount = value;
}
inline void GlobalNamespace::PoolableSerializable::setStaticF__pools(
    ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Collections::Concurrent::ConcurrentBag_1<::GlobalNamespace::IPoolableSerializable*>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Collections::Concurrent::ConcurrentBag_1<::GlobalNamespace::IPoolableSerializable*>*>*, "_pools",
      ::GlobalNamespace::PoolableSerializable*>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Collections::Concurrent::ConcurrentBag_1<::GlobalNamespace::IPoolableSerializable*>*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Collections::Concurrent::ConcurrentBag_1<::GlobalNamespace::IPoolableSerializable*>*>*
GlobalNamespace::PoolableSerializable::getStaticF__pools() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Collections::Concurrent::ConcurrentBag_1<::GlobalNamespace::IPoolableSerializable*>*>*, "_pools",
      ::GlobalNamespace::PoolableSerializable*>();
}
inline void GlobalNamespace::PoolableSerializable::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), { "NoDomainReloadInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PoolableSerializable::Retain() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PoolableSerializable::Release() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PoolableSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::PoolableSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
template <typename T> inline T GlobalNamespace::PoolableSerializable::Obtain() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), { "Obtain", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PoolableSerializable::Release(::GlobalNamespace::IPoolableSerializable* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), { "Release", {}, { ::i2c::type_of<::GlobalNamespace::IPoolableSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t);
}
inline ::System::Collections::Concurrent::ConcurrentBag_1<::GlobalNamespace::IPoolableSerializable*>* GlobalNamespace::PoolableSerializable::GetPool(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), { "GetPool", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Concurrent::ConcurrentBag_1<::GlobalNamespace::IPoolableSerializable*>*>(nullptr, ___internal_method, t);
}
inline void GlobalNamespace::PoolableSerializable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoolableSerializable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PoolableSerializable* GlobalNamespace::PoolableSerializable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PoolableSerializable*>());
}
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
// Ctor Parameters []
constexpr ::GlobalNamespace::PoolableSerializable::PoolableSerializable() {}
