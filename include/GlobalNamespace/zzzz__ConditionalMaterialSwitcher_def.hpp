#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ConditionalMaterialSwitcher)
namespace UnityEngine {
class Renderer;
}
namespace GlobalNamespace {
class BoolSO;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class ConditionalMaterialSwitcher;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConditionalMaterialSwitcher);
// Type: ::ConditionalMaterialSwitcher
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5354))
// CS Name: ::ConditionalMaterialSwitcher*
class CORDL_TYPE ConditionalMaterialSwitcher : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _material0, offset 0x18, size 0x8
  __declspec(property(get = __get__material0, put = __set__material0))::UnityEngine::Material* _material0;

  /// @brief Field _material1, offset 0x20, size 0x8
  __declspec(property(get = __get__material1, put = __set__material1))::UnityEngine::Material* _material1;

  /// @brief Field _value, offset 0x28, size 0x8
  __declspec(property(get = __get__value, put = __set__value))::GlobalNamespace::BoolSO* _value;

  /// @brief Field _renderer, offset 0x30, size 0x8
  __declspec(property(get = __get__renderer, put = __set__renderer))::UnityEngine::Renderer* _renderer;

  constexpr ::UnityEngine::Material*& __get__material0();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__material0() const;

  constexpr void __set__material0(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get__material1();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__material1() const;

  constexpr void __set__material1(::UnityEngine::Material* value);

  constexpr ::GlobalNamespace::BoolSO*& __get__value();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get__value() const;

  constexpr void __set__value(::GlobalNamespace::BoolSO* value);

  constexpr ::UnityEngine::Renderer*& __get__renderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> const& __get__renderer() const;

  constexpr void __set__renderer(::UnityEngine::Renderer* value);

  /// @brief Method Awake addr 0x226c040 size 0x78 virtual false final false
  inline void Awake();

  static inline ::GlobalNamespace::ConditionalMaterialSwitcher* New_ctor();

  /// @brief Method .ctor addr 0x226c0b8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ConditionalMaterialSwitcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionalMaterialSwitcher(ConditionalMaterialSwitcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionalMaterialSwitcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionalMaterialSwitcher(ConditionalMaterialSwitcher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionalMaterialSwitcher();

public:
  /// @brief Field _material0, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Material* ____material0;

  /// @brief Field _material1, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Material* ____material1;

  /// @brief Field _value, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ____value;

  /// @brief Field _renderer, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Renderer* ____renderer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConditionalMaterialSwitcher, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConditionalMaterialSwitcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConditionalMaterialSwitcher*, "", "ConditionalMaterialSwitcher");
