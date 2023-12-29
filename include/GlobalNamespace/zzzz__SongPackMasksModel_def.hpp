#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SongPackMasksModel)
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
class SongPackMaskModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class SongPackMasksModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongPackMasksModel);
// Type: ::SongPackMasksModel
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(15192))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4532))
// CS Name: ::SongPackMasksModel*
class CORDL_TYPE SongPackMasksModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field _songPackMaskModel, offset 0x10, size 0x8
  __declspec(property(get = __get__songPackMaskModel, put = __set__songPackMaskModel))::GlobalNamespace::SongPackMaskModelSO* _songPackMaskModel;

  /// @brief Field _allSongPackMask, offset 0x18, size 0x10
  __declspec(property(get = __get__allSongPackMask, put = __set__allSongPackMask))::GlobalNamespace::SongPackMask _allSongPackMask;

  constexpr ::GlobalNamespace::SongPackMaskModelSO*& __get__songPackMaskModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMaskModelSO*> const& __get__songPackMaskModel() const;

  constexpr void __set__songPackMaskModel(::GlobalNamespace::SongPackMaskModelSO* value);

  constexpr ::GlobalNamespace::SongPackMask& __get__allSongPackMask();

  constexpr ::GlobalNamespace::SongPackMask const& __get__allSongPackMask() const;

  constexpr void __set__allSongPackMask(::GlobalNamespace::SongPackMask value);

  static inline ::GlobalNamespace::SongPackMasksModel* New_ctor(::GlobalNamespace::SongPackMaskModelSO* songPackMasks);

  /// @brief Method .ctor addr 0x22153d8 size 0x78 virtual false final false
  inline void _ctor(::GlobalNamespace::SongPackMaskModelSO* songPackMasks);

  /// @brief Method GetAllSongsMask addr 0x2215450 size 0xc virtual false final false
  inline ::GlobalNamespace::SongPackMask GetAllSongsMask();

  /// @brief Method GetSongPackMaskText addr 0x221545c size 0x18 virtual false final false
  inline ::StringW GetSongPackMaskText(ByRef<::GlobalNamespace::SongPackMask> songPackMask);

  /// @brief Method GetSongPackMaskText addr 0x2215474 size 0x98 virtual false final false
  inline ::StringW GetSongPackMaskText(ByRef<::GlobalNamespace::SongPackMask> songPackMask, ByRef<bool> plural);

  // Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongPackMasksModel(SongPackMasksModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongPackMasksModel(SongPackMasksModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPackMasksModel();

public:
  /// @brief Field _songPackMaskModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::SongPackMaskModelSO* ____songPackMaskModel;

  /// @brief Field _allSongPackMask, offset: 0x18, size: 0x10, def value: None
  ::GlobalNamespace::SongPackMask ____allSongPackMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackMasksModel, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModel, ____songPackMaskModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModel, ____allSongPackMask) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongPackMasksModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMasksModel*, "", "SongPackMasksModel");
