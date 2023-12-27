#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_def.hpp"
CORDL_MODULE_EXPORT(MaterialPropertyBlockPositionUpdater)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockPositionUpdater;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyBlockPositionUpdater);
// Type: ::MaterialPropertyBlockPositionUpdater
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14563))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14569))
// CS Name: ::MaterialPropertyBlockPositionUpdater*
class CORDL_TYPE MaterialPropertyBlockPositionUpdater : public ::GlobalNamespace::MaterialPropertyBlockAnimator {
public:
  // Declarations
  /// @brief Field _targetTransform, offset 0x30, size 0x8
  __declspec(property(get = __get__targetTransform, put = __set__targetTransform))::UnityEngine::Transform* _targetTransform;

  constexpr ::UnityEngine::Transform*& __get__targetTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__targetTransform() const;

  constexpr void __set__targetTransform(::UnityEngine::Transform* value);

  /// @brief Method SetProperty addr 0x2115150 size 0xb4 virtual true final false
  inline void SetProperty();

  static inline ::GlobalNamespace::MaterialPropertyBlockPositionUpdater* New_ctor();

  /// @brief Method .ctor addr 0x2115204 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockPositionUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockPositionUpdater(MaterialPropertyBlockPositionUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockPositionUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockPositionUpdater(MaterialPropertyBlockPositionUpdater const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockPositionUpdater();

public:
  /// @brief Field _targetTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* ____targetTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockPositionUpdater, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockPositionUpdater);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockPositionUpdater*, "", "MaterialPropertyBlockPositionUpdater");
