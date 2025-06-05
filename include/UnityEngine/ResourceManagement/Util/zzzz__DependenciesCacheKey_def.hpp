#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/DependenciesCacheKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IOperationCacheKey_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DependenciesCacheKey)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class DependenciesCacheKey;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::DependenciesCacheKey);
// Dependencies System.IEquatable`1<T>, System.Object, UnityEngine.ResourceManagement.Util.IOperationCacheKey
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.DependenciesCacheKey
class CORDL_TYPE DependenciesCacheKey : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Dependencies, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Dependencies,
                      put = __cordl_internal_set_m_Dependencies)) ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* m_Dependencies;

  /// @brief Field m_DependenciesHash, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DependenciesHash, put = __cordl_internal_set_m_DependenciesHash)) int32_t m_DependenciesHash;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IOperationCacheKey"
  constexpr operator ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*() noexcept;

  /// @brief Method Equals, addr 0x47978a4, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4797934, size 0x28, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::ResourceManagement::Util::DependenciesCacheKey* other);

  /// @brief Method Equals, addr 0x479795c, size 0x90, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* other);

  /// @brief Method GetHashCode, addr 0x479789c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::ResourceManagement::Util::DependenciesCacheKey*
  New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* dependencies, int32_t dependenciesHash);

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* const& __cordl_internal_get_m_Dependencies() const;

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& __cordl_internal_get_m_Dependencies();

  constexpr int32_t const& __cordl_internal_get_m_DependenciesHash() const;

  constexpr int32_t& __cordl_internal_get_m_DependenciesHash();

  constexpr void __cordl_internal_set_m_Dependencies(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value);

  constexpr void __cordl_internal_set_m_DependenciesHash(int32_t value);

  /// @brief Method .ctor, addr 0x478f9fc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* dependencies, int32_t dependenciesHash);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>"
  constexpr ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>* i___System__IEquatable_1___UnityEngine__ResourceManagement__Util__IOperationCacheKey__() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::IOperationCacheKey"
  constexpr ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* i___UnityEngine__ResourceManagement__Util__IOperationCacheKey() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DependenciesCacheKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DependenciesCacheKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DependenciesCacheKey(DependenciesCacheKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DependenciesCacheKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DependenciesCacheKey(DependenciesCacheKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15635 };

  /// @brief Field m_Dependencies, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* ___m_Dependencies;

  /// @brief Field m_DependenciesHash, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_DependenciesHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DependenciesCacheKey, ___m_Dependencies) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DependenciesCacheKey, ___m_DependenciesHash) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::DependenciesCacheKey, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::DependenciesCacheKey);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::DependenciesCacheKey*, "UnityEngine.ResourceManagement.Util", "DependenciesCacheKey");
