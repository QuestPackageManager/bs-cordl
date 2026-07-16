#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/IOperationCacheKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, "UnityEngine.ResourceManagement.Util", "IOperationCacheKey");
// Dependencies
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.IOperationCacheKey
class CORDL_TYPE IOperationCacheKey {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>*() noexcept;

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>"
  constexpr ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>* i___System__IEquatable_1___UnityEngine__ResourceManagement__Util__IOperationCacheKey__() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IOperationCacheKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IOperationCacheKey(IOperationCacheKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18710 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Util
