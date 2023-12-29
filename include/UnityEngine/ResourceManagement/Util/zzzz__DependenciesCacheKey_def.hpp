#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DependenciesCacheKey)
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class DependenciesCacheKey;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::DependenciesCacheKey);
// Type: UnityEngine.ResourceManagement.Util::DependenciesCacheKey
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14242))
// CS Name: ::UnityEngine.ResourceManagement.Util::DependenciesCacheKey*
class CORDL_TYPE DependenciesCacheKey : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Dependencies, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Dependencies,
                      put = __set_m_Dependencies))::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* m_Dependencies;

  /// @brief Field m_DependenciesHash, offset 0x18, size 0x4
  __declspec(property(get = __get_m_DependenciesHash, put = __set_m_DependenciesHash)) int32_t m_DependenciesHash;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IOperationCacheKey"
  constexpr operator ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>*() noexcept;

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& __get_m_Dependencies();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> const& __get_m_Dependencies() const;

  constexpr void __set_m_Dependencies(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value);

  constexpr int32_t& __get_m_DependenciesHash();

  constexpr int32_t const& __get_m_DependenciesHash() const;

  constexpr void __set_m_DependenciesHash(int32_t value);

  static inline ::UnityEngine::ResourceManagement::Util::DependenciesCacheKey*
  New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* dependencies, int32_t dependenciesHash);

  /// @brief Method .ctor addr 0x2a4a4bc size 0x30 virtual false final false
  inline void _ctor(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* dependencies, int32_t dependenciesHash);

  /// @brief Method GetHashCode addr 0x2a4ed88 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x2a4ed90 size 0x8c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x2a4ee44 size 0x8c virtual true final true
  inline bool Equals(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* other);

  /// @brief Method Equals addr 0x2a4ee1c size 0x28 virtual false final false
  inline bool Equals(::UnityEngine::ResourceManagement::Util::DependenciesCacheKey* other);

  // Ctor Parameters [CppParam { name: "", ty: "DependenciesCacheKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DependenciesCacheKey(DependenciesCacheKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DependenciesCacheKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DependenciesCacheKey(DependenciesCacheKey const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DependenciesCacheKey();

public:
  /// @brief Field m_Dependencies, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* ___m_Dependencies;

  /// @brief Field m_DependenciesHash, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_DependenciesHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::DependenciesCacheKey, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DependenciesCacheKey, ___m_Dependencies) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DependenciesCacheKey, ___m_DependenciesHash) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::DependenciesCacheKey);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::DependenciesCacheKey*, "UnityEngine.ResourceManagement.Util", "DependenciesCacheKey");
