#pragma once
// IWYU pragma private; include "Oculus/Platform/LanguagePack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LanguagePack)
namespace Oculus::Platform::Models {
class AssetDetails;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class LanguagePack;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::LanguagePack);
// Type: Oculus.Platform::LanguagePack
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::LanguagePack*
class CORDL_TYPE LanguagePack : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetCurrent, addr 0x3f1520c, size 0x150, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* GetCurrent();

  /// @brief Method SetCurrent, addr 0x3f1535c, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* SetCurrent(::StringW tag);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LanguagePack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LanguagePack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LanguagePack(LanguagePack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LanguagePack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LanguagePack(LanguagePack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15402 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::LanguagePack, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::LanguagePack);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::LanguagePack*, "Oculus.Platform", "LanguagePack");
