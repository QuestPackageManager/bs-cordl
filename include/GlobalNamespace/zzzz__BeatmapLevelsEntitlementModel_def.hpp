#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelsEntitlementModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelsEntitlementModel)
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace GlobalNamespace {
class IAdditionalContentEntitlementModel;
}
namespace GlobalNamespace {
class IEntitlementModel;
}
namespace GlobalNamespace {
class PackDefinitionSO;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelsEntitlementModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelsEntitlementModel);
// Type: ::BeatmapLevelsEntitlementModel
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelsEntitlementModel*
class CORDL_TYPE BeatmapLevelsEntitlementModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field _additionalContentEntitlementModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalContentEntitlementModel,
                      put = __cordl_internal_set__additionalContentEntitlementModel))::GlobalNamespace::IAdditionalContentEntitlementModel* _additionalContentEntitlementModel;

  /// @brief Field _alwaysOwnedBeatmapLevelIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__alwaysOwnedBeatmapLevelIds,
                      put = __cordl_internal_set__alwaysOwnedBeatmapLevelIds))::System::Collections::Generic::HashSet_1<::StringW>* _alwaysOwnedBeatmapLevelIds;

  /// @brief Field _alwaysOwnedPacksIds, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__alwaysOwnedPacksIds, put = __cordl_internal_set__alwaysOwnedPacksIds))::System::Collections::Generic::HashSet_1<::StringW>* _alwaysOwnedPacksIds;

  /// @brief Convert operator to "::GlobalNamespace::IEntitlementModel"
  constexpr operator ::GlobalNamespace::IEntitlementModel*() noexcept;

  /// @brief Method AddAlwaysOwnedPack, addr 0x14befec, size 0x340, virtual false, abstract: false, final false
  inline void AddAlwaysOwnedPack(::GlobalNamespace::PackDefinitionSO* pack);

  /// @brief Method GetLevelEntitlementStatusAsync, addr 0x14bf32c, size 0x134, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method GetPackEntitlementStatusAsync, addr 0x14bf460, size 0x138, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  static inline ::GlobalNamespace::BeatmapLevelsEntitlementModel* New_ctor(::GlobalNamespace::IAdditionalContentEntitlementModel* additionalContentEntitlementModel);

  constexpr ::GlobalNamespace::IAdditionalContentEntitlementModel*& __cordl_internal_get__additionalContentEntitlementModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentEntitlementModel*> const& __cordl_internal_get__additionalContentEntitlementModel() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__alwaysOwnedBeatmapLevelIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __cordl_internal_get__alwaysOwnedBeatmapLevelIds() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__alwaysOwnedPacksIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __cordl_internal_get__alwaysOwnedPacksIds() const;

  constexpr void __cordl_internal_set__additionalContentEntitlementModel(::GlobalNamespace::IAdditionalContentEntitlementModel* value);

  constexpr void __cordl_internal_set__alwaysOwnedBeatmapLevelIds(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__alwaysOwnedPacksIds(::System::Collections::Generic::HashSet_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x14bef40, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IAdditionalContentEntitlementModel* additionalContentEntitlementModel);

  /// @brief Convert to "::GlobalNamespace::IEntitlementModel"
  constexpr ::GlobalNamespace::IEntitlementModel* i___GlobalNamespace__IEntitlementModel() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelsEntitlementModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsEntitlementModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelsEntitlementModel(BeatmapLevelsEntitlementModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsEntitlementModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelsEntitlementModel(BeatmapLevelsEntitlementModel const&) = delete;

  /// @brief Field _additionalContentEntitlementModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentEntitlementModel* ____additionalContentEntitlementModel;

  /// @brief Field _alwaysOwnedBeatmapLevelIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____alwaysOwnedBeatmapLevelIds;

  /// @brief Field _alwaysOwnedPacksIds, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____alwaysOwnedPacksIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelsEntitlementModel, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsEntitlementModel, ____additionalContentEntitlementModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsEntitlementModel, ____alwaysOwnedBeatmapLevelIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsEntitlementModel, ____alwaysOwnedPacksIds) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelsEntitlementModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelsEntitlementModel*, "", "BeatmapLevelsEntitlementModel");
