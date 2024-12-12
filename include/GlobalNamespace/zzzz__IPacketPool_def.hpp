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
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IPacketPool
class CORDL_TYPE IPacketPool {
public:
  // Declarations
  /// @brief Method Clear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Fill, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Fill();

  /// @brief Method Release, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Release(::GlobalNamespace::IPoolablePacket* t);

  // Ctor Parameters [CppParam { name: "", ty: "IPacketPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPacketPool(IPacketPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14808 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IPacketPool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPacketPool*, "", "IPacketPool");
