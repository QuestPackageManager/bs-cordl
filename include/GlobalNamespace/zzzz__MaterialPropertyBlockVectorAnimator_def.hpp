#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
CORDL_MODULE_EXPORT(MaterialPropertyBlockVectorAnimator)
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockVectorAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyBlockVectorAnimator);
// Type: ::MaterialPropertyBlockVectorAnimator
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14563)), TypeDefinitionIndex(TypeDefinitionIndex(10246))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14571))
// CS Name: ::MaterialPropertyBlockVectorAnimator*
class CORDL_TYPE MaterialPropertyBlockVectorAnimator : public ::GlobalNamespace::MaterialPropertyBlockAnimator {
public:
  // Declarations
  /// @brief Field _vector, offset 0x30, size 0x10
  __declspec(property(get = __get__vector, put = __set__vector))::UnityEngine::Vector4 _vector;

  constexpr ::UnityEngine::Vector4& __get__vector();

  constexpr ::UnityEngine::Vector4 const& __get__vector() const;

  constexpr void __set__vector(::UnityEngine::Vector4 value);

  /// @brief Method SetProperty, addr 0x211546c, size 0x34, virtual true, abstract: false, final false
  inline void SetProperty();

  static inline ::GlobalNamespace::MaterialPropertyBlockVectorAnimator* New_ctor();

  /// @brief Method .ctor, addr 0x21154a0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockVectorAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockVectorAnimator(MaterialPropertyBlockVectorAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockVectorAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockVectorAnimator(MaterialPropertyBlockVectorAnimator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockVectorAnimator();

public:
  /// @brief Field _vector, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Vector4 ____vector;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockVectorAnimator, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockVectorAnimator, ____vector) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockVectorAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockVectorAnimator*, "", "MaterialPropertyBlockVectorAnimator");
