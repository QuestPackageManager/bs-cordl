#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PrefabProvider)
namespace UnityEngine {
class Object;
}
namespace Zenject {
class IPrefabProvider;
}
// Forward declare root types
namespace Zenject {
class PrefabProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PrefabProvider);
// Type: Zenject::PrefabProvider
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11232))
// CS Name: ::Zenject::PrefabProvider*
class CORDL_TYPE PrefabProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _prefab, offset 0x10, size 0x8
  __declspec(property(get = __get__prefab, put = __set__prefab))::UnityEngine::Object* _prefab;

  /// @brief Convert operator to "::Zenject::IPrefabProvider"
  constexpr operator ::Zenject::IPrefabProvider*() noexcept;

  /// @brief Convert to "::Zenject::IPrefabProvider"
  constexpr ::Zenject::IPrefabProvider* i___Zenject__IPrefabProvider() noexcept;

  constexpr ::UnityEngine::Object*& __get__prefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> const& __get__prefab() const;

  constexpr void __set__prefab(::UnityEngine::Object* value);

  static inline ::Zenject::PrefabProvider* New_ctor(::UnityEngine::Object* prefab);

  /// @brief Method .ctor, addr 0x2f09c00, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Object* prefab);

  /// @brief Method GetPrefab, addr 0x2f09c34, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Object* GetPrefab();

  // Ctor Parameters [CppParam { name: "", ty: "PrefabProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefabProvider(PrefabProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefabProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefabProvider(PrefabProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefabProvider();

public:
  /// @brief Field _prefab, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Object* ____prefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::PrefabProvider, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::PrefabProvider, ____prefab) == 0x10, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::PrefabProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabProvider*, "Zenject", "PrefabProvider");
