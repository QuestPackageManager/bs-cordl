#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SkinColorSetSO)
namespace GlobalNamespace {
class SkinColorSO;
}
// Forward declare root types
namespace GlobalNamespace {
class SkinColorSetSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SkinColorSetSO);
// Type: ::SkinColorSetSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4782))
// CS Name: ::SkinColorSetSO*
class CORDL_TYPE SkinColorSetSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _colors, offset 0x18, size 0x8
  __declspec(property(get = __get__colors, put = __set__colors))::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*> _colors;

  __declspec(property(get = get_colors))::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*> colors;

  constexpr ::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*>& __get__colors();

  constexpr ::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*> const& __get__colors() const;

  constexpr void __set__colors(::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*> value);

  /// @brief Method get_colors addr 0x223ec7c size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*> get_colors();

  static inline ::GlobalNamespace::SkinColorSetSO* New_ctor();

  /// @brief Method .ctor addr 0x223ec84 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SkinColorSetSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SkinColorSetSO(SkinColorSetSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SkinColorSetSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SkinColorSetSO(SkinColorSetSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SkinColorSetSO();

public:
  /// @brief Field _colors, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*> ____colors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SkinColorSetSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SkinColorSetSO, ____colors) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SkinColorSetSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SkinColorSetSO*, "", "SkinColorSetSO");