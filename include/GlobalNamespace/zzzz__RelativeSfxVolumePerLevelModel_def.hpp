#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RelativeSfxVolumePerLevelModel)
namespace GlobalNamespace {
class RelativeSfxVolumePerLevelSO;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class RelativeSfxVolumePerLevelModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RelativeSfxVolumePerLevelModel);
// Type: ::RelativeSfxVolumePerLevelModel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4420))
// CS Name: ::RelativeSfxVolumePerLevelModel*
class CORDL_TYPE RelativeSfxVolumePerLevelModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field _relativeSfxVolumePerLevelId, offset 0x10, size 0x8
  __declspec(property(get = __get__relativeSfxVolumePerLevelId,
                      put = __set__relativeSfxVolumePerLevelId))::System::Collections::Generic::Dictionary_2<::StringW, float_t>* _relativeSfxVolumePerLevelId;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, float_t>*& __get__relativeSfxVolumePerLevelId();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, float_t>*> const& __get__relativeSfxVolumePerLevelId() const;

  constexpr void __set__relativeSfxVolumePerLevelId(::System::Collections::Generic::Dictionary_2<::StringW, float_t>* value);

  static inline ::GlobalNamespace::RelativeSfxVolumePerLevelModel* New_ctor(::GlobalNamespace::RelativeSfxVolumePerLevelSO* relativeSfxVolumePerLevelData);

  /// @brief Method .ctor, addr 0x234d86c, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::RelativeSfxVolumePerLevelSO* relativeSfxVolumePerLevelData);

  /// @brief Method GetRelativeSfxVolume, addr 0x234da20, size 0x7c, virtual false, abstract: false, final false
  inline float_t GetRelativeSfxVolume(::StringW levelId);

  // Ctor Parameters [CppParam { name: "", ty: "RelativeSfxVolumePerLevelModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RelativeSfxVolumePerLevelModel(RelativeSfxVolumePerLevelModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RelativeSfxVolumePerLevelModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RelativeSfxVolumePerLevelModel(RelativeSfxVolumePerLevelModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RelativeSfxVolumePerLevelModel();

public:
  /// @brief Field _relativeSfxVolumePerLevelId, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, float_t>* ____relativeSfxVolumePerLevelId;

  /// @brief Field kDefaultSfxVolume offset 0xffffffff size 0x4
  static constexpr float_t kDefaultSfxVolume{ 0.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RelativeSfxVolumePerLevelModel, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RelativeSfxVolumePerLevelModel, ____relativeSfxVolumePerLevelId) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RelativeSfxVolumePerLevelModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RelativeSfxVolumePerLevelModel*, "", "RelativeSfxVolumePerLevelModel");
