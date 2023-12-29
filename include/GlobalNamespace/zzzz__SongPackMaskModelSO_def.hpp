#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMaskModelSO_def.hpp"
#include "Polyglot/zzzz__Language_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SongPackMaskModelSO)
namespace GlobalNamespace {
class __SongPackMaskModelSO__SongPackMaskItem;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class BeatmapLevelPackCollectionSO;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
struct __SongPackMaskModelSO__SongPackDataType;
}
namespace GlobalNamespace {
class __SongPackMaskModelSO__SongPackMaskItem____c;
}
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelPackSO;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __SongPackMaskModelSO__SongPackDataType;
}
namespace GlobalNamespace {
class SongPackMaskModelSO;
}
namespace GlobalNamespace {
class __SongPackMaskModelSO__SongPackMaskItem;
}
namespace GlobalNamespace {
class __SongPackMaskModelSO__SongPackMaskItem____c;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType);
MARK_REF_PTR_T(::GlobalNamespace::SongPackMaskModelSO);
MARK_REF_PTR_T(::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem);
MARK_REF_PTR_T(::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c);
// Type: ::SongPackDataType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4528))
// CS Name: ::SongPackMaskModelSO::SongPackDataType
struct CORDL_TYPE __SongPackMaskModelSO__SongPackDataType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SongPackMaskModelSO__SongPackDataType_Unwrapped
  enum struct ____SongPackMaskModelSO__SongPackDataType_Unwrapped : int32_t {
    __E_SingleBeatmapLevelPack = static_cast<int32_t>(0x0),
    __E_MultipleBeatmapLevelPacks = static_cast<int32_t>(0x1),
    __E_SinglePreviewBeatmapLevelPack = static_cast<int32_t>(0x2),
    __E_MultiplePreviewBeatmapLevelPacks = static_cast<int32_t>(0x3),
    __E_SingleBeatmapLevelPackCollection = static_cast<int32_t>(0x4),
    __E_MultipleBeatmapLevelPackCollections = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SongPackMaskModelSO__SongPackDataType_Unwrapped() const noexcept {
    return static_cast<____SongPackMaskModelSO__SongPackDataType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SongPackMaskModelSO__SongPackDataType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongPackMaskModelSO__SongPackDataType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field SingleBeatmapLevelPack value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType const SingleBeatmapLevelPack;

  /// @brief Field MultipleBeatmapLevelPacks value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType const MultipleBeatmapLevelPacks;

  /// @brief Field SinglePreviewBeatmapLevelPack value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType const SinglePreviewBeatmapLevelPack;

  /// @brief Field MultiplePreviewBeatmapLevelPacks value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType const MultiplePreviewBeatmapLevelPacks;

  /// @brief Field SingleBeatmapLevelPackCollection value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType const SingleBeatmapLevelPackCollection;

  /// @brief Field MultipleBeatmapLevelPackCollections value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType const MultipleBeatmapLevelPackCollections;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4529))
// CS Name: ::SongPackMaskModelSO::SongPackMaskItem::<>c*
class CORDL_TYPE __SongPackMaskModelSO__SongPackMaskItem____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c* __9;

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

  static inline void setStaticF___9(::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c* value);

  static inline ::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c* getStaticF___9();

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

  static inline ::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c* New_ctor();

  /// @brief Method .ctor addr 0x2215154 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <get_songPackMask>b__11_0 addr 0x221515c size 0x9c virtual false final false
  inline ::StringW _get_songPackMask_b__11_0(::GlobalNamespace::IBeatmapLevelPack* pack);

  /// @brief Method <get_songPackMask>b__11_1 addr 0x22151f8 size 0x18 virtual false final false
  inline ::StringW _get_songPackMask_b__11_1(::GlobalNamespace::BeatmapLevelPackSO* pack);

  /// @brief Method <get_songPackMask>b__11_2 addr 0x2215210 size 0x18 virtual false final false
  inline ::StringW _get_songPackMask_b__11_2(::GlobalNamespace::PreviewBeatmapLevelPackSO* pack);

  /// @brief Method <get_songPackMask>b__11_3 addr 0x2215228 size 0x114 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* _get_songPackMask_b__11_3(::GlobalNamespace::BeatmapLevelPackCollectionSO* collection);

  /// @brief Method <get_songPackMask>b__11_4 addr 0x221533c size 0x9c virtual false final false
  inline ::StringW _get_songPackMask_b__11_4(::GlobalNamespace::IBeatmapLevelPack* pack);

  // Ctor Parameters [CppParam { name: "", ty: "__SongPackMaskModelSO__SongPackMaskItem____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SongPackMaskModelSO__SongPackMaskItem____c(__SongPackMaskModelSO__SongPackMaskItem____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SongPackMaskModelSO__SongPackMaskItem____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SongPackMaskModelSO__SongPackMaskItem____c(__SongPackMaskModelSO__SongPackMaskItem____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongPackMaskModelSO__SongPackMaskItem____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SongPackMaskItem
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(4528))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4530))
// CS Name: ::SongPackMaskModelSO::SongPackMaskItem*
class CORDL_TYPE __SongPackMaskModelSO__SongPackMaskItem : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c;

  /// @brief Field _type, offset 0x10, size 0x4
  __declspec(property(get = __get__type, put = __set__type))::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType _type;

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

  constexpr ::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType& __get__type();

  constexpr ::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType const& __get__type() const;

  constexpr void __set__type(::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType value);

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

  /// @brief Method get_serializedName addr 0x2214ce4 size 0x40 virtual false final false
  inline ::StringW get_serializedName();

  /// @brief Method get_songPackMask addr 0x2214d24 size 0x3a0 virtual false final false
  inline ::GlobalNamespace::SongPackMask get_songPackMask();

  /// @brief Method get_containsMultiplePacks addr 0x22150c4 size 0x1c virtual false final false
  inline bool get_containsMultiplePacks();

  static inline ::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem* New_ctor();

  /// @brief Method .ctor addr 0x22150e8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SongPackMaskModelSO__SongPackMaskItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SongPackMaskModelSO__SongPackMaskItem(__SongPackMaskModelSO__SongPackMaskItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SongPackMaskModelSO__SongPackMaskItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SongPackMaskModelSO__SongPackMaskItem(__SongPackMaskModelSO__SongPackMaskItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongPackMaskModelSO__SongPackMaskItem();

public:
  /// @brief Field _type, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType ____type;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem, ____type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem, ____beatmapLevelPack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem, ____previewBeatmapLevelPack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem, ____serializedName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem, ____levelPackCollection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem, ____beatmapLevelPacks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem, ____previewBeatmapLevelPacks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem, ____levelPackCollections) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SongPackMaskModelSO
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879)), TypeDefinitionIndex(TypeDefinitionIndex(15538))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4531))
// CS Name: ::SongPackMaskModelSO*
class CORDL_TYPE SongPackMaskModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using SongPackMaskItem = ::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem;

  using SongPackDataType = ::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType;

  /// @brief Field _defaultSongPackMaskItems, offset 0x18, size 0x8
  __declspec(property(get = __get__defaultSongPackMaskItems, put = __set__defaultSongPackMaskItems))::System::Collections::Generic::List_1<::StringW>* _defaultSongPackMaskItems;

  /// @brief Field _customSongPackMaskItems, offset 0x20, size 0x8
  __declspec(property(get = __get__customSongPackMaskItems,
                      put = __set__customSongPackMaskItems))::ArrayW<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*,
                                                                     ::Array<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>*> _customSongPackMaskItems;

  /// @brief Field _ostAndExtrasCollection, offset 0x28, size 0x8
  __declspec(property(get = __get__ostAndExtrasCollection, put = __set__ostAndExtrasCollection))::GlobalNamespace::BeatmapLevelPackCollectionSO* _ostAndExtrasCollection;

  /// @brief Field _dlcCollection, offset 0x30, size 0x8
  __declspec(property(get = __get__dlcCollection, put = __set__dlcCollection))::GlobalNamespace::BeatmapLevelPackCollectionSO* _dlcCollection;

  /// @brief Field _currentLocalizedLanguage, offset 0x38, size 0x4
  __declspec(property(get = __get__currentLocalizedLanguage, put = __set__currentLocalizedLanguage))::Polyglot::Language _currentLocalizedLanguage;

  /// @brief Field _songPackSerializedNameToLocalizedNameDict, offset 0x40, size 0x8
  __declspec(property(get = __get__songPackSerializedNameToLocalizedNameDict, put = __set__songPackSerializedNameToLocalizedNameDict))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::ValueTuple_2<::StringW, bool>>* _songPackSerializedNameToLocalizedNameDict;

  /// @brief Field _songPackSerializedNameToMaskDict, offset 0x48, size 0x8
  __declspec(property(get = __get__songPackSerializedNameToMaskDict,
                      put = __set__songPackSerializedNameToMaskDict))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>* _songPackSerializedNameToMaskDict;

  /// @brief Field _songPackMaskToSerializedNameDict, offset 0x50, size 0x8
  __declspec(property(get = __get__songPackMaskToSerializedNameDict,
                      put = __set__songPackMaskToSerializedNameDict))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>* _songPackMaskToSerializedNameDict;

  __declspec(property(get = get_defaultSongPackMaskItems))::System::Collections::Generic::List_1<::StringW>* defaultSongPackMaskItems;

  __declspec(property(get = get_customSongPackMaskItems))::ArrayW<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*,
                                                                  ::Array<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>*> customSongPackMaskItems;

  __declspec(property(get = get_ostAndExtrasCollection))::GlobalNamespace::BeatmapLevelPackCollectionSO* ostAndExtrasCollection;

  __declspec(property(get = get_dlcCollection))::GlobalNamespace::BeatmapLevelPackCollectionSO* dlcCollection;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get__defaultSongPackMaskItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get__defaultSongPackMaskItems() const;

  constexpr void __set__defaultSongPackMaskItems(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::ArrayW<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*, ::Array<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>*>& __get__customSongPackMaskItems();

  constexpr ::ArrayW<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*, ::Array<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>*> const& __get__customSongPackMaskItems() const;

  constexpr void __set__customSongPackMaskItems(::ArrayW<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*, ::Array<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>*> value);

  constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO*& __get__ostAndExtrasCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> const& __get__ostAndExtrasCollection() const;

  constexpr void __set__ostAndExtrasCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO* value);

  constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO*& __get__dlcCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> const& __get__dlcCollection() const;

  constexpr void __set__dlcCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO* value);

  constexpr ::Polyglot::Language& __get__currentLocalizedLanguage();

  constexpr ::Polyglot::Language const& __get__currentLocalizedLanguage() const;

  constexpr void __set__currentLocalizedLanguage(::Polyglot::Language value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::ValueTuple_2<::StringW, bool>>*& __get__songPackSerializedNameToLocalizedNameDict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::ValueTuple_2<::StringW, bool>>*> const&
  __get__songPackSerializedNameToLocalizedNameDict() const;

  constexpr void __set__songPackSerializedNameToLocalizedNameDict(::System::Collections::Generic::Dictionary_2<::StringW, ::System::ValueTuple_2<::StringW, bool>>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>*& __get__songPackSerializedNameToMaskDict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>*> const& __get__songPackSerializedNameToMaskDict() const;

  constexpr void __set__songPackSerializedNameToMaskDict(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>*& __get__songPackMaskToSerializedNameDict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>*> const& __get__songPackMaskToSerializedNameDict() const;

  constexpr void __set__songPackMaskToSerializedNameDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>* value);

  /// @brief Method get_defaultSongPackMaskItems addr 0x2214370 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_defaultSongPackMaskItems();

  /// @brief Method get_customSongPackMaskItems addr 0x2214378 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*, ::Array<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>*> get_customSongPackMaskItems();

  /// @brief Method get_ostAndExtrasCollection addr 0x2214380 size 0x8 virtual false final false
  inline ::GlobalNamespace::BeatmapLevelPackCollectionSO* get_ostAndExtrasCollection();

  /// @brief Method get_dlcCollection addr 0x2214388 size 0x8 virtual false final false
  inline ::GlobalNamespace::BeatmapLevelPackCollectionSO* get_dlcCollection();

  /// @brief Method ToLocalizedName addr 0x2214390 size 0x18 virtual false final false
  inline ::StringW ToLocalizedName(::StringW serializedName);

  /// @brief Method ToLocalizedName addr 0x22143a8 size 0xbc virtual false final false
  inline ::StringW ToLocalizedName(::StringW serializedName, ByRef<bool> plural);

  /// @brief Method ToSongPackMask addr 0x2214b48 size 0x70 virtual false final false
  inline bool ToSongPackMask(::StringW serializedName, ByRef<::GlobalNamespace::SongPackMask> songPackMask);

  /// @brief Method ToSongPackMask addr 0x2214bb8 size 0x34 virtual false final false
  inline ::GlobalNamespace::SongPackMask ToSongPackMask(::StringW serializedName);

  /// @brief Method ToSerializedName addr 0x2214bec size 0x78 virtual false final false
  inline bool ToSerializedName(::GlobalNamespace::SongPackMask songPackMask, ByRef<::StringW> serializedName);

  /// @brief Method ToSerializedName addr 0x2214c64 size 0x80 virtual false final false
  inline ::StringW ToSerializedName(::GlobalNamespace::SongPackMask songPackMask);

  /// @brief Method LazyInit addr 0x2214464 size 0x6e4 virtual false final false
  inline void LazyInit();

  static inline ::GlobalNamespace::SongPackMaskModelSO* New_ctor();

  /// @brief Method .ctor addr 0x22150e0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SongPackMaskModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongPackMaskModelSO(SongPackMaskModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongPackMaskModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongPackMaskModelSO(SongPackMaskModelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPackMaskModelSO();

public:
  /// @brief Field _defaultSongPackMaskItems, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____defaultSongPackMaskItems;

  /// @brief Field _customSongPackMaskItems, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*, ::Array<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>*> ____customSongPackMaskItems;

  /// @brief Field _ostAndExtrasCollection, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPackCollectionSO* ____ostAndExtrasCollection;

  /// @brief Field _dlcCollection, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPackCollectionSO* ____dlcCollection;

  /// @brief Field _currentLocalizedLanguage, offset: 0x38, size: 0x4, def value: None
  ::Polyglot::Language ____currentLocalizedLanguage;

  /// @brief Field _songPackSerializedNameToLocalizedNameDict, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::ValueTuple_2<::StringW, bool>>* ____songPackSerializedNameToLocalizedNameDict;

  /// @brief Field _songPackSerializedNameToMaskDict, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>* ____songPackSerializedNameToMaskDict;

  /// @brief Field _songPackMaskToSerializedNameDict, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>* ____songPackMaskToSerializedNameDict;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackMaskModelSO, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMaskModelSO, ____defaultSongPackMaskItems) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMaskModelSO, ____customSongPackMaskItems) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMaskModelSO, ____ostAndExtrasCollection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMaskModelSO, ____dlcCollection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMaskModelSO, ____currentLocalizedLanguage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMaskModelSO, ____songPackSerializedNameToLocalizedNameDict) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMaskModelSO, ____songPackSerializedNameToMaskDict) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMaskModelSO, ____songPackMaskToSerializedNameDict) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType, "", "SongPackMaskModelSO/SongPackDataType");
NEED_NO_BOX(::GlobalNamespace::SongPackMaskModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMaskModelSO*, "", "SongPackMaskModelSO");
NEED_NO_BOX(::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*, "", "SongPackMaskModelSO/SongPackMaskItem");
NEED_NO_BOX(::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*, "", "SongPackMaskModelSO/SongPackMaskItem/<>c");
