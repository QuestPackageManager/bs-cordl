#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentsListModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentsListModel)
namespace GlobalNamespace {
struct BeatmapCharacteristic;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
struct EnvironmentType;
}
namespace GlobalNamespace {
class EnvironmentsListModel___c;
}
namespace GlobalNamespace {
class EnvironmentsListModel___c__DisplayClass22_0;
}
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentsListModel;
}
namespace GlobalNamespace {
class EnvironmentsListModel___c;
}
namespace GlobalNamespace {
class EnvironmentsListModel___c__DisplayClass22_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EnvironmentsListModel*);
MARK_REF_T(::GlobalNamespace::EnvironmentsListModel___c*);
MARK_REF_T(::GlobalNamespace::EnvironmentsListModel___c__DisplayClass22_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnvironmentsListModel*, "", "EnvironmentsListModel");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnvironmentsListModel___c*, "", "EnvironmentsListModel/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnvironmentsListModel___c__DisplayClass22_0*, "", "EnvironmentsListModel/<>c__DisplayClass22_0");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentsListModel/<>c
class CORDL_TYPE EnvironmentsListModel___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::EnvironmentsListModel___c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0)) ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>* __9__14_0;

  /// @brief Field <>9__14_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_1, put = setStaticF___9__14_1)) ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* __9__14_1;

  /// @brief Field <>9__14_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_2, put = setStaticF___9__14_2)) ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* __9__14_2;

  /// @brief Field <>9__14_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_3, put = setStaticF___9__14_3)) ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* __9__14_3;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0)) ::System::Action_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* __9__15_0;

  static inline ::GlobalNamespace::EnvironmentsListModel___c* New_ctor();

  /// @brief Method <CreateFromAddressables>b__15_0, addr 0x37071cc, size 0x4, virtual false, abstract: false, final false
  inline void _CreateFromAddressables_b__15_0(::GlobalNamespace::EnvironmentInfoSO* _);

  /// @brief Method <.ctor>b__14_0, addr 0x370717c, size 0x14, virtual false, abstract: false, final false
  inline int32_t __ctor_b__14_0(::GlobalNamespace::EnvironmentInfoSO* envInfo);

  /// @brief Method <.ctor>b__14_1, addr 0x37071b8, size 0x14, virtual false, abstract: false, final false
  inline ::StringW __ctor_b__14_1(::GlobalNamespace::EnvironmentInfoSO* envInfo);

  /// @brief Method <.ctor>b__14_2, addr 0x3707190, size 0x14, virtual false, abstract: false, final false
  inline ::StringW __ctor_b__14_2(::GlobalNamespace::EnvironmentInfoSO* e);

  /// @brief Method <.ctor>b__14_3, addr 0x37071a4, size 0x14, virtual false, abstract: false, final false
  inline ::StringW __ctor_b__14_3(::GlobalNamespace::EnvironmentInfoSO* e);

  /// @brief Method .ctor, addr 0x3707178, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::EnvironmentsListModel___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>* getStaticF___9__14_0();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* getStaticF___9__14_1();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* getStaticF___9__14_2();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* getStaticF___9__14_3();

  static inline ::System::Action_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* getStaticF___9__15_0();

  static inline void setStaticF___9(::GlobalNamespace::EnvironmentsListModel___c* value);

  static inline void setStaticF___9__14_0(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>* value);

  static inline void setStaticF___9__14_1(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* value);

  static inline void setStaticF___9__14_2(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* value);

  static inline void setStaticF___9__14_3(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* value);

  static inline void setStaticF___9__15_0(::System::Action_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentsListModel___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentsListModel___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentsListModel___c(EnvironmentsListModel___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentsListModel___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentsListModel___c(EnvironmentsListModel___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14821 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EnvironmentsListModel___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EnvironmentType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentsListModel/<>c__DisplayClass22_0
class CORDL_TYPE EnvironmentsListModel___c__DisplayClass22_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field environmentType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_environmentType, put = __cordl_internal_set_environmentType)) ::GlobalNamespace::EnvironmentType environmentType;

  static inline ::GlobalNamespace::EnvironmentsListModel___c__DisplayClass22_0* New_ctor();

  /// @brief Method <AddEnvironmentNames>b__0, addr 0x37071d0, size 0x20, virtual false, abstract: false, final false
  inline bool _AddEnvironmentNames_b__0(::GlobalNamespace::EnvironmentInfoSO* e);

  constexpr ::GlobalNamespace::EnvironmentType const& __cordl_internal_get_environmentType() const;

  constexpr ::GlobalNamespace::EnvironmentType& __cordl_internal_get_environmentType();

  constexpr void __cordl_internal_set_environmentType(::GlobalNamespace::EnvironmentType value);

  /// @brief Method .ctor, addr 0x3707120, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentsListModel___c__DisplayClass22_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentsListModel___c__DisplayClass22_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentsListModel___c__DisplayClass22_0(EnvironmentsListModel___c__DisplayClass22_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentsListModel___c__DisplayClass22_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentsListModel___c__DisplayClass22_0(EnvironmentsListModel___c__DisplayClass22_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14822 };

  /// @brief Field environmentType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentType ___environmentType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentsListModel___c__DisplayClass22_0, ___environmentType) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EnvironmentsListModel___c__DisplayClass22_0) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EnvironmentInfoSO, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentsListModel
class CORDL_TYPE EnvironmentsListModel : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::EnvironmentsListModel___c;

  using __c__DisplayClass22_0 = ::GlobalNamespace::EnvironmentsListModel___c__DisplayClass22_0;

  /// @brief Field _envInfoMap, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__envInfoMap,
                      put = __cordl_internal_set__envInfoMap)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* _envInfoMap;

  /// @brief Field _envInfos, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__envInfos, put = __cordl_internal_set__envInfos)) ::ArrayW<::UnityW<::GlobalNamespace::EnvironmentInfoSO>> _envInfos;

  /// @brief Field _environmentNames, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentNames,
                      put = __cordl_internal_set__environmentNames)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::ArrayW<::StringW>>* _environmentNames;

  /// @brief Field _environmentSerializedNames, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__environmentSerializedNames,
      put = __cordl_internal_set__environmentSerializedNames)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::ArrayW<::StringW>>* _environmentSerializedNames;

  __declspec(property(get = get_environmentInfos)) ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* environmentInfos;

  __declspec(property(get = get_environmentNames)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::ArrayW<::StringW>>* environmentNames;

  __declspec(property(get = get_environmentSerializedNames)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::ArrayW<::StringW>>* environmentSerializedNames;

  __declspec(property(get = get_loggerPrefix)) ::StringW loggerPrefix;

  /// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
  constexpr operator ::GlobalNamespace::IVerboseLogger*() noexcept;

  /// @brief Method AddEnvironmentNames, addr 0x3706938, size 0x170, virtual false, abstract: false, final false
  inline void AddEnvironmentNames(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::ArrayW<::StringW>>* envCollection,
                                  ::GlobalNamespace::EnvironmentType environmentType, ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* selectFn);

  /// @brief Method CreateFromAddressables, addr 0x3706aa8, size 0x26c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::EnvironmentsListModel* CreateFromAddressables();

  /// @brief Method EnvironmentTypeByCharacteristic, addr 0x37061b8, size 0x60, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentType EnvironmentTypeByCharacteristic(::GlobalNamespace::BeatmapCharacteristic characteristic);

  /// @brief Method GetAllEnvironmentInfosWithType, addr 0x3706f0c, size 0x144, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* GetAllEnvironmentInfosWithType(::GlobalNamespace::EnvironmentType environmentType);

  /// @brief Method GetEnvironmentInfoBySerializedName, addr 0x3706d14, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GetEnvironmentInfoBySerializedName(::StringW environmentSerializedName);

  /// @brief Method GetEnvironmentInfoBySerializedNameSafe, addr 0x3706d90, size 0x17c, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GetEnvironmentInfoBySerializedNameSafe(::StringW environmentSerializedName);

  /// @brief Method GetEnvironmentNamesByCharacteristic, addr 0x3706218, size 0x70, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetEnvironmentNamesByCharacteristic(::GlobalNamespace::BeatmapCharacteristic characteristic);

  /// @brief Method GetEnvironmentSerializedNamesByCharacteristic, addr 0x3706148, size 0x70, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetEnvironmentSerializedNamesByCharacteristic(::GlobalNamespace::BeatmapCharacteristic characteristic);

  /// @brief Method GetFirstEnvironmentInfoWithType, addr 0x3707050, size 0x60, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GetFirstEnvironmentInfoWithType(::GlobalNamespace::EnvironmentType environmentType);

  /// @brief Method GetLastEnvironmentInfoWithType, addr 0x37070b0, size 0x60, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GetLastEnvironmentInfoWithType(::GlobalNamespace::EnvironmentType environmentType);

  static inline ::GlobalNamespace::EnvironmentsListModel* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* envInfoSOs);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* const& __cordl_internal_get__envInfoMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*& __cordl_internal_get__envInfoMap();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::EnvironmentInfoSO>> const& __cordl_internal_get__envInfos() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>& __cordl_internal_get__envInfos();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::ArrayW<::StringW>>* const& __cordl_internal_get__environmentNames() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::ArrayW<::StringW>>*& __cordl_internal_get__environmentNames();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::ArrayW<::StringW>>* const& __cordl_internal_get__environmentSerializedNames() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::ArrayW<::StringW>>*& __cordl_internal_get__environmentSerializedNames();

  constexpr void __cordl_internal_set__envInfoMap(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

  constexpr void __cordl_internal_set__envInfos(::ArrayW<::UnityW<::GlobalNamespace::EnvironmentInfoSO>> value);

  constexpr void __cordl_internal_set__environmentNames(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::ArrayW<::StringW>>* value);

  constexpr void __cordl_internal_set__environmentSerializedNames(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::ArrayW<::StringW>>* value);

  /// @brief Method .ctor, addr 0x3706288, size 0x6b0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* envInfoSOs);

  /// @brief Method get_environmentInfos, addr 0x3706130, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* get_environmentInfos();

  /// @brief Method get_environmentNames, addr 0x3706138, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::ArrayW<::StringW>>* get_environmentNames();

  /// @brief Method get_environmentSerializedNames, addr 0x3706140, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::ArrayW<::StringW>>* get_environmentSerializedNames();

  /// @brief Method get_loggerPrefix, addr 0x37060ec, size 0x44, virtual true, abstract: false, final true
  inline ::StringW get_loggerPrefix();

  /// @brief Convert to "::GlobalNamespace::IVerboseLogger"
  constexpr ::GlobalNamespace::IVerboseLogger* i___GlobalNamespace__IVerboseLogger() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentsListModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentsListModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentsListModel(EnvironmentsListModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentsListModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentsListModel(EnvironmentsListModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14823 };

  /// @brief Field _envInfos, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::EnvironmentInfoSO>> ____envInfos;

  /// @brief Field _environmentSerializedNames, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::ArrayW<::StringW>>* ____environmentSerializedNames;

  /// @brief Field _environmentNames, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::ArrayW<::StringW>>* ____environmentNames;

  /// @brief Field _envInfoMap, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* ____envInfoMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentsListModel, ____envInfos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentsListModel, ____environmentSerializedNames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentsListModel, ____environmentNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentsListModel, ____envInfoMap) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EnvironmentsListModel) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
