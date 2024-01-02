#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IOperationCacheKey)
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::IOperationCacheKey);
// Type: UnityEngine.ResourceManagement.Util::IOperationCacheKey
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13969))
// CS Name: ::UnityEngine.ResourceManagement.Util::IOperationCacheKey*
class CORDL_TYPE IOperationCacheKey {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>*() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IOperationCacheKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IOperationCacheKey(IOperationCacheKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IOperationCacheKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IOperationCacheKey(IOperationCacheKey const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::IOperationCacheKey);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, "UnityEngine.ResourceManagement.Util", "IOperationCacheKey");
