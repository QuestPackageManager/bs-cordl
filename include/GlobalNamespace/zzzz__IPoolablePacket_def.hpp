#pragma once
// IWYU pragma private; include "GlobalNamespace/IPoolablePacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPoolablePacket)
// Forward declare root types
namespace GlobalNamespace {
class IPoolablePacket;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IPoolablePacket);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IPoolablePacket
class CORDL_TYPE IPoolablePacket {
public:
  // Declarations
  /// @brief Method Release, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Release();

  // Ctor Parameters [CppParam { name: "", ty: "IPoolablePacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPoolablePacket(IPoolablePacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14810 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IPoolablePacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPoolablePacket*, "", "IPoolablePacket");
