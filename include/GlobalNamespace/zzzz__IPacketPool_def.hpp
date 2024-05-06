#pragma once
// IWYU pragma private; include "GlobalNamespace/IPacketPool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPacketPool)
namespace GlobalNamespace {
class IPoolablePacket;
}
// Forward declare root types
namespace GlobalNamespace {
class IPacketPool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IPacketPool);
// Type: ::IPacketPool
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IPacketPool*
class CORDL_TYPE IPacketPool {
public:
  // Declarations
  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Clear();

  /// @brief Method Fill, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Fill();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Release(::GlobalNamespace::IPoolablePacket* t);

  // Ctor Parameters [CppParam { name: "", ty: "IPacketPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPacketPool(IPacketPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPacketPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPacketPool(IPacketPool const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IPacketPool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPacketPool*, "", "IPacketPool");
