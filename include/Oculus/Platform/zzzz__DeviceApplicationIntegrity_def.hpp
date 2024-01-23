#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DeviceApplicationIntegrity)
namespace Oculus::Platform {
template <typename T> class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class DeviceApplicationIntegrity;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::DeviceApplicationIntegrity);
// Type: Oculus.Platform::DeviceApplicationIntegrity
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13359))
// CS Name: ::Oculus.Platform::DeviceApplicationIntegrity*
class CORDL_TYPE DeviceApplicationIntegrity : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetIntegrityToken, addr 0x26fca64, size 0x160, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::StringW>* GetIntegrityToken(::StringW challenge_nonce);

  // Ctor Parameters [CppParam { name: "", ty: "DeviceApplicationIntegrity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeviceApplicationIntegrity(DeviceApplicationIntegrity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeviceApplicationIntegrity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeviceApplicationIntegrity(DeviceApplicationIntegrity const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeviceApplicationIntegrity();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::DeviceApplicationIntegrity, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::DeviceApplicationIntegrity);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::DeviceApplicationIntegrity*, "Oculus.Platform", "DeviceApplicationIntegrity");