#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionObjectiveTypeCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MissionObjectiveTypeCollection)
namespace GlobalNamespace {
class MissionObjectiveTypeCollection___c;
}
namespace GlobalNamespace {
class MissionObjectiveTypeSO;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionObjectiveTypeCollection;
}
namespace GlobalNamespace {
class MissionObjectiveTypeCollection___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MissionObjectiveTypeCollection*);
MARK_REF_T(::GlobalNamespace::MissionObjectiveTypeCollection___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MissionObjectiveTypeCollection*, "", "MissionObjectiveTypeCollection");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MissionObjectiveTypeCollection___c*, "", "MissionObjectiveTypeCollection/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionObjectiveTypeCollection/<>c
class CORDL_TYPE MissionObjectiveTypeCollection___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::MissionObjectiveTypeCollection___c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Func_2<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>, ::StringW>* __9__1_0;

  static inline ::GlobalNamespace::MissionObjectiveTypeCollection___c* New_ctor();

  /// @brief Method <.ctor>b__1_0, addr 0x37520e0, size 0x14, virtual false, abstract: false, final false
  inline ::StringW __ctor_b__1_0(::GlobalNamespace::MissionObjectiveTypeSO* m);

  /// @brief Method .ctor, addr 0x37520dc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MissionObjectiveTypeCollection___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>, ::StringW>* getStaticF___9__1_0();

  static inline void setStaticF___9(::GlobalNamespace::MissionObjectiveTypeCollection___c* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionObjectiveTypeCollection___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveTypeCollection___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionObjectiveTypeCollection___c(MissionObjectiveTypeCollection___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveTypeCollection___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionObjectiveTypeCollection___c(MissionObjectiveTypeCollection___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15235 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MissionObjectiveTypeCollection___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionObjectiveTypeCollection
class CORDL_TYPE MissionObjectiveTypeCollection : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::MissionObjectiveTypeCollection___c;

  /// @brief Field _missionObjectiveTypeByName, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__missionObjectiveTypeByName,
      put =
          __cordl_internal_set__missionObjectiveTypeByName)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>* _missionObjectiveTypeByName;

  /// @brief Method GetMissionObjectiveTypeByName, addr 0x3752008, size 0x80, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> GetMissionObjectiveTypeByName(::StringW objectiveName);

  static inline ::GlobalNamespace::MissionObjectiveTypeCollection* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>* missionObjectiveTypes);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>* const& __cordl_internal_get__missionObjectiveTypeByName() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>*& __cordl_internal_get__missionObjectiveTypeByName();

  constexpr void __cordl_internal_set__missionObjectiveTypeByName(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>* value);

  /// @brief Method .ctor, addr 0x3751ef4, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>* missionObjectiveTypes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionObjectiveTypeCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveTypeCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionObjectiveTypeCollection(MissionObjectiveTypeCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveTypeCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionObjectiveTypeCollection(MissionObjectiveTypeCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15236 };

  /// @brief Field _missionObjectiveTypeByName, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>* ____missionObjectiveTypeByName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionObjectiveTypeCollection, ____missionObjectiveTypeByName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MissionObjectiveTypeCollection) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
