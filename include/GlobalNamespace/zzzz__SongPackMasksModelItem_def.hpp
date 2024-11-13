#pragma once
// IWYU pragma private; include "GlobalNamespace/SongPackMasksModelItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__SongPackDataType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SongPackMasksModelItem)
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class PackDefinitionSO;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
class __SongPackMasksModelItem____c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class SongPackMasksModelItem;
}
namespace GlobalNamespace {
class __SongPackMasksModelItem____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongPackMasksModelItem);
MARK_REF_PTR_T(::GlobalNamespace::__SongPackMasksModelItem____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SongPackMasksModelItem::<>c*
class CORDL_TYPE __SongPackMasksModelItem____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__SongPackMasksModelItem____c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::StringW>* __9__7_0;

  static inline ::GlobalNamespace::__SongPackMasksModelItem____c* New_ctor();

  /// @brief Method <GetSongPackMask>b__7_0, addr 0x26ad260, size 0x20, virtual false, abstract: false, final false
  inline ::StringW _GetSongPackMask_b__7_0(::GlobalNamespace::PackDefinitionSO* pack);

  /// @brief Method .ctor, addr 0x26ad258, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__SongPackMasksModelItem____c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::StringW>* getStaticF___9__7_0();

  static inline void setStaticF___9(::GlobalNamespace::__SongPackMasksModelItem____c* value);

  static inline void setStaticF___9__7_0(::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongPackMasksModelItem____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SongPackMasksModelItem____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SongPackMasksModelItem____c(__SongPackMasksModelItem____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SongPackMasksModelItem____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SongPackMasksModelItem____c(__SongPackMasksModelItem____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13081 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongPackMasksModelItem____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SongPackMasksModelItem
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SongPackMasksModelItem*
class CORDL_TYPE SongPackMasksModelItem : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__SongPackMasksModelItem____c;

  /// @brief Field _beatmapLevelPackId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelPackId, put = __cordl_internal_set__beatmapLevelPackId)) ::StringW _beatmapLevelPackId;

  /// @brief Field _excludeTags, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__excludeTags, put = __cordl_internal_set__excludeTags)) ::GlobalNamespace::__PackDefinitionSO__Tags _excludeTags;

  /// @brief Field _includeTags, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__includeTags, put = __cordl_internal_set__includeTags)) ::GlobalNamespace::__PackDefinitionSO__Tags _includeTags;

  /// @brief Field _serializedName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__serializedName, put = __cordl_internal_set__serializedName)) ::StringW _serializedName;

  /// @brief Field _type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::GlobalNamespace::SongPackDataType _type;

  __declspec(property(get = get_containsMultiplePacks)) bool containsMultiplePacks;

  __declspec(property(get = get_serializedName)) ::StringW serializedName;

  /// @brief Method GetSongPackMask, addr 0x26acd44, size 0x18c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SongPackMask GetSongPackMask(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel);

  static inline ::GlobalNamespace::SongPackMasksModelItem* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__beatmapLevelPackId() const;

  constexpr ::StringW& __cordl_internal_get__beatmapLevelPackId();

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags const& __cordl_internal_get__excludeTags() const;

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags& __cordl_internal_get__excludeTags();

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags const& __cordl_internal_get__includeTags() const;

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags& __cordl_internal_get__includeTags();

  constexpr ::StringW const& __cordl_internal_get__serializedName() const;

  constexpr ::StringW& __cordl_internal_get__serializedName();

  constexpr ::GlobalNamespace::SongPackDataType const& __cordl_internal_get__type() const;

  constexpr ::GlobalNamespace::SongPackDataType& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__beatmapLevelPackId(::StringW value);

  constexpr void __cordl_internal_set__excludeTags(::GlobalNamespace::__PackDefinitionSO__Tags value);

  constexpr void __cordl_internal_set__includeTags(::GlobalNamespace::__PackDefinitionSO__Tags value);

  constexpr void __cordl_internal_set__serializedName(::StringW value);

  constexpr void __cordl_internal_set__type(::GlobalNamespace::SongPackDataType value);

  /// @brief Method .ctor, addr 0x26ad1f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_containsMultiplePacks, addr 0x26aced0, size 0x10, virtual false, abstract: false, final false
  inline bool get_containsMultiplePacks();

  /// @brief Method get_serializedName, addr 0x26acd28, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_serializedName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPackMasksModelItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModelItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongPackMasksModelItem(SongPackMasksModelItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModelItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongPackMasksModelItem(SongPackMasksModelItem const&) = delete;

  /// @brief Field _type, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::SongPackDataType ____type;

  /// @brief Field _serializedName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____serializedName;

  /// @brief Field _beatmapLevelPackId, offset: 0x20, size: 0x8, def value: None
  ::StringW ____beatmapLevelPackId;

  /// @brief Field _includeTags, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__PackDefinitionSO__Tags ____includeTags;

  /// @brief Field _excludeTags, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::__PackDefinitionSO__Tags ____excludeTags;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13082 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackMasksModelItem, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem, ____type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem, ____serializedName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem, ____beatmapLevelPackId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem, ____includeTags) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem, ____excludeTags) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongPackMasksModelItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMasksModelItem*, "", "SongPackMasksModelItem");
NEED_NO_BOX(::GlobalNamespace::__SongPackMasksModelItem____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongPackMasksModelItem____c*, "", "SongPackMasksModelItem/<>c");
