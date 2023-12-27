#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelsPromoDataSO)
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelSO;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelPackSO;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace GlobalNamespace {
class __BeatmapLevelsPromoDataSO____c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelsPromoDataSO;
}
namespace GlobalNamespace {
class __BeatmapLevelsPromoDataSO____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelsPromoDataSO);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelsPromoDataSO____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5821))
// CS Name: ::BeatmapLevelsPromoDataSO::<>c*
class CORDL_TYPE __BeatmapLevelsPromoDataSO____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__BeatmapLevelsPromoDataSO____c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0))::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelPackSO*, ::StringW>* __9__8_0;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0))::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelPackSO*, ::StringW>* __9__9_0;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0))::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelSO*, ::StringW>* __9__10_0;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0))::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelSO*, ::StringW>* __9__11_0;

  static inline void setStaticF___9(::GlobalNamespace::__BeatmapLevelsPromoDataSO____c* value);

  static inline ::GlobalNamespace::__BeatmapLevelsPromoDataSO____c* getStaticF___9();

  static inline void setStaticF___9__8_0(::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelPackSO*, ::StringW>* value);

  static inline ::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelPackSO*, ::StringW>* getStaticF___9__8_0();

  static inline void setStaticF___9__9_0(::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelPackSO*, ::StringW>* value);

  static inline ::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelPackSO*, ::StringW>* getStaticF___9__9_0();

  static inline void setStaticF___9__10_0(::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelSO*, ::StringW>* value);

  static inline ::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelSO*, ::StringW>* getStaticF___9__10_0();

  static inline void setStaticF___9__11_0(::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelSO*, ::StringW>* value);

  static inline ::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelSO*, ::StringW>* getStaticF___9__11_0();

  static inline ::GlobalNamespace::__BeatmapLevelsPromoDataSO____c* New_ctor();

  /// @brief Method .ctor addr 0x22ebb04 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <IsBeatmapLevelPackPromoted>b__8_0 addr 0x22ebb0c size 0x18 virtual false final false
  inline ::StringW _IsBeatmapLevelPackPromoted_b__8_0(::GlobalNamespace::PreviewBeatmapLevelPackSO* pack);

  /// @brief Method <IsBeatmapLevelPackUpdated>b__9_0 addr 0x22ebb24 size 0x18 virtual false final false
  inline ::StringW _IsBeatmapLevelPackUpdated_b__9_0(::GlobalNamespace::PreviewBeatmapLevelPackSO* pack);

  /// @brief Method <IsBeatmapLevelPromoted>b__10_0 addr 0x22ebb3c size 0x18 virtual false final false
  inline ::StringW _IsBeatmapLevelPromoted_b__10_0(::GlobalNamespace::PreviewBeatmapLevelSO* level);

  /// @brief Method <IsBeatmapLevelUpdated>b__11_0 addr 0x22ebb54 size 0x18 virtual false final false
  inline ::StringW _IsBeatmapLevelUpdated_b__11_0(::GlobalNamespace::PreviewBeatmapLevelSO* level);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsPromoDataSO____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelsPromoDataSO____c(__BeatmapLevelsPromoDataSO____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsPromoDataSO____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelsPromoDataSO____c(__BeatmapLevelsPromoDataSO____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelsPromoDataSO____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsPromoDataSO____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelsPromoDataSO
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5822))
// CS Name: ::BeatmapLevelsPromoDataSO*
class CORDL_TYPE BeatmapLevelsPromoDataSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using __c = ::GlobalNamespace::__BeatmapLevelsPromoDataSO____c;

  /// @brief Field _promotedBeatmapLevelPacks, offset 0x18, size 0x8
  __declspec(property(get = __get__promotedBeatmapLevelPacks,
                      put = __set__promotedBeatmapLevelPacks))::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>* _promotedBeatmapLevelPacks;

  /// @brief Field _updatedBeatmapLevelPacks, offset 0x20, size 0x8
  __declspec(property(get = __get__updatedBeatmapLevelPacks,
                      put = __set__updatedBeatmapLevelPacks))::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>* _updatedBeatmapLevelPacks;

  /// @brief Field _promotedBeatmapLevels, offset 0x28, size 0x8
  __declspec(property(get = __get__promotedBeatmapLevels, put = __set__promotedBeatmapLevels))::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelSO*>* _promotedBeatmapLevels;

  /// @brief Field _updatedBeatmapLevels, offset 0x30, size 0x8
  __declspec(property(get = __get__updatedBeatmapLevels, put = __set__updatedBeatmapLevels))::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelSO*>* _updatedBeatmapLevels;

  /// @brief Field _promotedBeatmapLevelPacksSet, offset 0x38, size 0x8
  __declspec(property(get = __get__promotedBeatmapLevelPacksSet, put = __set__promotedBeatmapLevelPacksSet))::System::Collections::Generic::HashSet_1<::StringW>* _promotedBeatmapLevelPacksSet;

  /// @brief Field _updatedBeatmapLevelPacksSet, offset 0x40, size 0x8
  __declspec(property(get = __get__updatedBeatmapLevelPacksSet, put = __set__updatedBeatmapLevelPacksSet))::System::Collections::Generic::HashSet_1<::StringW>* _updatedBeatmapLevelPacksSet;

  /// @brief Field _promotedBeatmapLevelsSet, offset 0x48, size 0x8
  __declspec(property(get = __get__promotedBeatmapLevelsSet, put = __set__promotedBeatmapLevelsSet))::System::Collections::Generic::HashSet_1<::StringW>* _promotedBeatmapLevelsSet;

  /// @brief Field _updatedBeatmapLevelsSet, offset 0x50, size 0x8
  __declspec(property(get = __get__updatedBeatmapLevelsSet, put = __set__updatedBeatmapLevelsSet))::System::Collections::Generic::HashSet_1<::StringW>* _updatedBeatmapLevelsSet;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>*& __get__promotedBeatmapLevelPacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>*> const& __get__promotedBeatmapLevelPacks() const;

  constexpr void __set__promotedBeatmapLevelPacks(::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>*& __get__updatedBeatmapLevelPacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>*> const& __get__updatedBeatmapLevelPacks() const;

  constexpr void __set__updatedBeatmapLevelPacks(::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelSO*>*& __get__promotedBeatmapLevels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelSO*>*> const& __get__promotedBeatmapLevels() const;

  constexpr void __set__promotedBeatmapLevels(::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelSO*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelSO*>*& __get__updatedBeatmapLevels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelSO*>*> const& __get__updatedBeatmapLevels() const;

  constexpr void __set__updatedBeatmapLevels(::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelSO*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__promotedBeatmapLevelPacksSet();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__promotedBeatmapLevelPacksSet() const;

  constexpr void __set__promotedBeatmapLevelPacksSet(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__updatedBeatmapLevelPacksSet();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__updatedBeatmapLevelPacksSet() const;

  constexpr void __set__updatedBeatmapLevelPacksSet(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__promotedBeatmapLevelsSet();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__promotedBeatmapLevelsSet() const;

  constexpr void __set__promotedBeatmapLevelsSet(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__updatedBeatmapLevelsSet();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__updatedBeatmapLevelsSet() const;

  constexpr void __set__updatedBeatmapLevelsSet(::System::Collections::Generic::HashSet_1<::StringW>* value);

  /// @brief Method IsBeatmapLevelPackPromoted addr 0x22eb6a8 size 0x1f8 virtual false final false
  inline bool IsBeatmapLevelPackPromoted(::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack);

  /// @brief Method IsBeatmapLevelPackUpdated addr 0x22eb8a0 size 0x1f8 virtual false final false
  inline bool IsBeatmapLevelPackUpdated(::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack);

  /// @brief Method IsBeatmapLevelPromoted addr 0x22e5ae8 size 0x1f8 virtual false final false
  inline bool IsBeatmapLevelPromoted(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);

  /// @brief Method IsBeatmapLevelUpdated addr 0x22e5ce0 size 0x1f8 virtual false final false
  inline bool IsBeatmapLevelUpdated(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);

  static inline ::GlobalNamespace::BeatmapLevelsPromoDataSO* New_ctor();

  /// @brief Method .ctor addr 0x22eba98 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsPromoDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelsPromoDataSO(BeatmapLevelsPromoDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsPromoDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelsPromoDataSO(BeatmapLevelsPromoDataSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelsPromoDataSO();

public:
  /// @brief Field _promotedBeatmapLevelPacks, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>* ____promotedBeatmapLevelPacks;

  /// @brief Field _updatedBeatmapLevelPacks, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>* ____updatedBeatmapLevelPacks;

  /// @brief Field _promotedBeatmapLevels, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelSO*>* ____promotedBeatmapLevels;

  /// @brief Field _updatedBeatmapLevels, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelSO*>* ____updatedBeatmapLevels;

  /// @brief Field _promotedBeatmapLevelPacksSet, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____promotedBeatmapLevelPacksSet;

  /// @brief Field _updatedBeatmapLevelPacksSet, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____updatedBeatmapLevelPacksSet;

  /// @brief Field _promotedBeatmapLevelsSet, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____promotedBeatmapLevelsSet;

  /// @brief Field _updatedBeatmapLevelsSet, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____updatedBeatmapLevelsSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelsPromoDataSO, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelsPromoDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelsPromoDataSO*, "", "BeatmapLevelsPromoDataSO");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelsPromoDataSO____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsPromoDataSO____c*, "", "BeatmapLevelsPromoDataSO/<>c");
