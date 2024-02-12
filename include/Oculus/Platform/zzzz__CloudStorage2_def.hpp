#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CloudStorage2)
namespace Oculus::Platform {
template <typename T> class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class CloudStorage2;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::CloudStorage2);
// Type: Oculus.Platform::CloudStorage2
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13286))
// CS Name: ::Oculus.Platform::CloudStorage2*
class CORDL_TYPE CloudStorage2 : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetUserDirectoryPath, addr 0x272dc98, size 0x15c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::StringW>* GetUserDirectoryPath();

  // Ctor Parameters [CppParam { name: "", ty: "CloudStorage2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CloudStorage2(CloudStorage2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CloudStorage2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CloudStorage2(CloudStorage2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CloudStorage2();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::CloudStorage2, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::CloudStorage2);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::CloudStorage2*, "Oculus.Platform", "CloudStorage2");
