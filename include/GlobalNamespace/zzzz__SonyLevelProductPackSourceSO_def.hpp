#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyLevelProductPackSourceSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SonyLevelProductPackSourceSO)
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class LevelProductPackSource_SonyLevelProductPackSourceSO___c;
}
namespace GlobalNamespace {
class SonyLevelProductPackSourceSO_LevelProductPackSource;
}
namespace GlobalNamespace {
class SonyLevelProductPackSourceSO_LevelProductRedirectionSource;
}
namespace GlobalNamespace {
class SonyLevelProductPackSourceSO_LevelProductSource;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelProductPackSource_SonyLevelProductPackSourceSO___c;
}
namespace GlobalNamespace {
class SonyLevelProductPackSourceSO;
}
namespace GlobalNamespace {
class SonyLevelProductPackSourceSO_LevelProductPackSource;
}
namespace GlobalNamespace {
class SonyLevelProductPackSourceSO_LevelProductRedirectionSource;
}
namespace GlobalNamespace {
class SonyLevelProductPackSourceSO_LevelProductSource;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelProductPackSource_SonyLevelProductPackSourceSO___c);
MARK_REF_PTR_T(::GlobalNamespace::SonyLevelProductPackSourceSO);
MARK_REF_PTR_T(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductPackSource);
MARK_REF_PTR_T(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource);
MARK_REF_PTR_T(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyLevelProductPackSourceSO/LevelProductPackSource/<>c
class CORDL_TYPE LevelProductPackSource_SonyLevelProductPackSourceSO___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::LevelProductPackSource_SonyLevelProductPackSourceSO___c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0,
                      put =
                          setStaticF___9__10_0)) ::System::Func_3<::UnityW<::GlobalNamespace::BeatmapLevelSO>, int32_t, ::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource*>* __9__10_0;

  static inline ::GlobalNamespace::LevelProductPackSource_SonyLevelProductPackSourceSO___c* New_ctor();

  /// @brief Method <.ctor>b__10_0, addr 0x26e9144, size 0x70, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource* __ctor_b__10_0(::GlobalNamespace::BeatmapLevelSO* level, int32_t index);

  /// @brief Method .ctor, addr 0x26e913c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::LevelProductPackSource_SonyLevelProductPackSourceSO___c* getStaticF___9();

  static inline ::System::Func_3<::UnityW<::GlobalNamespace::BeatmapLevelSO>, int32_t, ::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource*>* getStaticF___9__10_0();

  static inline void setStaticF___9(::GlobalNamespace::LevelProductPackSource_SonyLevelProductPackSourceSO___c* value);

  static inline void setStaticF___9__10_0(::System::Func_3<::UnityW<::GlobalNamespace::BeatmapLevelSO>, int32_t, ::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelProductPackSource_SonyLevelProductPackSourceSO___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelProductPackSource_SonyLevelProductPackSourceSO___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelProductPackSource_SonyLevelProductPackSourceSO___c(LevelProductPackSource_SonyLevelProductPackSourceSO___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelProductPackSource_SonyLevelProductPackSourceSO___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelProductPackSource_SonyLevelProductPackSourceSO___c(LevelProductPackSource_SonyLevelProductPackSourceSO___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13191 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelProductPackSource_SonyLevelProductPackSourceSO___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyLevelProductPackSourceSO/LevelProductPackSource
class CORDL_TYPE SonyLevelProductPackSourceSO_LevelProductPackSource : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::LevelProductPackSource_SonyLevelProductPackSourceSO___c;

  /// @brief Field _levelPack, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPack, put = __cordl_internal_set__levelPack)) ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> _levelPack;

  /// @brief Field _levelProductsData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelProductsData,
                      put = __cordl_internal_set__levelProductsData)) ::ArrayW<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource*,
                                                                               ::Array<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource*>*>
      _levelProductsData;

  /// @brief Field _packIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__packIndex, put = __cordl_internal_set__packIndex)) int32_t _packIndex;

  __declspec(property(get = get_levelPack)) ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> levelPack;

  __declspec(property(
      get = get_levelProductsData,
      put = set_levelProductsData)) ::ArrayW<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource*, ::Array<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource*>*>
      levelProductsData;

  __declspec(property(get = get_packIndex)) int32_t packIndex;

  static inline ::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductPackSource* New_ctor(::GlobalNamespace::BeatmapLevelPackSO* levelPack, int32_t packIndex);

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> const& __cordl_internal_get__levelPack() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackSO>& __cordl_internal_get__levelPack();

  constexpr ::ArrayW<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource*, ::Array<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource*>*> const&
  __cordl_internal_get__levelProductsData() const;

  constexpr ::ArrayW<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource*, ::Array<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource*>*>&
  __cordl_internal_get__levelProductsData();

  constexpr int32_t const& __cordl_internal_get__packIndex() const;

  constexpr int32_t& __cordl_internal_get__packIndex();

  constexpr void __cordl_internal_set__levelPack(::UnityW<::GlobalNamespace::BeatmapLevelPackSO> value);

  constexpr void __cordl_internal_set__levelProductsData(
      ::ArrayW<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource*, ::Array<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource*>*> value);

  constexpr void __cordl_internal_set__packIndex(int32_t value);

  /// @brief Method .ctor, addr 0x26e8f94, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelPackSO* levelPack, int32_t packIndex);

  /// @brief Method get_levelPack, addr 0x26e8f7c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> get_levelPack();

  /// @brief Method get_levelProductsData, addr 0x26e8f84, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource*, ::Array<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource*>*> get_levelProductsData();

  /// @brief Method get_packIndex, addr 0x26e8f74, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_packIndex();

  /// @brief Method set_levelProductsData, addr 0x26e8f8c, size 0x8, virtual false, abstract: false, final false
  inline void set_levelProductsData(::ArrayW<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource*, ::Array<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLevelProductPackSourceSO_LevelProductPackSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductPackSourceSO_LevelProductPackSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLevelProductPackSourceSO_LevelProductPackSource(SonyLevelProductPackSourceSO_LevelProductPackSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductPackSourceSO_LevelProductPackSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLevelProductPackSourceSO_LevelProductPackSource(SonyLevelProductPackSourceSO_LevelProductPackSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13192 };

  /// @brief Field _packIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ____packIndex;

  /// @brief Field _levelPack, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> ____levelPack;

  /// @brief Field _levelProductsData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource*, ::Array<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource*>*> ____levelProductsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductPackSource, ____packIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductPackSource, ____levelPack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductPackSource, ____levelProductsData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductPackSource, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyLevelProductPackSourceSO/LevelProductSource
class CORDL_TYPE SonyLevelProductPackSourceSO_LevelProductSource : public ::System::Object {
public:
  // Declarations
  /// @brief Field _level, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__level, put = __cordl_internal_set__level)) ::UnityW<::GlobalNamespace::BeatmapLevelSO> _level;

  /// @brief Field _levelIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__levelIndex, put = __cordl_internal_set__levelIndex)) int32_t _levelIndex;

  /// @brief Field _ps4SieaAcCode, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__ps4SieaAcCode, put = __cordl_internal_set__ps4SieaAcCode)) ::StringW _ps4SieaAcCode;

  /// @brief Field _ps4SieeDcCode, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ps4SieeDcCode, put = __cordl_internal_set__ps4SieeDcCode)) ::StringW _ps4SieeDcCode;

  /// @brief Field _ps5SieaAcCode, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5SieaAcCode, put = __cordl_internal_set__ps5SieaAcCode)) ::StringW _ps5SieaAcCode;

  /// @brief Field _ps5SieeDcCode, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5SieeDcCode, put = __cordl_internal_set__ps5SieeDcCode)) ::StringW _ps5SieeDcCode;

  __declspec(property(get = get_level)) ::UnityW<::GlobalNamespace::BeatmapLevelSO> level;

  __declspec(property(get = get_levelIndex)) int32_t levelIndex;

  __declspec(property(get = get_ps4SieaAcCode, put = set_ps4SieaAcCode)) ::StringW ps4SieaAcCode;

  __declspec(property(get = get_ps4SieeDcCode, put = set_ps4SieeDcCode)) ::StringW ps4SieeDcCode;

  __declspec(property(get = get_ps5SieaAcCode, put = set_ps5SieaAcCode)) ::StringW ps5SieaAcCode;

  __declspec(property(get = get_ps5SieeDcCode, put = set_ps5SieeDcCode)) ::StringW ps5SieeDcCode;

  static inline ::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource* New_ctor(::GlobalNamespace::BeatmapLevelSO* level, int32_t levelIndex);

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO> const& __cordl_internal_get__level() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO>& __cordl_internal_get__level();

  constexpr int32_t const& __cordl_internal_get__levelIndex() const;

  constexpr int32_t& __cordl_internal_get__levelIndex();

  constexpr ::StringW const& __cordl_internal_get__ps4SieaAcCode() const;

  constexpr ::StringW& __cordl_internal_get__ps4SieaAcCode();

  constexpr ::StringW const& __cordl_internal_get__ps4SieeDcCode() const;

  constexpr ::StringW& __cordl_internal_get__ps4SieeDcCode();

  constexpr ::StringW const& __cordl_internal_get__ps5SieaAcCode() const;

  constexpr ::StringW& __cordl_internal_get__ps5SieaAcCode();

  constexpr ::StringW const& __cordl_internal_get__ps5SieeDcCode() const;

  constexpr ::StringW& __cordl_internal_get__ps5SieeDcCode();

  constexpr void __cordl_internal_set__level(::UnityW<::GlobalNamespace::BeatmapLevelSO> value);

  constexpr void __cordl_internal_set__levelIndex(int32_t value);

  constexpr void __cordl_internal_set__ps4SieaAcCode(::StringW value);

  constexpr void __cordl_internal_set__ps4SieeDcCode(::StringW value);

  constexpr void __cordl_internal_set__ps5SieaAcCode(::StringW value);

  constexpr void __cordl_internal_set__ps5SieeDcCode(::StringW value);

  /// @brief Method .ctor, addr 0x26e91b4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelSO* level, int32_t levelIndex);

  /// @brief Method get_level, addr 0x26e922c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapLevelSO> get_level();

  /// @brief Method get_levelIndex, addr 0x26e91e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_levelIndex();

  /// @brief Method get_ps4SieaAcCode, addr 0x26e921c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ps4SieaAcCode();

  /// @brief Method get_ps4SieeDcCode, addr 0x26e920c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ps4SieeDcCode();

  /// @brief Method get_ps5SieaAcCode, addr 0x26e91fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ps5SieaAcCode();

  /// @brief Method get_ps5SieeDcCode, addr 0x26e91ec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ps5SieeDcCode();

  /// @brief Method set_ps4SieaAcCode, addr 0x26e9224, size 0x8, virtual false, abstract: false, final false
  inline void set_ps4SieaAcCode(::StringW value);

  /// @brief Method set_ps4SieeDcCode, addr 0x26e9214, size 0x8, virtual false, abstract: false, final false
  inline void set_ps4SieeDcCode(::StringW value);

  /// @brief Method set_ps5SieaAcCode, addr 0x26e9204, size 0x8, virtual false, abstract: false, final false
  inline void set_ps5SieaAcCode(::StringW value);

  /// @brief Method set_ps5SieeDcCode, addr 0x26e91f4, size 0x8, virtual false, abstract: false, final false
  inline void set_ps5SieeDcCode(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLevelProductPackSourceSO_LevelProductSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductPackSourceSO_LevelProductSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLevelProductPackSourceSO_LevelProductSource(SonyLevelProductPackSourceSO_LevelProductSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductPackSourceSO_LevelProductSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLevelProductPackSourceSO_LevelProductSource(SonyLevelProductPackSourceSO_LevelProductSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13193 };

  /// @brief Field _levelIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ____levelIndex;

  /// @brief Field _ps5SieeDcCode, offset: 0x18, size: 0x8, def value: None
  ::StringW ____ps5SieeDcCode;

  /// @brief Field _ps5SieaAcCode, offset: 0x20, size: 0x8, def value: None
  ::StringW ____ps5SieaAcCode;

  /// @brief Field _ps4SieeDcCode, offset: 0x28, size: 0x8, def value: None
  ::StringW ____ps4SieeDcCode;

  /// @brief Field _ps4SieaAcCode, offset: 0x30, size: 0x8, def value: None
  ::StringW ____ps4SieaAcCode;

  /// @brief Field _level, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelSO> ____level;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource, ____levelIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource, ____ps5SieeDcCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource, ____ps5SieaAcCode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource, ____ps4SieeDcCode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource, ____ps4SieaAcCode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource, ____level) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyLevelProductPackSourceSO/LevelProductRedirectionSource
class CORDL_TYPE SonyLevelProductPackSourceSO_LevelProductRedirectionSource : public ::System::Object {
public:
  // Declarations
  /// @brief Field _redirectedProductLabel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__redirectedProductLabel, put = __cordl_internal_set__redirectedProductLabel)) ::StringW _redirectedProductLabel;

  /// @brief Field _sourceLevelPackId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceLevelPackId, put = __cordl_internal_set__sourceLevelPackId)) ::StringW _sourceLevelPackId;

  /// @brief Field _validUntilDate, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__validUntilDate, put = __cordl_internal_set__validUntilDate)) ::StringW _validUntilDate;

  __declspec(property(get = get_redirectedProductLabel)) ::StringW redirectedProductLabel;

  __declspec(property(get = get_sourceLevelPackId)) ::StringW sourceLevelPackId;

  __declspec(property(get = get_validUntilDate)) ::StringW validUntilDate;

  static inline ::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__redirectedProductLabel() const;

  constexpr ::StringW& __cordl_internal_get__redirectedProductLabel();

  constexpr ::StringW const& __cordl_internal_get__sourceLevelPackId() const;

  constexpr ::StringW& __cordl_internal_get__sourceLevelPackId();

  constexpr ::StringW const& __cordl_internal_get__validUntilDate() const;

  constexpr ::StringW& __cordl_internal_get__validUntilDate();

  constexpr void __cordl_internal_set__redirectedProductLabel(::StringW value);

  constexpr void __cordl_internal_set__sourceLevelPackId(::StringW value);

  constexpr void __cordl_internal_set__validUntilDate(::StringW value);

  /// @brief Method .ctor, addr 0x26e924c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_redirectedProductLabel, addr 0x26e923c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_redirectedProductLabel();

  /// @brief Method get_sourceLevelPackId, addr 0x26e9234, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_sourceLevelPackId();

  /// @brief Method get_validUntilDate, addr 0x26e9244, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_validUntilDate();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLevelProductPackSourceSO_LevelProductRedirectionSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductPackSourceSO_LevelProductRedirectionSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLevelProductPackSourceSO_LevelProductRedirectionSource(SonyLevelProductPackSourceSO_LevelProductRedirectionSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductPackSourceSO_LevelProductRedirectionSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLevelProductPackSourceSO_LevelProductRedirectionSource(SonyLevelProductPackSourceSO_LevelProductRedirectionSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13194 };

  /// @brief Field _sourceLevelPackId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____sourceLevelPackId;

  /// @brief Field _redirectedProductLabel, offset: 0x18, size: 0x8, def value: None
  ::StringW ____redirectedProductLabel;

  /// @brief Field _validUntilDate, offset: 0x20, size: 0x8, def value: None
  ::StringW ____validUntilDate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource, ____sourceLevelPackId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource, ____redirectedProductLabel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource, ____validUntilDate) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyLevelProductPackSourceSO
class CORDL_TYPE SonyLevelProductPackSourceSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LevelProductPackSource = ::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductPackSource;

  using LevelProductRedirectionSource = ::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource;

  using LevelProductSource = ::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource;

  /// @brief Field _levelProductPackSource, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelProductPackSource,
                      put = __cordl_internal_set__levelProductPackSource)) ::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductPackSource* _levelProductPackSource;

  /// @brief Field _levelProductRedirectionSources, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelProductRedirectionSources,
                      put = __cordl_internal_set__levelProductRedirectionSources)) ::ArrayW<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource*,
                                                                                            ::Array<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource*>*>
      _levelProductRedirectionSources;

  __declspec(property(get = get_levelProductPackSource, put = set_levelProductPackSource)) ::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductPackSource* levelProductPackSource;

  __declspec(property(get =
                          get_redirectionSources)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource*>* redirectionSources;

  static inline ::GlobalNamespace::SonyLevelProductPackSourceSO* New_ctor();

  constexpr ::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductPackSource* const& __cordl_internal_get__levelProductPackSource() const;

  constexpr ::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductPackSource*& __cordl_internal_get__levelProductPackSource();

  constexpr ::ArrayW<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource*, ::Array<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource*>*> const&
  __cordl_internal_get__levelProductRedirectionSources() const;

  constexpr ::ArrayW<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource*, ::Array<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource*>*>&
  __cordl_internal_get__levelProductRedirectionSources();

  constexpr void __cordl_internal_set__levelProductPackSource(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductPackSource* value);

  constexpr void __cordl_internal_set__levelProductRedirectionSources(
      ::ArrayW<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource*, ::Array<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource*>*> value);

  /// @brief Method .ctor, addr 0x26e8ed8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_levelProductPackSource, addr 0x26e8ec0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductPackSource* get_levelProductPackSource();

  /// @brief Method get_redirectionSources, addr 0x26e8ed0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource*>* get_redirectionSources();

  /// @brief Method set_levelProductPackSource, addr 0x26e8ec8, size 0x8, virtual false, abstract: false, final false
  inline void set_levelProductPackSource(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductPackSource* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLevelProductPackSourceSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductPackSourceSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLevelProductPackSourceSO(SonyLevelProductPackSourceSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductPackSourceSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLevelProductPackSourceSO(SonyLevelProductPackSourceSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13195 };

  /// @brief Field _levelProductPackSource, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductPackSource* ____levelProductPackSource;

  /// @brief Field _levelProductRedirectionSources, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource*, ::Array<::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource*>*>
      ____levelProductRedirectionSources;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyLevelProductPackSourceSO, ____levelProductPackSource) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductPackSourceSO, ____levelProductRedirectionSources) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLevelProductPackSourceSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelProductPackSource_SonyLevelProductPackSourceSO___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelProductPackSource_SonyLevelProductPackSourceSO___c*, "", "SonyLevelProductPackSourceSO/LevelProductPackSource/<>c");
NEED_NO_BOX(::GlobalNamespace::SonyLevelProductPackSourceSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLevelProductPackSourceSO*, "", "SonyLevelProductPackSourceSO");
NEED_NO_BOX(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductPackSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductPackSource*, "", "SonyLevelProductPackSourceSO/LevelProductPackSource");
NEED_NO_BOX(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductRedirectionSource*, "", "SonyLevelProductPackSourceSO/LevelProductRedirectionSource");
NEED_NO_BOX(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLevelProductPackSourceSO_LevelProductSource*, "", "SonyLevelProductPackSourceSO/LevelProductSource");
