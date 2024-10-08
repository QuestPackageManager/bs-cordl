#pragma once
// IWYU pragma private; include "Zenject/PrefabProviderResource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PrefabProviderResource)
namespace UnityEngine {
class Object;
}
namespace Zenject {
class IPrefabProvider;
}
// Forward declare root types
namespace Zenject {
class PrefabProviderResource;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PrefabProviderResource);
// Type: Zenject::PrefabProviderResource
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::PrefabProviderResource*
class CORDL_TYPE PrefabProviderResource : public ::System::Object {
public:
  // Declarations
  /// @brief Field _resourcePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__resourcePath, put = __cordl_internal_set__resourcePath)) ::StringW _resourcePath;

  /// @brief Convert operator to "::Zenject::IPrefabProvider"
  constexpr operator ::Zenject::IPrefabProvider*() noexcept;

  /// @brief Method GetPrefab, addr 0x4ac45d8, size 0xcc, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Object> GetPrefab();

  static inline ::Zenject::PrefabProviderResource* New_ctor(::StringW resourcePath);

  constexpr ::StringW const& __cordl_internal_get__resourcePath() const;

  constexpr ::StringW& __cordl_internal_get__resourcePath();

  constexpr void __cordl_internal_set__resourcePath(::StringW value);

  /// @brief Method .ctor, addr 0x4ac45b0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW resourcePath);

  /// @brief Convert to "::Zenject::IPrefabProvider"
  constexpr ::Zenject::IPrefabProvider* i___Zenject__IPrefabProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefabProviderResource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrefabProviderResource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefabProviderResource(PrefabProviderResource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefabProviderResource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefabProviderResource(PrefabProviderResource const&) = delete;

  /// @brief Field _resourcePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ____resourcePath;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12532 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::PrefabProviderResource, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::PrefabProviderResource, ____resourcePath) == 0x10, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::PrefabProviderResource);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabProviderResource*, "Zenject", "PrefabProviderResource");
