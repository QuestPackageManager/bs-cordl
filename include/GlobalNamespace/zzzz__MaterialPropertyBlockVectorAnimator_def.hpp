#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialPropertyBlockVectorAnimator.hpp"
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
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MaterialPropertyBlockVectorAnimator*
class CORDL_TYPE MaterialPropertyBlockVectorAnimator : public ::GlobalNamespace::MaterialPropertyBlockAnimator {
public:
  // Declarations
  /// @brief Field _vector, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__vector, put = __cordl_internal_set__vector)) ::UnityEngine::Vector4 _vector;

  static inline ::GlobalNamespace::MaterialPropertyBlockVectorAnimator* New_ctor();

  /// @brief Method SetProperty, addr 0x3990388, size 0x34, virtual true, abstract: false, final false
  inline void SetProperty();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get__vector() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get__vector();

  constexpr void __cordl_internal_set__vector(::UnityEngine::Vector4 value);

  /// @brief Method .ctor, addr 0x39903bc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockVectorAnimator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockVectorAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockVectorAnimator(MaterialPropertyBlockVectorAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockVectorAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockVectorAnimator(MaterialPropertyBlockVectorAnimator const&) = delete;

  /// @brief Field _vector, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Vector4 ____vector;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16319 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockVectorAnimator, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockVectorAnimator, ____vector) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockVectorAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockVectorAnimator*, "", "MaterialPropertyBlockVectorAnimator");
