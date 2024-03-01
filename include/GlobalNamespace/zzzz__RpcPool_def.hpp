#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RpcPool)
namespace GlobalNamespace {
class IRemoteProcedureCall;
}
// Forward declare root types
namespace GlobalNamespace {
class RpcPool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RpcPool);
// Type: ::RpcPool
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RpcPool*
class CORDL_TYPE RpcPool : public ::System::Object {
public:
  // Declarations
  /// @brief Method Fill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Fill();

  /// @brief Method Obtain, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Obtain();

  /// @brief Method Release, addr 0xec629c, size 0xfc, virtual false, abstract: false, final false
  static inline void Release(::GlobalNamespace::IRemoteProcedureCall* t);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RpcPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcPool(RpcPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcPool(RpcPool const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RpcPool, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RpcPool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RpcPool*, "", "RpcPool");
