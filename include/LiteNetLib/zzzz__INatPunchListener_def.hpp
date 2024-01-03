#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(INatPunchListener)
namespace System::Net {
class IPEndPoint;
}
namespace LiteNetLib {
struct NatAddressType;
}
// Forward declare root types
namespace LiteNetLib {
class INatPunchListener;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::INatPunchListener);
// Type: LiteNetLib::INatPunchListener
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14145))
// CS Name: ::LiteNetLib::INatPunchListener*
class CORDL_TYPE INatPunchListener {
public:
  // Declarations
  /// @brief Method OnNatIntroductionRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnNatIntroductionRequest(::System::Net::IPEndPoint* localEndPoint, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW token);

  /// @brief Method OnNatIntroductionSuccess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnNatIntroductionSuccess(::System::Net::IPEndPoint* targetEndPoint, ::LiteNetLib::NatAddressType type, ::StringW token);

  // Ctor Parameters [CppParam { name: "", ty: "INatPunchListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INatPunchListener(INatPunchListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INatPunchListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INatPunchListener(INatPunchListener const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::INatPunchListener);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::INatPunchListener*, "LiteNetLib", "INatPunchListener");
