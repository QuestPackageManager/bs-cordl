#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentLightGroups.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentLightGroups)
namespace GlobalNamespace {
class EnvironmentLightGroups___c;
}
namespace GlobalNamespace {
class ILightGroup;
}
namespace GlobalNamespace {
class LightGroupSO;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentLightGroups;
}
namespace GlobalNamespace {
class EnvironmentLightGroups___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentLightGroups);
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentLightGroups___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentLightGroups/<>c
class CORDL_TYPE EnvironmentLightGroups___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::EnvironmentLightGroups___c* __9;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0)) ::System::Func_2<::UnityW<::GlobalNamespace::LightGroupSO>, int32_t>* __9__9_0;

  static inline ::GlobalNamespace::EnvironmentLightGroups___c* New_ctor();

  /// @brief Method <Sort>b__9_0, addr 0x26b009c, size 0x18, virtual false, abstract: false, final false
  inline int32_t _Sort_b__9_0(::GlobalNamespace::LightGroupSO* s);

  /// @brief Method .ctor, addr 0x26b0094, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::EnvironmentLightGroups___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::LightGroupSO>, int32_t>* getStaticF___9__9_0();

  static inline void setStaticF___9(::GlobalNamespace::EnvironmentLightGroups___c* value);

  static inline void setStaticF___9__9_0(::System::Func_2<::UnityW<::GlobalNamespace::LightGroupSO>, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentLightGroups___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentLightGroups___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentLightGroups___c(EnvironmentLightGroups___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentLightGroups___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentLightGroups___c(EnvironmentLightGroups___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12837 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentLightGroups___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IEnvironmentLightGroups, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentLightGroups
class CORDL_TYPE EnvironmentLightGroups : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::EnvironmentLightGroups___c;

  /// @brief Field _lightGroupSODict, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroupSODict,
                      put = __cordl_internal_set__lightGroupSODict)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::LightGroupSO>>* _lightGroupSODict;

  /// @brief Field _lightGroupSOList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroupSOList,
                      put = __cordl_internal_set__lightGroupSOList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* _lightGroupSOList;

  /// @brief Field _lightGroupSOListForLightGroupDataDict, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__lightGroupSOListForLightGroupDataDict,
      put = __cordl_internal_set__lightGroupSOListForLightGroupDataDict)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* _lightGroupSOListForLightGroupDataDict;

  __declspec(property(get = get_lightGroupSOList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* lightGroupSOList;

  __declspec(property(get = get_lightGroups)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILightGroup*>* lightGroups;

  /// @brief Convert operator to "::GlobalNamespace::IEnvironmentLightGroups"
  constexpr operator ::GlobalNamespace::IEnvironmentLightGroups*() noexcept;

  /// @brief Method GetDataForGroup, addr 0x26afce0, size 0x238, virtual true, abstract: false, final true
  inline ::GlobalNamespace::ILightGroup* GetDataForGroup(int32_t groupId);

  static inline ::GlobalNamespace::EnvironmentLightGroups* New_ctor(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* lightGroups);

  /// @brief Method Sort, addr 0x26aff18, size 0x120, virtual false, abstract: false, final false
  inline void Sort();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::LightGroupSO>>* const& __cordl_internal_get__lightGroupSODict() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::LightGroupSO>>*& __cordl_internal_get__lightGroupSODict();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* const& __cordl_internal_get__lightGroupSOList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>*& __cordl_internal_get__lightGroupSOList();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* const& __cordl_internal_get__lightGroupSOListForLightGroupDataDict() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>*& __cordl_internal_get__lightGroupSOListForLightGroupDataDict();

  constexpr void __cordl_internal_set__lightGroupSODict(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::LightGroupSO>>* value);

  constexpr void __cordl_internal_set__lightGroupSOList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* value);

  constexpr void __cordl_internal_set__lightGroupSOListForLightGroupDataDict(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* value);

  /// @brief Method .ctor, addr 0x26afcb8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* lightGroups);

  /// @brief Method get_lightGroupSOList, addr 0x26afcb0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* get_lightGroupSOList();

  /// @brief Method get_lightGroups, addr 0x26afca8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILightGroup*>* get_lightGroups();

  /// @brief Convert to "::GlobalNamespace::IEnvironmentLightGroups"
  constexpr ::GlobalNamespace::IEnvironmentLightGroups* i___GlobalNamespace__IEnvironmentLightGroups() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentLightGroups();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentLightGroups", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentLightGroups(EnvironmentLightGroups&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentLightGroups", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentLightGroups(EnvironmentLightGroups const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12838 };

  /// @brief Field _lightGroupSOList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* ____lightGroupSOList;

  /// @brief Field _lightGroupSODict, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::LightGroupSO>>* ____lightGroupSODict;

  /// @brief Field _lightGroupSOListForLightGroupDataDict, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* ____lightGroupSOListForLightGroupDataDict;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentLightGroups, ____lightGroupSOList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentLightGroups, ____lightGroupSODict) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentLightGroups, ____lightGroupSOListForLightGroupDataDict) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentLightGroups, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentLightGroups);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentLightGroups*, "", "EnvironmentLightGroups");
NEED_NO_BOX(::GlobalNamespace::EnvironmentLightGroups___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentLightGroups___c*, "", "EnvironmentLightGroups/<>c");
