#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SonyLeaderboardIdsSO)
namespace GlobalNamespace {
class ILeaderboardIdContainer;
}
namespace GlobalNamespace {
class ILeaderboardIdData;
}
namespace GlobalNamespace {
class __SonyLeaderboardIdsSO__LeaderboardIdData;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyLeaderboardIdsSO;
}
namespace GlobalNamespace {
class __SonyLeaderboardIdsSO__LeaderboardIdData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyLeaderboardIdsSO);
MARK_REF_PTR_T(::GlobalNamespace::__SonyLeaderboardIdsSO__LeaderboardIdData);
// Type: ::LeaderboardIdData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyLeaderboardIdsSO::LeaderboardIdData*
class CORDL_TYPE __SonyLeaderboardIdsSO__LeaderboardIdData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _difficultyBeatmapId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultyBeatmapId, put = __cordl_internal_set__difficultyBeatmapId))::StringW _difficultyBeatmapId;

  /// @brief Field _sonyLeaderboardId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__sonyLeaderboardId, put = __cordl_internal_set__sonyLeaderboardId)) uint32_t _sonyLeaderboardId;

  __declspec(property(get = get_difficultyBeatmapId))::StringW difficultyBeatmapId;

  __declspec(property(get = get_sonyLeaderboardId)) uint32_t sonyLeaderboardId;

  /// @brief Convert operator to "::GlobalNamespace::ILeaderboardIdData"
  constexpr operator ::GlobalNamespace::ILeaderboardIdData*() noexcept;

  static inline ::GlobalNamespace::__SonyLeaderboardIdsSO__LeaderboardIdData* New_ctor(uint32_t sonyLeaderboardId, ::StringW difficultyBeatmapId);

  constexpr ::StringW const& __cordl_internal_get__difficultyBeatmapId() const;

  constexpr ::StringW& __cordl_internal_get__difficultyBeatmapId();

  constexpr uint32_t const& __cordl_internal_get__sonyLeaderboardId() const;

  constexpr uint32_t& __cordl_internal_get__sonyLeaderboardId();

  constexpr void __cordl_internal_set__difficultyBeatmapId(::StringW value);

  constexpr void __cordl_internal_set__sonyLeaderboardId(uint32_t value);

  /// @brief Method .ctor, addr 0x12b686c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(uint32_t sonyLeaderboardId, ::StringW difficultyBeatmapId);

  /// @brief Method get_difficultyBeatmapId, addr 0x12b685c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_difficultyBeatmapId();

  /// @brief Method get_sonyLeaderboardId, addr 0x12b6864, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_sonyLeaderboardId();

  /// @brief Convert to "::GlobalNamespace::ILeaderboardIdData"
  constexpr ::GlobalNamespace::ILeaderboardIdData* i___GlobalNamespace__ILeaderboardIdData() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyLeaderboardIdsSO__LeaderboardIdData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SonyLeaderboardIdsSO__LeaderboardIdData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SonyLeaderboardIdsSO__LeaderboardIdData(__SonyLeaderboardIdsSO__LeaderboardIdData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLeaderboardIdsSO__LeaderboardIdData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SonyLeaderboardIdsSO__LeaderboardIdData(__SonyLeaderboardIdsSO__LeaderboardIdData const&) = delete;

  /// @brief Field _difficultyBeatmapId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____difficultyBeatmapId;

  /// @brief Field _sonyLeaderboardId, offset: 0x18, size: 0x4, def value: None
  uint32_t ____sonyLeaderboardId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyLeaderboardIdsSO__LeaderboardIdData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLeaderboardIdsSO__LeaderboardIdData, ____difficultyBeatmapId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLeaderboardIdsSO__LeaderboardIdData, ____sonyLeaderboardId) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SonyLeaderboardIdsSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyLeaderboardIdsSO*
class CORDL_TYPE SonyLeaderboardIdsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LeaderboardIdData = ::GlobalNamespace::__SonyLeaderboardIdsSO__LeaderboardIdData;

  __declspec(property(get = ILeaderboardIdContainer_get_leaderboardIds))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>* ILeaderboardIdContainer_leaderboardIds;

  /// @brief Field _leaderboardIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardIds,
                      put = __cordl_internal_set__leaderboardIds))::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsSO__LeaderboardIdData*>* _leaderboardIds;

  __declspec(property(get = get_leaderboardIds, put = set_leaderboardIds))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SonyLeaderboardIdsSO__LeaderboardIdData*>* leaderboardIds;

  /// @brief Convert operator to "::GlobalNamespace::ILeaderboardIdContainer"
  constexpr operator ::GlobalNamespace::ILeaderboardIdContainer*() noexcept;

  /// @brief Method ILeaderboardIdContainer.get_leaderboardIds, addr 0x12b6774, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>* ILeaderboardIdContainer_get_leaderboardIds();

  static inline ::GlobalNamespace::SonyLeaderboardIdsSO* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsSO__LeaderboardIdData*>*& __cordl_internal_get__leaderboardIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsSO__LeaderboardIdData*>*> const&
  __cordl_internal_get__leaderboardIds() const;

  constexpr void __cordl_internal_set__leaderboardIds(::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsSO__LeaderboardIdData*>* value);

  /// @brief Method .ctor, addr 0x12b67e0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_leaderboardIds, addr 0x12b677c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SonyLeaderboardIdsSO__LeaderboardIdData*>* get_leaderboardIds();

  /// @brief Convert to "::GlobalNamespace::ILeaderboardIdContainer"
  constexpr ::GlobalNamespace::ILeaderboardIdContainer* i___GlobalNamespace__ILeaderboardIdContainer() noexcept;

  /// @brief Method set_leaderboardIds, addr 0x12b6784, size 0x5c, virtual false, abstract: false, final false
  inline void set_leaderboardIds(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SonyLeaderboardIdsSO__LeaderboardIdData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLeaderboardIdsSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyLeaderboardIdsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLeaderboardIdsSO(SonyLeaderboardIdsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLeaderboardIdsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLeaderboardIdsSO(SonyLeaderboardIdsSO const&) = delete;

  /// @brief Field _leaderboardIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsSO__LeaderboardIdData*>* ____leaderboardIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLeaderboardIdsSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLeaderboardIdsSO, ____leaderboardIds) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyLeaderboardIdsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLeaderboardIdsSO*, "", "SonyLeaderboardIdsSO");
NEED_NO_BOX(::GlobalNamespace::__SonyLeaderboardIdsSO__LeaderboardIdData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyLeaderboardIdsSO__LeaderboardIdData*, "", "SonyLeaderboardIdsSO/LeaderboardIdData");
