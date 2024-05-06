#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class __SonyLevelProductPackSourceSO__LevelProductPackSource;
}
namespace GlobalNamespace {
class __SonyLevelProductPackSourceSO__LevelProductPackSource____c;
}
namespace GlobalNamespace {
class __SonyLevelProductPackSourceSO__LevelProductRedirectionSource;
}
namespace GlobalNamespace {
class __SonyLevelProductPackSourceSO__LevelProductSource;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyLevelProductPackSourceSO;
}
namespace GlobalNamespace {
class __SonyLevelProductPackSourceSO__LevelProductPackSource;
}
namespace GlobalNamespace {
class __SonyLevelProductPackSourceSO__LevelProductPackSource____c;
}
namespace GlobalNamespace {
class __SonyLevelProductPackSourceSO__LevelProductRedirectionSource;
}
namespace GlobalNamespace {
class __SonyLevelProductPackSourceSO__LevelProductSource;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyLevelProductPackSourceSO);
MARK_REF_PTR_T(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource);
MARK_REF_PTR_T(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource____c);
MARK_REF_PTR_T(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource);
MARK_REF_PTR_T(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyLevelProductPackSourceSO::LevelProductPackSource::<>c*
class CORDL_TYPE __SonyLevelProductPackSourceSO__LevelProductPackSource____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource____c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF___9__10_0,
               put = setStaticF___9__10_0))::System::Func_3<::UnityW<::GlobalNamespace::BeatmapLevelSO>, int32_t, ::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource*>* __9__10_0;

  static inline ::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource____c* New_ctor();

  /// @brief Method <.ctor>b__10_0, addr 0x14df56c, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource* __ctor_b__10_0(::GlobalNamespace::BeatmapLevelSO* level, int32_t index);

  /// @brief Method .ctor, addr 0x14df564, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource____c* getStaticF___9();

  static inline ::System::Func_3<::UnityW<::GlobalNamespace::BeatmapLevelSO>, int32_t, ::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource*>* getStaticF___9__10_0();

  static inline void setStaticF___9(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource____c* value);

  static inline void setStaticF___9__10_0(::System::Func_3<::UnityW<::GlobalNamespace::BeatmapLevelSO>, int32_t, ::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyLevelProductPackSourceSO__LevelProductPackSource____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductPackSourceSO__LevelProductPackSource____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SonyLevelProductPackSourceSO__LevelProductPackSource____c(__SonyLevelProductPackSourceSO__LevelProductPackSource____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductPackSourceSO__LevelProductPackSource____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SonyLevelProductPackSourceSO__LevelProductPackSource____c(__SonyLevelProductPackSourceSO__LevelProductPackSource____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelProductPackSource
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyLevelProductPackSourceSO::LevelProductPackSource*
class CORDL_TYPE __SonyLevelProductPackSourceSO__LevelProductPackSource : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource____c;

  /// @brief Field _levelPack, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPack, put = __cordl_internal_set__levelPack))::UnityW<::GlobalNamespace::BeatmapLevelPackSO> _levelPack;

  /// @brief Field _levelProductsData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelProductsData,
                      put = __cordl_internal_set__levelProductsData))::ArrayW<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource*,
                                                                              ::Array<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource*>*> _levelProductsData;

  /// @brief Field _packIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__packIndex, put = __cordl_internal_set__packIndex)) int32_t _packIndex;

  __declspec(property(get = get_levelPack))::UnityW<::GlobalNamespace::BeatmapLevelPackSO> levelPack;

  __declspec(property(get = get_levelProductsData, put = set_levelProductsData))::ArrayW<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource*,
                                                                                         ::Array<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource*>*> levelProductsData;

  __declspec(property(get = get_packIndex)) int32_t packIndex;

  static inline ::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource* New_ctor(::GlobalNamespace::BeatmapLevelPackSO* levelPack, int32_t packIndex);

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> const& __cordl_internal_get__levelPack() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackSO>& __cordl_internal_get__levelPack();

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource*, ::Array<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource*>*> const&
  __cordl_internal_get__levelProductsData() const;

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource*, ::Array<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource*>*>&
  __cordl_internal_get__levelProductsData();

  constexpr int32_t const& __cordl_internal_get__packIndex() const;

  constexpr int32_t& __cordl_internal_get__packIndex();

  constexpr void __cordl_internal_set__levelPack(::UnityW<::GlobalNamespace::BeatmapLevelPackSO> value);

  constexpr void __cordl_internal_set__levelProductsData(
      ::ArrayW<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource*, ::Array<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource*>*> value);

  constexpr void __cordl_internal_set__packIndex(int32_t value);

  /// @brief Method .ctor, addr 0x14df3b8, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelPackSO* levelPack, int32_t packIndex);

  /// @brief Method get_levelPack, addr 0x14df3a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> get_levelPack();

  /// @brief Method get_levelProductsData, addr 0x14df3a8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource*, ::Array<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource*>*> get_levelProductsData();

  /// @brief Method get_packIndex, addr 0x14df398, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_packIndex();

  /// @brief Method set_levelProductsData, addr 0x14df3b0, size 0x8, virtual false, abstract: false, final false
  inline void
  set_levelProductsData(::ArrayW<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource*, ::Array<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyLevelProductPackSourceSO__LevelProductPackSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductPackSourceSO__LevelProductPackSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SonyLevelProductPackSourceSO__LevelProductPackSource(__SonyLevelProductPackSourceSO__LevelProductPackSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductPackSourceSO__LevelProductPackSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SonyLevelProductPackSourceSO__LevelProductPackSource(__SonyLevelProductPackSourceSO__LevelProductPackSource const&) = delete;

  /// @brief Field _packIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ____packIndex;

  /// @brief Field _levelPack, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> ____levelPack;

  /// @brief Field _levelProductsData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource*, ::Array<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource*>*> ____levelProductsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource, ____packIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource, ____levelPack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource, ____levelProductsData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelProductSource
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyLevelProductPackSourceSO::LevelProductSource*
class CORDL_TYPE __SonyLevelProductPackSourceSO__LevelProductSource : public ::System::Object {
public:
  // Declarations
  /// @brief Field _level, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__level, put = __cordl_internal_set__level))::UnityW<::GlobalNamespace::BeatmapLevelSO> _level;

  /// @brief Field _levelIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__levelIndex, put = __cordl_internal_set__levelIndex)) int32_t _levelIndex;

  /// @brief Field _ps4SieaAcCode, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__ps4SieaAcCode, put = __cordl_internal_set__ps4SieaAcCode))::StringW _ps4SieaAcCode;

  /// @brief Field _ps4SieeDcCode, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ps4SieeDcCode, put = __cordl_internal_set__ps4SieeDcCode))::StringW _ps4SieeDcCode;

  /// @brief Field _ps5SieaAcCode, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5SieaAcCode, put = __cordl_internal_set__ps5SieaAcCode))::StringW _ps5SieaAcCode;

  /// @brief Field _ps5SieeDcCode, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5SieeDcCode, put = __cordl_internal_set__ps5SieeDcCode))::StringW _ps5SieeDcCode;

  __declspec(property(get = get_level))::UnityW<::GlobalNamespace::BeatmapLevelSO> level;

  __declspec(property(get = get_levelIndex)) int32_t levelIndex;

  __declspec(property(get = get_ps4SieaAcCode, put = set_ps4SieaAcCode))::StringW ps4SieaAcCode;

  __declspec(property(get = get_ps4SieeDcCode, put = set_ps4SieeDcCode))::StringW ps4SieeDcCode;

  __declspec(property(get = get_ps5SieaAcCode, put = set_ps5SieaAcCode))::StringW ps5SieaAcCode;

  __declspec(property(get = get_ps5SieeDcCode, put = set_ps5SieeDcCode))::StringW ps5SieeDcCode;

  static inline ::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource* New_ctor(::GlobalNamespace::BeatmapLevelSO* level, int32_t levelIndex);

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

  /// @brief Method .ctor, addr 0x14df5e4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelSO* level, int32_t levelIndex);

  /// @brief Method get_level, addr 0x14df65c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapLevelSO> get_level();

  /// @brief Method get_levelIndex, addr 0x14df614, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_levelIndex();

  /// @brief Method get_ps4SieaAcCode, addr 0x14df64c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ps4SieaAcCode();

  /// @brief Method get_ps4SieeDcCode, addr 0x14df63c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ps4SieeDcCode();

  /// @brief Method get_ps5SieaAcCode, addr 0x14df62c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ps5SieaAcCode();

  /// @brief Method get_ps5SieeDcCode, addr 0x14df61c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ps5SieeDcCode();

  /// @brief Method set_ps4SieaAcCode, addr 0x14df654, size 0x8, virtual false, abstract: false, final false
  inline void set_ps4SieaAcCode(::StringW value);

  /// @brief Method set_ps4SieeDcCode, addr 0x14df644, size 0x8, virtual false, abstract: false, final false
  inline void set_ps4SieeDcCode(::StringW value);

  /// @brief Method set_ps5SieaAcCode, addr 0x14df634, size 0x8, virtual false, abstract: false, final false
  inline void set_ps5SieaAcCode(::StringW value);

  /// @brief Method set_ps5SieeDcCode, addr 0x14df624, size 0x8, virtual false, abstract: false, final false
  inline void set_ps5SieeDcCode(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyLevelProductPackSourceSO__LevelProductSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductPackSourceSO__LevelProductSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SonyLevelProductPackSourceSO__LevelProductSource(__SonyLevelProductPackSourceSO__LevelProductSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductPackSourceSO__LevelProductSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SonyLevelProductPackSourceSO__LevelProductSource(__SonyLevelProductPackSourceSO__LevelProductSource const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource, ____levelIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource, ____ps5SieeDcCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource, ____ps5SieaAcCode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource, ____ps4SieeDcCode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource, ____ps4SieaAcCode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource, ____level) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelProductRedirectionSource
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyLevelProductPackSourceSO::LevelProductRedirectionSource*
class CORDL_TYPE __SonyLevelProductPackSourceSO__LevelProductRedirectionSource : public ::System::Object {
public:
  // Declarations
  /// @brief Field _redirectedProductLabel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__redirectedProductLabel, put = __cordl_internal_set__redirectedProductLabel))::StringW _redirectedProductLabel;

  /// @brief Field _sourceLevelPackId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceLevelPackId, put = __cordl_internal_set__sourceLevelPackId))::StringW _sourceLevelPackId;

  /// @brief Field _validUntilDate, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__validUntilDate, put = __cordl_internal_set__validUntilDate))::StringW _validUntilDate;

  __declspec(property(get = get_redirectedProductLabel))::StringW redirectedProductLabel;

  __declspec(property(get = get_sourceLevelPackId))::StringW sourceLevelPackId;

  __declspec(property(get = get_validUntilDate))::StringW validUntilDate;

  static inline ::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__redirectedProductLabel() const;

  constexpr ::StringW& __cordl_internal_get__redirectedProductLabel();

  constexpr ::StringW const& __cordl_internal_get__sourceLevelPackId() const;

  constexpr ::StringW& __cordl_internal_get__sourceLevelPackId();

  constexpr ::StringW const& __cordl_internal_get__validUntilDate() const;

  constexpr ::StringW& __cordl_internal_get__validUntilDate();

  constexpr void __cordl_internal_set__redirectedProductLabel(::StringW value);

  constexpr void __cordl_internal_set__sourceLevelPackId(::StringW value);

  constexpr void __cordl_internal_set__validUntilDate(::StringW value);

  /// @brief Method .ctor, addr 0x14df67c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_redirectedProductLabel, addr 0x14df66c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_redirectedProductLabel();

  /// @brief Method get_sourceLevelPackId, addr 0x14df664, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_sourceLevelPackId();

  /// @brief Method get_validUntilDate, addr 0x14df674, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_validUntilDate();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyLevelProductPackSourceSO__LevelProductRedirectionSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductPackSourceSO__LevelProductRedirectionSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SonyLevelProductPackSourceSO__LevelProductRedirectionSource(__SonyLevelProductPackSourceSO__LevelProductRedirectionSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductPackSourceSO__LevelProductRedirectionSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SonyLevelProductPackSourceSO__LevelProductRedirectionSource(__SonyLevelProductPackSourceSO__LevelProductRedirectionSource const&) = delete;

  /// @brief Field _sourceLevelPackId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____sourceLevelPackId;

  /// @brief Field _redirectedProductLabel, offset: 0x18, size: 0x8, def value: None
  ::StringW ____redirectedProductLabel;

  /// @brief Field _validUntilDate, offset: 0x20, size: 0x8, def value: None
  ::StringW ____validUntilDate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource, ____sourceLevelPackId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource, ____redirectedProductLabel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource, ____validUntilDate) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SonyLevelProductPackSourceSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyLevelProductPackSourceSO*
class CORDL_TYPE SonyLevelProductPackSourceSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LevelProductPackSource = ::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource;

  using LevelProductRedirectionSource = ::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource;

  using LevelProductSource = ::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource;

  /// @brief Field _levelProductPackSource, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelProductPackSource,
                      put = __cordl_internal_set__levelProductPackSource))::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource* _levelProductPackSource;

  /// @brief Field _levelProductRedirectionSources, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__levelProductRedirectionSources,
      put = __cordl_internal_set__levelProductRedirectionSources))::ArrayW<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource*,
                                                                           ::Array<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource*>*> _levelProductRedirectionSources;

  __declspec(property(get = get_levelProductPackSource, put = set_levelProductPackSource))::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource* levelProductPackSource;

  __declspec(
      property(get = get_redirectionSources))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource*>* redirectionSources;

  static inline ::GlobalNamespace::SonyLevelProductPackSourceSO* New_ctor();

  constexpr ::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource*& __cordl_internal_get__levelProductPackSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource*> const& __cordl_internal_get__levelProductPackSource() const;

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource*,
                     ::Array<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource*>*> const&
  __cordl_internal_get__levelProductRedirectionSources() const;

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource*, ::Array<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource*>*>&
  __cordl_internal_get__levelProductRedirectionSources();

  constexpr void __cordl_internal_set__levelProductPackSource(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource* value);

  constexpr void __cordl_internal_set__levelProductRedirectionSources(
      ::ArrayW<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource*, ::Array<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource*>*> value);

  /// @brief Method .ctor, addr 0x14df30c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_levelProductPackSource, addr 0x14df2f4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource* get_levelProductPackSource();

  /// @brief Method get_redirectionSources, addr 0x14df304, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource*>* get_redirectionSources();

  /// @brief Method set_levelProductPackSource, addr 0x14df2fc, size 0x8, virtual false, abstract: false, final false
  inline void set_levelProductPackSource(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource* value);

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

  /// @brief Field _levelProductPackSource, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource* ____levelProductPackSource;

  /// @brief Field _levelProductRedirectionSources, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource*, ::Array<::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource*>*>
      ____levelProductRedirectionSources;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLevelProductPackSourceSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductPackSourceSO, ____levelProductPackSource) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductPackSourceSO, ____levelProductRedirectionSources) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyLevelProductPackSourceSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLevelProductPackSourceSO*, "", "SonyLevelProductPackSourceSO");
NEED_NO_BOX(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource*, "", "SonyLevelProductPackSourceSO/LevelProductPackSource");
NEED_NO_BOX(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductPackSource____c*, "", "SonyLevelProductPackSourceSO/LevelProductPackSource/<>c");
NEED_NO_BOX(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductRedirectionSource*, "", "SonyLevelProductPackSourceSO/LevelProductRedirectionSource");
NEED_NO_BOX(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyLevelProductPackSourceSO__LevelProductSource*, "", "SonyLevelProductPackSourceSO/LevelProductSource");
