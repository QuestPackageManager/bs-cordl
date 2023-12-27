#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SongPackDataType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SongPackMasksModelItem)
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
class __SongPackMasksModelItem____c;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelPackSO;
}
namespace GlobalNamespace {
class BeatmapLevelPackCollectionSO;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4520))
// CS Name: ::SongPackMasksModelItem::<>c*
class CORDL_TYPE __SongPackMasksModelItem____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__SongPackMasksModelItem____c* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0))::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>* __9__11_0;

  /// @brief Field <>9__11_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_1, put = setStaticF___9__11_1))::System::Func_2<::GlobalNamespace::BeatmapLevelPackSO*, ::StringW>* __9__11_1;

  /// @brief Field <>9__11_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_2, put = setStaticF___9__11_2))::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelPackSO*, ::StringW>* __9__11_2;

  /// @brief Field <>9__11_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_4, put = setStaticF___9__11_4))::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>* __9__11_4;

  /// @brief Field <>9__11_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_3,
                             put = setStaticF___9__11_3))::System::Func_2<::GlobalNamespace::BeatmapLevelPackCollectionSO*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>* __9__11_3;

  static inline void setStaticF___9(::GlobalNamespace::__SongPackMasksModelItem____c* value);

  static inline ::GlobalNamespace::__SongPackMasksModelItem____c* getStaticF___9();

  static inline void setStaticF___9__11_0(::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>* value);

  static inline ::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>* getStaticF___9__11_0();

  static inline void setStaticF___9__11_1(::System::Func_2<::GlobalNamespace::BeatmapLevelPackSO*, ::StringW>* value);

  static inline ::System::Func_2<::GlobalNamespace::BeatmapLevelPackSO*, ::StringW>* getStaticF___9__11_1();

  static inline void setStaticF___9__11_2(::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelPackSO*, ::StringW>* value);

  static inline ::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelPackSO*, ::StringW>* getStaticF___9__11_2();

  static inline void setStaticF___9__11_4(::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>* value);

  static inline ::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>* getStaticF___9__11_4();

  static inline void setStaticF___9__11_3(::System::Func_2<::GlobalNamespace::BeatmapLevelPackCollectionSO*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>* value);

  static inline ::System::Func_2<::GlobalNamespace::BeatmapLevelPackCollectionSO*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>* getStaticF___9__11_3();

  static inline ::GlobalNamespace::__SongPackMasksModelItem____c* New_ctor();

  /// @brief Method .ctor addr 0x2364398 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <get_songPackMask>b__11_0 addr 0x23643a0 size 0x9c virtual false final false
  inline ::StringW _get_songPackMask_b__11_0(::GlobalNamespace::IBeatmapLevelPack* pack);

  /// @brief Method <get_songPackMask>b__11_1 addr 0x236443c size 0x18 virtual false final false
  inline ::StringW _get_songPackMask_b__11_1(::GlobalNamespace::BeatmapLevelPackSO* pack);

  /// @brief Method <get_songPackMask>b__11_2 addr 0x2364454 size 0x18 virtual false final false
  inline ::StringW _get_songPackMask_b__11_2(::GlobalNamespace::PreviewBeatmapLevelPackSO* pack);

  /// @brief Method <get_songPackMask>b__11_3 addr 0x236446c size 0x114 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* _get_songPackMask_b__11_3(::GlobalNamespace::BeatmapLevelPackCollectionSO* collection);

  /// @brief Method <get_songPackMask>b__11_4 addr 0x2364580 size 0x9c virtual false final false
  inline ::StringW _get_songPackMask_b__11_4(::GlobalNamespace::IBeatmapLevelPack* pack);

  // Ctor Parameters [CppParam { name: "", ty: "__SongPackMasksModelItem____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SongPackMasksModelItem____c(__SongPackMasksModelItem____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SongPackMasksModelItem____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SongPackMasksModelItem____c(__SongPackMasksModelItem____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongPackMasksModelItem____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongPackMasksModelItem____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SongPackMasksModelItem
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4517)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4521))
// CS Name: ::SongPackMasksModelItem*
class CORDL_TYPE SongPackMasksModelItem : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__SongPackMasksModelItem____c;

  /// @brief Field _type, offset 0x10, size 0x4
  __declspec(property(get = __get__type, put = __set__type))::GlobalNamespace::SongPackDataType _type;

  /// @brief Field _beatmapLevelPack, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapLevelPack, put = __set__beatmapLevelPack))::GlobalNamespace::BeatmapLevelPackSO* _beatmapLevelPack;

  /// @brief Field _previewBeatmapLevelPack, offset 0x20, size 0x8
  __declspec(property(get = __get__previewBeatmapLevelPack, put = __set__previewBeatmapLevelPack))::GlobalNamespace::PreviewBeatmapLevelPackSO* _previewBeatmapLevelPack;

  /// @brief Field _serializedName, offset 0x28, size 0x8
  __declspec(property(get = __get__serializedName, put = __set__serializedName))::StringW _serializedName;

  /// @brief Field _levelPackCollection, offset 0x30, size 0x8
  __declspec(property(get = __get__levelPackCollection, put = __set__levelPackCollection))::GlobalNamespace::BeatmapLevelPackCollectionSO* _levelPackCollection;

  /// @brief Field _beatmapLevelPacks, offset 0x38, size 0x8
  __declspec(property(get = __get__beatmapLevelPacks, put = __set__beatmapLevelPacks))::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackSO*>* _beatmapLevelPacks;

  /// @brief Field _previewBeatmapLevelPacks, offset 0x40, size 0x8
  __declspec(property(get = __get__previewBeatmapLevelPacks,
                      put = __set__previewBeatmapLevelPacks))::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>* _previewBeatmapLevelPacks;

  /// @brief Field _levelPackCollections, offset 0x48, size 0x8
  __declspec(property(get = __get__levelPackCollections,
                      put = __set__levelPackCollections))::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackCollectionSO*>* _levelPackCollections;

  __declspec(property(get = get_serializedName))::StringW serializedName;

  __declspec(property(get = get_songPackMask))::GlobalNamespace::SongPackMask songPackMask;

  __declspec(property(get = get_containsMultiplePacks)) bool containsMultiplePacks;

  constexpr ::GlobalNamespace::SongPackDataType& __get__type();

  constexpr ::GlobalNamespace::SongPackDataType const& __get__type() const;

  constexpr void __set__type(::GlobalNamespace::SongPackDataType value);

  constexpr ::GlobalNamespace::BeatmapLevelPackSO*& __get__beatmapLevelPack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackSO*> const& __get__beatmapLevelPack() const;

  constexpr void __set__beatmapLevelPack(::GlobalNamespace::BeatmapLevelPackSO* value);

  constexpr ::GlobalNamespace::PreviewBeatmapLevelPackSO*& __get__previewBeatmapLevelPack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PreviewBeatmapLevelPackSO*> const& __get__previewBeatmapLevelPack() const;

  constexpr void __set__previewBeatmapLevelPack(::GlobalNamespace::PreviewBeatmapLevelPackSO* value);

  constexpr ::StringW& __get__serializedName();

  constexpr ::StringW const& __get__serializedName() const;

  constexpr void __set__serializedName(::StringW value);

  constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO*& __get__levelPackCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> const& __get__levelPackCollection() const;

  constexpr void __set__levelPackCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackSO*>*& __get__beatmapLevelPacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackSO*>*> const& __get__beatmapLevelPacks() const;

  constexpr void __set__beatmapLevelPacks(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackSO*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>*& __get__previewBeatmapLevelPacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>*> const& __get__previewBeatmapLevelPacks() const;

  constexpr void __set__previewBeatmapLevelPacks(::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackCollectionSO*>*& __get__levelPackCollections();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackCollectionSO*>*> const& __get__levelPackCollections() const;

  constexpr void __set__levelPackCollections(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackCollectionSO*>* value);

  /// @brief Method get_serializedName addr 0x2363bdc size 0x40 virtual false final false
  inline ::StringW get_serializedName();

  /// @brief Method get_songPackMask addr 0x2363c1c size 0x3c8 virtual false final false
  inline ::GlobalNamespace::SongPackMask get_songPackMask();

  /// @brief Method get_containsMultiplePacks addr 0x2363fe4 size 0x1c virtual false final false
  inline bool get_containsMultiplePacks();

  static inline ::GlobalNamespace::SongPackMasksModelItem* New_ctor();

  /// @brief Method .ctor addr 0x236432c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModelItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongPackMasksModelItem(SongPackMasksModelItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModelItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongPackMasksModelItem(SongPackMasksModelItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPackMasksModelItem();

public:
  /// @brief Field _type, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::SongPackDataType ____type;

  /// @brief Field _beatmapLevelPack, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPackSO* ____beatmapLevelPack;

  /// @brief Field _previewBeatmapLevelPack, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PreviewBeatmapLevelPackSO* ____previewBeatmapLevelPack;

  /// @brief Field _serializedName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____serializedName;

  /// @brief Field _levelPackCollection, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPackCollectionSO* ____levelPackCollection;

  /// @brief Field _beatmapLevelPacks, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackSO*>* ____beatmapLevelPacks;

  /// @brief Field _previewBeatmapLevelPacks, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>* ____previewBeatmapLevelPacks;

  /// @brief Field _levelPackCollections, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackCollectionSO*>* ____levelPackCollections;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackMasksModelItem, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongPackMasksModelItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMasksModelItem*, "", "SongPackMasksModelItem");
NEED_NO_BOX(::GlobalNamespace::__SongPackMasksModelItem____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongPackMasksModelItem____c*, "", "SongPackMasksModelItem/<>c");
