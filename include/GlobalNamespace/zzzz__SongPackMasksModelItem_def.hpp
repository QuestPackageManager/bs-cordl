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
class SongPackMasksModelItem___c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class SongPackMasksModelItem;
}
namespace GlobalNamespace {
class SongPackMasksModelItem___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongPackMasksModelItem);
MARK_REF_PTR_T(::GlobalNamespace::SongPackMasksModelItem___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongPackMasksModelItem/<>c
class CORDL_TYPE SongPackMasksModelItem___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::SongPackMasksModelItem___c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::StringW>* __9__7_0;

  static inline ::GlobalNamespace::SongPackMasksModelItem___c* New_ctor();

  /// @brief Method <GetSongPackMask>b__7_0, addr 0x36167e4, size 0x20, virtual false, abstract: false, final false
  inline ::StringW _GetSongPackMask_b__7_0(::GlobalNamespace::PackDefinitionSO* pack);

  /// @brief Method .ctor, addr 0x36167e0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::SongPackMasksModelItem___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::StringW>* getStaticF___9__7_0();

  static inline void setStaticF___9(::GlobalNamespace::SongPackMasksModelItem___c* value);

  static inline void setStaticF___9__7_0(::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPackMasksModelItem___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModelItem___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongPackMasksModelItem___c(SongPackMasksModelItem___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModelItem___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongPackMasksModelItem___c(SongPackMasksModelItem___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15093 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackMasksModelItem___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PackDefinitionSO::Tags, SongPackDataType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongPackMasksModelItem
class CORDL_TYPE SongPackMasksModelItem : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::SongPackMasksModelItem___c;

  /// @brief Field _beatmapLevelPackId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelPackId, put = __cordl_internal_set__beatmapLevelPackId)) ::StringW _beatmapLevelPackId;

  /// @brief Field _excludeTags, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__excludeTags, put = __cordl_internal_set__excludeTags)) ::GlobalNamespace::PackDefinitionSO_Tags _excludeTags;

  /// @brief Field _includeTags, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__includeTags, put = __cordl_internal_set__includeTags)) ::GlobalNamespace::PackDefinitionSO_Tags _includeTags;

  /// @brief Field _serializedName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__serializedName, put = __cordl_internal_set__serializedName)) ::StringW _serializedName;

  /// @brief Field _type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::GlobalNamespace::SongPackDataType _type;

  __declspec(property(get = get_containsMultiplePacks)) bool containsMultiplePacks;

  __declspec(property(get = get_serializedName)) ::StringW serializedName;

  /// @brief Method GetSongPackMask, addr 0x3616314, size 0x198, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SongPackMask GetSongPackMask(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel);

  static inline ::GlobalNamespace::SongPackMasksModelItem* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__beatmapLevelPackId() const;

  constexpr ::StringW& __cordl_internal_get__beatmapLevelPackId();

  constexpr ::GlobalNamespace::PackDefinitionSO_Tags const& __cordl_internal_get__excludeTags() const;

  constexpr ::GlobalNamespace::PackDefinitionSO_Tags& __cordl_internal_get__excludeTags();

  constexpr ::GlobalNamespace::PackDefinitionSO_Tags const& __cordl_internal_get__includeTags() const;

  constexpr ::GlobalNamespace::PackDefinitionSO_Tags& __cordl_internal_get__includeTags();

  constexpr ::StringW const& __cordl_internal_get__serializedName() const;

  constexpr ::StringW& __cordl_internal_get__serializedName();

  constexpr ::GlobalNamespace::SongPackDataType const& __cordl_internal_get__type() const;

  constexpr ::GlobalNamespace::SongPackDataType& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__beatmapLevelPackId(::StringW value);

  constexpr void __cordl_internal_set__excludeTags(::GlobalNamespace::PackDefinitionSO_Tags value);

  constexpr void __cordl_internal_set__includeTags(::GlobalNamespace::PackDefinitionSO_Tags value);

  constexpr void __cordl_internal_set__serializedName(::StringW value);

  constexpr void __cordl_internal_set__type(::GlobalNamespace::SongPackDataType value);

  /// @brief Method .ctor, addr 0x3616788, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_containsMultiplePacks, addr 0x36164ac, size 0x10, virtual false, abstract: false, final false
  inline bool get_containsMultiplePacks();

  /// @brief Method get_serializedName, addr 0x36162f8, size 0x1c, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15094 };

  /// @brief Field _type, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::SongPackDataType ____type;

  /// @brief Field _serializedName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____serializedName;

  /// @brief Field _beatmapLevelPackId, offset: 0x20, size: 0x8, def value: None
  ::StringW ____beatmapLevelPackId;

  /// @brief Field _includeTags, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::PackDefinitionSO_Tags ____includeTags;

  /// @brief Field _excludeTags, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::PackDefinitionSO_Tags ____excludeTags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem, ____type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem, ____serializedName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem, ____beatmapLevelPackId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem, ____includeTags) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem, ____excludeTags) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackMasksModelItem, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongPackMasksModelItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMasksModelItem*, "", "SongPackMasksModelItem");
NEED_NO_BOX(::GlobalNamespace::SongPackMasksModelItem___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMasksModelItem___c*, "", "SongPackMasksModelItem/<>c");
