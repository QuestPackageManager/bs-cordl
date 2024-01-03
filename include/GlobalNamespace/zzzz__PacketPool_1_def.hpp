#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PacketPool_1)
namespace GlobalNamespace {
template <typename T> class IPacketPool_1;
}
namespace GlobalNamespace {
class IPacketPool;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace System::Collections::Concurrent {
template <typename T> class ConcurrentBag_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::PacketPool_1);
// Type: ::PacketPool`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12809))
// CS Name: ::PacketPool`1<T>*
class CORDL_TYPE PacketPool_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bag, offset 0x10, size 0x8
  __declspec(property(get = __get__bag, put = __set__bag))::System::Collections::Concurrent::ConcurrentBag_1<T>* _bag;

  /// @brief Convert operator to "::GlobalNamespace::IPacketPool_1<T>"
  constexpr operator ::GlobalNamespace::IPacketPool_1<T>*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IPacketPool_1<T>"
  constexpr ::GlobalNamespace::IPacketPool_1<T>* i___GlobalNamespace__IPacketPool_1_T_() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPacketPool"
  constexpr operator ::GlobalNamespace::IPacketPool*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IPacketPool"
  constexpr ::GlobalNamespace::IPacketPool* i___GlobalNamespace__IPacketPool() noexcept;

  constexpr ::System::Collections::Concurrent::ConcurrentBag_1<T>*& __get__bag();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentBag_1<T>*> const& __get__bag() const;

  constexpr void __set__bag(::System::Collections::Concurrent::ConcurrentBag_1<T>* value);

  /// @brief Method Obtain, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T Obtain();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Release(T t);

  /// @brief Method Fill, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Fill();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method IPacketPool.Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void IPacketPool_Release(::GlobalNamespace::IPoolablePacket* o);

  static inline ::GlobalNamespace::PacketPool_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PacketPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PacketPool_1(PacketPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PacketPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PacketPool_1(PacketPool_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PacketPool_1();

public:
  /// @brief Field _bag, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentBag_1<T>* ____bag;

  /// @brief Field kMaxPoolSize offset 0xffffffff size 0x4
  static constexpr int32_t kMaxPoolSize{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::PacketPool_1, "", "PacketPool`1");
