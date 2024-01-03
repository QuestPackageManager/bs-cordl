#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PrefabProviderResource)
namespace Zenject {
class IPrefabProvider;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Zenject {
class PrefabProviderResource;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PrefabProviderResource);
// Type: Zenject::PrefabProviderResource
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11233))
// CS Name: ::Zenject::PrefabProviderResource*
class CORDL_TYPE PrefabProviderResource : public ::System::Object {
public:
  // Declarations
  /// @brief Field _resourcePath, offset 0x10, size 0x8
  __declspec(property(get = __get__resourcePath, put = __set__resourcePath))::StringW _resourcePath;

  /// @brief Convert operator to "::Zenject::IPrefabProvider"
  constexpr operator ::Zenject::IPrefabProvider*() noexcept;

  constexpr ::StringW& __get__resourcePath();

  constexpr ::StringW const& __get__resourcePath() const;

  constexpr void __set__resourcePath(::StringW value);

  static inline ::Zenject::PrefabProviderResource* New_ctor(::StringW resourcePath);

  /// @brief Method .ctor, addr 0x2f09c3c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW resourcePath);

  /// @brief Method GetPrefab, addr 0x2f09c64, size 0xcc, virtual true, abstract: false, final true
  inline ::UnityEngine::Object* GetPrefab();

  // Ctor Parameters [CppParam { name: "", ty: "PrefabProviderResource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefabProviderResource(PrefabProviderResource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefabProviderResource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefabProviderResource(PrefabProviderResource const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefabProviderResource();

public:
  /// @brief Field _resourcePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ____resourcePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::PrefabProviderResource, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::PrefabProviderResource, ____resourcePath) == 0x10, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::PrefabProviderResource);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabProviderResource*, "Zenject", "PrefabProviderResource");
