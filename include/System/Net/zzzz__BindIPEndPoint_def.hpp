#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BindIPEndPoint)
namespace System::Net {
class ServicePoint;
}
namespace System {
class Object;
}
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace System::Net {
class BindIPEndPoint;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::BindIPEndPoint);
// Type: System.Net::BindIPEndPoint
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9150))
// CS Name: ::System.Net::BindIPEndPoint*
class CORDL_TYPE BindIPEndPoint : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Net::BindIPEndPoint* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x29bbeb8, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x29bbfe8, size 0x14, virtual true, abstract: false, final false
  inline ::System::Net::IPEndPoint* Invoke(::System::Net::ServicePoint* servicePoint, ::System::Net::IPEndPoint* remoteEndPoint, int32_t retryCount);

  // Ctor Parameters [CppParam { name: "", ty: "BindIPEndPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindIPEndPoint(BindIPEndPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindIPEndPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindIPEndPoint(BindIPEndPoint const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindIPEndPoint();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::BindIPEndPoint, 0x80>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::BindIPEndPoint);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::BindIPEndPoint*, "System.Net", "BindIPEndPoint");
