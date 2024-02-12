#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Vrcamera)
namespace Oculus::Platform {
template <typename T> class __Message_1__Callback;
}
// Forward declare root types
namespace Oculus::Platform {
class Vrcamera;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Vrcamera);
// Type: Oculus.Platform::Vrcamera
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13298))
// CS Name: ::Oculus.Platform::Vrcamera*
class CORDL_TYPE Vrcamera : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetGetDataChannelMessageUpdateNotificationCallback, addr 0x2731f54, size 0x74, virtual false, abstract: false, final false
  static inline void SetGetDataChannelMessageUpdateNotificationCallback(::Oculus::Platform::__Message_1__Callback<::StringW>* callback);

  /// @brief Method SetGetSurfaceUpdateNotificationCallback, addr 0x2731fc8, size 0x74, virtual false, abstract: false, final false
  static inline void SetGetSurfaceUpdateNotificationCallback(::Oculus::Platform::__Message_1__Callback<::StringW>* callback);

  // Ctor Parameters [CppParam { name: "", ty: "Vrcamera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vrcamera(Vrcamera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vrcamera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vrcamera(Vrcamera const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vrcamera();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Vrcamera, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Vrcamera);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Vrcamera*, "Oculus.Platform", "Vrcamera");
