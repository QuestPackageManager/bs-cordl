#pragma once
// IWYU pragma private; include "GlobalNamespace/IPoolablePacket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPoolablePacket)
// Forward declare root types
namespace GlobalNamespace {
class IPoolablePacket;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IPoolablePacket*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IPoolablePacket*, "", "IPoolablePacket");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IPoolablePacket
class CORDL_TYPE IPoolablePacket {
public:
  // Declarations
  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Release();

  // Ctor Parameters [CppParam { name: "", ty: "IPoolablePacket", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPoolablePacket(IPoolablePacketconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18191 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
