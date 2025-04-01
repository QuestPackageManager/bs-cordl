#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentsListModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IVerboseLogger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentsListModel)
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
struct EnvironmentType;
}
namespace GlobalNamespace {
class EnvironmentsListModel___c;
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
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentsListModel);
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentsListModel___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentsListModel/<>c
class CORDL_TYPE EnvironmentsListModel___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::EnvironmentsListModel___c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0)) ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>* __9__12_0;

  /// @brief Field <>9__12_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_1, put = setStaticF___9__12_1)) ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, bool>* __9__12_1;

  /// @brief Field <>9__12_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_2, put = setStaticF___9__12_2)) ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* __9__12_2;

  /// @brief Field <>9__12_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_3, put = setStaticF___9__12_3)) ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, bool>* __9__12_3;

  /// @brief Field <>9__12_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_4, put = setStaticF___9__12_4)) ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* __9__12_4;

  /// @brief Field <>9__12_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_5, put = setStaticF___9__12_5)) ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* __9__12_5;

  /// @brief Field <>9__13_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_0, put = setStaticF___9__13_0)) ::System::Action_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* __9__13_0;

  static inline ::GlobalNamespace::EnvironmentsListModel___c* New_ctor();

  /// @brief Method <CreateFromAddressables>b__13_0, addr 0x26ad3f0, size 0x4, virtual false, abstract: false, final false
  inline void _CreateFromAddressables_b__13_0(::GlobalNamespace::EnvironmentInfoSO* _);

  /// @brief Method <.ctor>b__12_0, addr 0x26ad350, size 0x18, virtual false, abstract: false, final false
  inline int32_t __ctor_b__12_0(::GlobalNamespace::EnvironmentInfoSO* envInfo);

  /// @brief Method <.ctor>b__12_1, addr 0x26ad368, size 0x20, virtual false, abstract: false, final false
  inline bool __ctor_b__12_1(::GlobalNamespace::EnvironmentInfoSO* e);

  /// @brief Method <.ctor>b__12_2, addr 0x26ad388, size 0x18, virtual false, abstract: false, final false
  inline ::StringW __ctor_b__12_2(::GlobalNamespace::EnvironmentInfoSO* e);

  /// @brief Method <.ctor>b__12_3, addr 0x26ad3a0, size 0x20, virtual false, abstract: false, final false
  inline bool __ctor_b__12_3(::GlobalNamespace::EnvironmentInfoSO* e);

  /// @brief Method <.ctor>b__12_4, addr 0x26ad3c0, size 0x18, virtual false, abstract: false, final false
  inline ::StringW __ctor_b__12_4(::GlobalNamespace::EnvironmentInfoSO* e);

  /// @brief Method <.ctor>b__12_5, addr 0x26ad3d8, size 0x18, virtual false, abstract: false, final false
  inline ::StringW __ctor_b__12_5(::GlobalNamespace::EnvironmentInfoSO* envInfo);

  /// @brief Method .ctor, addr 0x26ad348, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::EnvironmentsListModel___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>* getStaticF___9__12_0();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, bool>* getStaticF___9__12_1();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* getStaticF___9__12_2();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, bool>* getStaticF___9__12_3();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* getStaticF___9__12_4();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* getStaticF___9__12_5();

  static inline ::System::Action_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* getStaticF___9__13_0();

  static inline void setStaticF___9(::GlobalNamespace::EnvironmentsListModel___c* value);

  static inline void setStaticF___9__12_0(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>* value);

  static inline void setStaticF___9__12_1(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, bool>* value);

  static inline void setStaticF___9__12_2(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* value);

  static inline void setStaticF___9__12_3(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, bool>* value);

  static inline void setStaticF___9__12_4(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* value);

  static inline void setStaticF___9__12_5(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* value);

  static inline void setStaticF___9__13_0(::System::Action_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12844 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentsListModel___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IVerboseLogger, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentsListModel
class CORDL_TYPE EnvironmentsListModel : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::EnvironmentsListModel___c;

  /// @brief Field _envInfoMap, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__envInfoMap,
                      put = __cordl_internal_set__envInfoMap)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* _envInfoMap;

  /// @brief Field _envInfos, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__envInfos,
                      put = __cordl_internal_set__envInfos)) ::ArrayW<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::Array<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*>
      _envInfos;

  /// @brief Field _normalEnvironmentNames, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__normalEnvironmentNames, put = __cordl_internal_set__normalEnvironmentNames)) ::ArrayW<::StringW, ::Array<::StringW>*> _normalEnvironmentNames;

  /// @brief Field _normalEnvironmentSerializedNames, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__normalEnvironmentSerializedNames, put = __cordl_internal_set__normalEnvironmentSerializedNames)) ::ArrayW<::StringW, ::Array<::StringW>*>
      _normalEnvironmentSerializedNames;

  __declspec(property(get = get_environmentInfos)) ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* environmentInfos;

  __declspec(property(get = get_loggerPrefix)) ::StringW loggerPrefix;

  __declspec(property(get = get_normalEnvironmentNames)) ::ArrayW<::StringW, ::Array<::StringW>*> normalEnvironmentNames;

  __declspec(property(get = get_normalEnvironmentSerializedNames)) ::ArrayW<::StringW, ::Array<::StringW>*> normalEnvironmentSerializedNames;

  /// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
  constexpr operator ::GlobalNamespace::IVerboseLogger*() noexcept;

  /// @brief Method CreateFromAddressables, addr 0x26acce8, size 0x240, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::EnvironmentsListModel* CreateFromAddressables();

  /// @brief Method GetAllEnvironmentInfosWithType, addr 0x26ad104, size 0x130, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* GetAllEnvironmentInfosWithType(::GlobalNamespace::EnvironmentType environmentType);

  /// @brief Method GetEnvironmentInfoBySerializedName, addr 0x26acf28, size 0x70, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GetEnvironmentInfoBySerializedName(::StringW environmentSerializedName);

  /// @brief Method GetEnvironmentInfoBySerializedNameSafe, addr 0x26acf98, size 0x16c, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GetEnvironmentInfoBySerializedNameSafe(::StringW environmentSerializedName);

  /// @brief Method GetFirstEnvironmentInfoWithType, addr 0x26ad234, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GetFirstEnvironmentInfoWithType(::GlobalNamespace::EnvironmentType environmentType);

  /// @brief Method GetLastEnvironmentInfoWithType, addr 0x26ad290, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GetLastEnvironmentInfoWithType(::GlobalNamespace::EnvironmentType environmentType);

  static inline ::GlobalNamespace::EnvironmentsListModel* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* envInfoSOs);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* const& __cordl_internal_get__envInfoMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*& __cordl_internal_get__envInfoMap();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::Array<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*> const& __cordl_internal_get__envInfos() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::Array<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*>& __cordl_internal_get__envInfos();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__normalEnvironmentNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__normalEnvironmentNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__normalEnvironmentSerializedNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__normalEnvironmentSerializedNames();

  constexpr void __cordl_internal_set__envInfoMap(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

  constexpr void __cordl_internal_set__envInfos(::ArrayW<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::Array<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*> value);

  constexpr void __cordl_internal_set__normalEnvironmentNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__normalEnvironmentSerializedNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x26ac848, size 0x4a0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* envInfoSOs);

  /// @brief Method get_environmentInfos, addr 0x26ac830, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* get_environmentInfos();

  /// @brief Method get_loggerPrefix, addr 0x26ac7f0, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_loggerPrefix();

  /// @brief Method get_normalEnvironmentNames, addr 0x26ac838, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_normalEnvironmentNames();

  /// @brief Method get_normalEnvironmentSerializedNames, addr 0x26ac840, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_normalEnvironmentSerializedNames();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12845 };

  /// @brief Field _envInfos, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::Array<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*> ____envInfos;

  /// @brief Field _normalEnvironmentSerializedNames, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____normalEnvironmentSerializedNames;

  /// @brief Field _normalEnvironmentNames, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____normalEnvironmentNames;

  /// @brief Field _envInfoMap, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* ____envInfoMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentsListModel, ____envInfos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentsListModel, ____normalEnvironmentSerializedNames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentsListModel, ____normalEnvironmentNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentsListModel, ____envInfoMap) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentsListModel, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentsListModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentsListModel*, "", "EnvironmentsListModel");
NEED_NO_BOX(::GlobalNamespace::EnvironmentsListModel___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentsListModel___c*, "", "EnvironmentsListModel/<>c");
