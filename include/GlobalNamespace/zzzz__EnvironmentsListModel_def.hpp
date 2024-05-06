#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentsListModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class IVerboseLogger;
}
namespace GlobalNamespace {
class __EnvironmentsListModel____c;
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
class __EnvironmentsListModel____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentsListModel);
MARK_REF_PTR_T(::GlobalNamespace::__EnvironmentsListModel____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnvironmentsListModel::<>c*
class CORDL_TYPE __EnvironmentsListModel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__EnvironmentsListModel____c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0))::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>* __9__12_0;

  /// @brief Field <>9__12_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_1, put = setStaticF___9__12_1))::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* __9__12_1;

  /// @brief Field <>9__12_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_2, put = setStaticF___9__12_2))::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* __9__12_2;

  /// @brief Field <>9__12_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_3, put = setStaticF___9__12_3))::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* __9__12_3;

  /// @brief Field <>9__13_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__13_0, put = setStaticF___9__13_0))::System::Action_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* __9__13_0;

  static inline ::GlobalNamespace::__EnvironmentsListModel____c* New_ctor();

  /// @brief Method <CreateFromAddressables>b__13_0, addr 0x149e9d8, size 0x4, virtual false, abstract: false, final false
  inline void _CreateFromAddressables_b__13_0(::GlobalNamespace::EnvironmentInfoSO* _);

  /// @brief Method <.ctor>b__12_0, addr 0x149e978, size 0x18, virtual false, abstract: false, final false
  inline int32_t __ctor_b__12_0(::GlobalNamespace::EnvironmentInfoSO* envInfo);

  /// @brief Method <.ctor>b__12_1, addr 0x149e990, size 0x18, virtual false, abstract: false, final false
  inline ::StringW __ctor_b__12_1(::GlobalNamespace::EnvironmentInfoSO* e);

  /// @brief Method <.ctor>b__12_2, addr 0x149e9a8, size 0x18, virtual false, abstract: false, final false
  inline ::StringW __ctor_b__12_2(::GlobalNamespace::EnvironmentInfoSO* e);

  /// @brief Method <.ctor>b__12_3, addr 0x149e9c0, size 0x18, virtual false, abstract: false, final false
  inline ::StringW __ctor_b__12_3(::GlobalNamespace::EnvironmentInfoSO* envInfo);

  /// @brief Method .ctor, addr 0x149e970, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__EnvironmentsListModel____c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>* getStaticF___9__12_0();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* getStaticF___9__12_1();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* getStaticF___9__12_2();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* getStaticF___9__12_3();

  static inline ::System::Action_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* getStaticF___9__13_0();

  static inline void setStaticF___9(::GlobalNamespace::__EnvironmentsListModel____c* value);

  static inline void setStaticF___9__12_0(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>* value);

  static inline void setStaticF___9__12_1(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* value);

  static inline void setStaticF___9__12_2(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* value);

  static inline void setStaticF___9__12_3(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* value);

  static inline void setStaticF___9__13_0(::System::Action_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentsListModel____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentsListModel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnvironmentsListModel____c(__EnvironmentsListModel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentsListModel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnvironmentsListModel____c(__EnvironmentsListModel____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnvironmentsListModel____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::EnvironmentsListModel
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnvironmentsListModel*
class CORDL_TYPE EnvironmentsListModel : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__EnvironmentsListModel____c;

  /// @brief Field _envInfoMap, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__envInfoMap,
                      put = __cordl_internal_set__envInfoMap))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* _envInfoMap;

  /// @brief Field _envInfos, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__envInfos,
                      put = __cordl_internal_set__envInfos))::ArrayW<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::Array<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*> _envInfos;

  /// @brief Field _environmentNames, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentNames, put = __cordl_internal_set__environmentNames))::ArrayW<::StringW, ::Array<::StringW>*> _environmentNames;

  /// @brief Field _environmentSerializedNames, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentSerializedNames,
                      put = __cordl_internal_set__environmentSerializedNames))::ArrayW<::StringW, ::Array<::StringW>*> _environmentSerializedNames;

  __declspec(property(get = get_environmentInfos))::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* environmentInfos;

  __declspec(property(get = get_environmentNames))::ArrayW<::StringW, ::Array<::StringW>*> environmentNames;

  __declspec(property(get = get_environmentSerializedNames))::ArrayW<::StringW, ::Array<::StringW>*> environmentSerializedNames;

  __declspec(property(get = get_loggerPrefix))::StringW loggerPrefix;

  /// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
  constexpr operator ::GlobalNamespace::IVerboseLogger*() noexcept;

  /// @brief Method CreateFromAddressables, addr 0x149e2f4, size 0x24c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::EnvironmentsListModel* CreateFromAddressables();

  /// @brief Method GetAllEnvironmentInfosWithType, addr 0x149e720, size 0x134, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* GetAllEnvironmentInfosWithType(::GlobalNamespace::EnvironmentType environmentType);

  /// @brief Method GetEnvironmentInfoBySerializedName, addr 0x149e540, size 0x70, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GetEnvironmentInfoBySerializedName(::StringW environmentSerializedName);

  /// @brief Method GetEnvironmentInfoBySerializedNameSafe, addr 0x149e5b0, size 0x170, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GetEnvironmentInfoBySerializedNameSafe(::StringW environmentSerializedName);

  /// @brief Method GetFirstEnvironmentInfoWithType, addr 0x149e854, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GetFirstEnvironmentInfoWithType(::GlobalNamespace::EnvironmentType environmentType);

  /// @brief Method GetLastEnvironmentInfoWithType, addr 0x149e8b0, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GetLastEnvironmentInfoWithType(::GlobalNamespace::EnvironmentType environmentType);

  static inline ::GlobalNamespace::EnvironmentsListModel* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* envInfoSOs);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*& __cordl_internal_get__envInfoMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*> const&
  __cordl_internal_get__envInfoMap() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::Array<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*> const& __cordl_internal_get__envInfos() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::Array<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*>& __cordl_internal_get__envInfos();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__environmentNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__environmentNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__environmentSerializedNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__environmentSerializedNames();

  constexpr void __cordl_internal_set__envInfoMap(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

  constexpr void __cordl_internal_set__envInfos(::ArrayW<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::Array<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*> value);

  constexpr void __cordl_internal_set__environmentNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__environmentSerializedNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x149dfa4, size 0x350, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* envInfoSOs);

  /// @brief Method get_environmentInfos, addr 0x149df8c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* get_environmentInfos();

  /// @brief Method get_environmentNames, addr 0x149df94, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_environmentNames();

  /// @brief Method get_environmentSerializedNames, addr 0x149df9c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_environmentSerializedNames();

  /// @brief Method get_loggerPrefix, addr 0x149df4c, size 0x40, virtual true, abstract: false, final true
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

  /// @brief Field _envInfos, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::Array<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*> ____envInfos;

  /// @brief Field _environmentSerializedNames, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____environmentSerializedNames;

  /// @brief Field _environmentNames, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____environmentNames;

  /// @brief Field _envInfoMap, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* ____envInfoMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentsListModel, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentsListModel, ____envInfos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentsListModel, ____environmentSerializedNames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentsListModel, ____environmentNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentsListModel, ____envInfoMap) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentsListModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentsListModel*, "", "EnvironmentsListModel");
NEED_NO_BOX(::GlobalNamespace::__EnvironmentsListModel____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnvironmentsListModel____c*, "", "EnvironmentsListModel/<>c");
