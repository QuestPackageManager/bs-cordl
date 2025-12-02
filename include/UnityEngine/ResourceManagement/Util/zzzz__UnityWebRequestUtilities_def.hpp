#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/UnityWebRequestUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityWebRequestUtilities)
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::ResourceManagement::Util {
class UnityWebRequestResult;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class UnityWebRequestUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities);
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.UnityWebRequestUtilities
class CORDL_TYPE UnityWebRequestUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsAssetBundleDownloaded, addr 0x66f129c, size 0xa0, virtual false, abstract: false, final false
  static inline bool IsAssetBundleDownloaded(::UnityEngine::Networking::UnityWebRequestAsyncOperation* op);

  /// @brief Method Log, addr 0x66f8b50, size 0x5c, virtual false, abstract: false, final false
  static inline void Log(::StringW msg);

  /// @brief Method LogError, addr 0x66f8af4, size 0x5c, virtual false, abstract: false, final false
  static inline void LogError(::StringW msg);

  /// @brief Method LogOperationResult, addr 0x66f8a20, size 0xd4, virtual false, abstract: false, final false
  static inline void LogOperationResult(::UnityEngine::AsyncOperation* op);

  static inline ::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities* New_ctor();

  /// @brief Method RequestHasErrors, addr 0x66f881c, size 0x124, virtual false, abstract: false, final false
  static inline bool RequestHasErrors(::UnityEngine::Networking::UnityWebRequest* webReq, ::ByRef<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*> result);

  /// @brief Method .ctor, addr 0x66f8bac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityWebRequestUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityWebRequestUtilities(UnityWebRequestUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityWebRequestUtilities(UnityWebRequestUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18711 };

  /// @brief Field k_AddressablesLogConditional offset 0xffffffff size 0x8
  static constexpr ::ConstString k_AddressablesLogConditional{ u"ADDRESSABLES_LOG_ALL" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*, "UnityEngine.ResourceManagement.Util", "UnityWebRequestUtilities");
