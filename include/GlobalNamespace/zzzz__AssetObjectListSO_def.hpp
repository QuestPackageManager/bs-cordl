#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(AssetObjectListSO)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class AssetObjectListSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AssetObjectListSO);
// Type: ::AssetObjectListSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5818))
// CS Name: ::AssetObjectListSO*
class CORDL_TYPE AssetObjectListSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _objects, offset 0x18, size 0x8
  __declspec(property(get = __get__objects, put = __set__objects))::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> _objects;

  __declspec(property(get = get_objects))::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> objects;

  constexpr ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>& __get__objects();

  constexpr ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> const& __get__objects() const;

  constexpr void __set__objects(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> value);

  /// @brief Method get_objects, addr 0x22eb0b4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> get_objects();

  static inline ::GlobalNamespace::AssetObjectListSO* New_ctor();

  /// @brief Method .ctor, addr 0x22eb0bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AssetObjectListSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetObjectListSO(AssetObjectListSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetObjectListSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetObjectListSO(AssetObjectListSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetObjectListSO();

public:
  /// @brief Field _objects, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> ____objects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AssetObjectListSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AssetObjectListSO, ____objects) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AssetObjectListSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AssetObjectListSO*, "", "AssetObjectListSO");
