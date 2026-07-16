#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticPacketPoolProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StaticPacketPoolProvider_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StaticPacketPoolProvider.TryGetPacketPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::by_ref<::GlobalNamespace::IPacketPool*>)>(&::GlobalNamespace::StaticPacketPoolProvider::TryGetPacketPool)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3333dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticPacketPoolProvider*>(),
                                                             { "TryGetPacketPool", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::IPacketPool*>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StaticPacketPoolProvider::setStaticF__staticPools(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::GlobalNamespace::IPacketPool*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::GlobalNamespace::IPacketPool*>*, "_staticPools",
                                    ::GlobalNamespace::StaticPacketPoolProvider*>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::GlobalNamespace::IPacketPool*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::GlobalNamespace::IPacketPool*>* GlobalNamespace::StaticPacketPoolProvider::getStaticF__staticPools() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::GlobalNamespace::IPacketPool*>*, "_staticPools",
                                           ::GlobalNamespace::StaticPacketPoolProvider*>();
}
template <typename T> inline ::GlobalNamespace::PacketPool_1<T>* GlobalNamespace::StaticPacketPoolProvider::GetPacketPool() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticPacketPoolProvider*>(), { "GetPacketPool", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<T>*>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::StaticPacketPoolProvider::TryGetPacketPool(::System::Type* t, ::by_ref<::GlobalNamespace::IPacketPool*> pool) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticPacketPoolProvider*>(),
                                                           { "TryGetPacketPool", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::IPacketPool*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t, pool);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StaticPacketPoolProvider::StaticPacketPoolProvider() {}
