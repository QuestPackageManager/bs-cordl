#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MaterialController)
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialController);
// Type: ::MaterialController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14562))
// CS Name: ::MaterialController*
class CORDL_TYPE MaterialController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _material, offset 0x18, size 0x8
  __declspec(property(get = __get__material, put = __set__material))::UnityEngine::Material* _material;

  /// @brief Field _renderers, offset 0x20, size 0x8
  __declspec(property(get = __get__renderers, put = __set__renderers))::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> _renderers;

  __declspec(property(get = get_material))::UnityEngine::Material* material;

  constexpr ::UnityEngine::Material*& __get__material();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__material() const;

  constexpr void __set__material(::UnityEngine::Material* value);

  constexpr ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*>& __get__renderers();

  constexpr ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> const& __get__renderers() const;

  constexpr void __set__renderers(::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> value);

  /// @brief Method get_material addr 0x2114950 size 0x8 virtual false final false
  inline ::UnityEngine::Material* get_material();

  /// @brief Method OnValidate addr 0x2114958 size 0x2c virtual false final false
  inline void OnValidate();

  static inline ::GlobalNamespace::MaterialController* New_ctor();

  /// @brief Method .ctor addr 0x2114984 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MaterialController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialController(MaterialController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialController(MaterialController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialController();

public:
  /// @brief Field _material, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Material* ____material;

  /// @brief Field _renderers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> ____renderers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialController, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialController*, "", "MaterialController");
