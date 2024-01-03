#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Media)
namespace Oculus::Platform::Models {
class ShareMediaResult;
}
namespace Oculus::Platform {
struct MediaContentType;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class Media;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Media);
// Type: Oculus.Platform::Media
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13365))
// CS Name: ::Oculus.Platform::Media*
class CORDL_TYPE Media : public ::System::Object {
public:
  // Declarations
  /// @brief Method ShareToFacebook, addr 0x26feb34, size 0x178, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ShareMediaResult*>* ShareToFacebook(::StringW postTextSuggestion, ::StringW filePath,
                                                                                                              ::Oculus::Platform::MediaContentType contentType);

  // Ctor Parameters [CppParam { name: "", ty: "Media", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Media(Media&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Media", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Media(Media const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Media();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Media, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Media);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Media*, "Oculus.Platform", "Media");
