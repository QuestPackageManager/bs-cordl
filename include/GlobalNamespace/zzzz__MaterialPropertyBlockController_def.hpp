#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyBlockController)
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyBlockController);
// Type: ::MaterialPropertyBlockController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14783))
// CS Name: ::MaterialPropertyBlockController*
class CORDL_TYPE MaterialPropertyBlockController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _renderers, offset 0x18, size 0x8
  __declspec(property(get = __get__renderers, put = __set__renderers))::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> _renderers;

  /// @brief Field _materialPropertyBlock, offset 0x20, size 0x8
  __declspec(property(get = __get__materialPropertyBlock, put = __set__materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  /// @brief Field _numberOfMaterialsInRenderers, offset 0x28, size 0x8
  __declspec(property(get = __get__numberOfMaterialsInRenderers, put = __set__numberOfMaterialsInRenderers))::System::Collections::Generic::List_1<int32_t>* _numberOfMaterialsInRenderers;

  /// @brief Field _isInitialized, offset 0x30, size 0x1
  __declspec(property(get = __get__isInitialized, put = __set__isInitialized)) bool _isInitialized;

  __declspec(property(get = get_renderers))::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> renderers;

  __declspec(property(get = get_materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* materialPropertyBlock;

  constexpr ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*>& __get__renderers();

  constexpr ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> const& __get__renderers() const;

  constexpr void __set__renderers(::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> value);

  constexpr ::UnityEngine::MaterialPropertyBlock*& __get__materialPropertyBlock();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> const& __get__materialPropertyBlock() const;

  constexpr void __set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __get__numberOfMaterialsInRenderers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __get__numberOfMaterialsInRenderers() const;

  constexpr void __set__numberOfMaterialsInRenderers(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr bool& __get__isInitialized();

  constexpr bool const& __get__isInitialized() const;

  constexpr void __set__isInitialized(bool value);

  /// @brief Method get_renderers addr 0x1fbf4d8 size 0x8 virtual false final false
  inline ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> get_renderers();

  /// @brief Method get_materialPropertyBlock addr 0x1fbf2c0 size 0x6c virtual false final false
  inline ::UnityEngine::MaterialPropertyBlock* get_materialPropertyBlock();

  /// @brief Method ApplyChanges addr 0x1fbf05c size 0x1f0 virtual false final false
  inline void ApplyChanges();

  static inline ::GlobalNamespace::MaterialPropertyBlockController* New_ctor();

  /// @brief Method .ctor addr 0x1fbf4e0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockController(MaterialPropertyBlockController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockController(MaterialPropertyBlockController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockController();

public:
  /// @brief Field _renderers, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> ____renderers;

  /// @brief Field _materialPropertyBlock, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ____materialPropertyBlock;

  /// @brief Field _numberOfMaterialsInRenderers, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ____numberOfMaterialsInRenderers;

  /// @brief Field _isInitialized, offset: 0x30, size: 0x1, def value: None
  bool ____isInitialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockController, ____renderers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockController, ____materialPropertyBlock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockController, ____numberOfMaterialsInRenderers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockController, ____isInitialized) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockController*, "", "MaterialPropertyBlockController");
