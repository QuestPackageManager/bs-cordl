#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetSyncSetSessionPropertyResult)
namespace Oculus::Platform::Models {
class NetSyncSession;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class NetSyncSetSessionPropertyResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::NetSyncSetSessionPropertyResult);
// Type: Oculus.Platform.Models::NetSyncSetSessionPropertyResult
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13517))
// CS Name: ::Oculus.Platform.Models::NetSyncSetSessionPropertyResult*
class CORDL_TYPE NetSyncSetSessionPropertyResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field Session, offset 0x10, size 0x8
  __declspec(property(get = __get_Session, put = __set_Session))::Oculus::Platform::Models::NetSyncSession* Session;

  constexpr ::Oculus::Platform::Models::NetSyncSession*& __get_Session();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::NetSyncSession*> const& __get_Session() const;

  constexpr void __set_Session(::Oculus::Platform::Models::NetSyncSession* value);

  static inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* New_ctor(void* o);

  /// @brief Method .ctor addr 0x25b60d4 size 0xb0 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "NetSyncSetSessionPropertyResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetSyncSetSessionPropertyResult(NetSyncSetSessionPropertyResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetSyncSetSessionPropertyResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetSyncSetSessionPropertyResult(NetSyncSetSessionPropertyResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetSyncSetSessionPropertyResult();

public:
  /// @brief Field Session, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Platform::Models::NetSyncSession* ___Session;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::NetSyncSetSessionPropertyResult, ___Session) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::NetSyncSetSessionPropertyResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*, "Oculus.Platform.Models", "NetSyncSetSessionPropertyResult");
