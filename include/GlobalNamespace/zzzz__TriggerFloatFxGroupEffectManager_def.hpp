#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(TriggerFloatFxGroupEffectManager)
namespace GlobalNamespace {
class TriggerFloatFxGroupEffect;
}
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class __TriggerFloatFxGroupEffectManager____c;
}
namespace GlobalNamespace {
class FloatFxGroup;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class TriggerFloatFxGroupEffectManager;
}
namespace GlobalNamespace {
class __TriggerFloatFxGroupEffectManager____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TriggerFloatFxGroupEffectManager);
MARK_REF_PTR_T(::GlobalNamespace::__TriggerFloatFxGroupEffectManager____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4912))
// CS Name: ::TriggerFloatFxGroupEffectManager::<>c*
class CORDL_TYPE __TriggerFloatFxGroupEffectManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__TriggerFloatFxGroupEffectManager____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_2<::GlobalNamespace::FloatFxGroup*, bool>* __9__3_0;

  static inline void setStaticF___9(::GlobalNamespace::__TriggerFloatFxGroupEffectManager____c* value);

  static inline ::GlobalNamespace::__TriggerFloatFxGroupEffectManager____c* getStaticF___9();

  static inline void setStaticF___9__3_0(::System::Func_2<::GlobalNamespace::FloatFxGroup*, bool>* value);

  static inline ::System::Func_2<::GlobalNamespace::FloatFxGroup*, bool>* getStaticF___9__3_0();

  static inline ::GlobalNamespace::__TriggerFloatFxGroupEffectManager____c* New_ctor();

  /// @brief Method .ctor addr 0x23a7054 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Start>b__3_0 addr 0x23a705c size 0x18 virtual false final false
  inline bool _Start_b__3_0(::GlobalNamespace::FloatFxGroup* group);

  // Ctor Parameters [CppParam { name: "", ty: "__TriggerFloatFxGroupEffectManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TriggerFloatFxGroupEffectManager____c(__TriggerFloatFxGroupEffectManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TriggerFloatFxGroupEffectManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TriggerFloatFxGroupEffectManager____c(__TriggerFloatFxGroupEffectManager____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TriggerFloatFxGroupEffectManager____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TriggerFloatFxGroupEffectManager____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TriggerFloatFxGroupEffectManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4913))
// CS Name: ::TriggerFloatFxGroupEffectManager*
class CORDL_TYPE TriggerFloatFxGroupEffectManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__TriggerFloatFxGroupEffectManager____c;

  /// @brief Field _floatFxGroups, offset 0x18, size 0x8
  __declspec(property(get = __get__floatFxGroups, put = __set__floatFxGroups))::ArrayW<::GlobalNamespace::FloatFxGroup*, ::Array<::GlobalNamespace::FloatFxGroup*>*> _floatFxGroups;

  /// @brief Field _container, offset 0x20, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _floatFxGroupEffects, offset 0x28, size 0x8
  __declspec(property(get = __get__floatFxGroupEffects, put = __set__floatFxGroupEffects))::System::Collections::Generic::List_1<::GlobalNamespace::TriggerFloatFxGroupEffect*>* _floatFxGroupEffects;

  constexpr ::ArrayW<::GlobalNamespace::FloatFxGroup*, ::Array<::GlobalNamespace::FloatFxGroup*>*>& __get__floatFxGroups();

  constexpr ::ArrayW<::GlobalNamespace::FloatFxGroup*, ::Array<::GlobalNamespace::FloatFxGroup*>*> const& __get__floatFxGroups() const;

  constexpr void __set__floatFxGroups(::ArrayW<::GlobalNamespace::FloatFxGroup*, ::Array<::GlobalNamespace::FloatFxGroup*>*> value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TriggerFloatFxGroupEffect*>*& __get__floatFxGroupEffects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::TriggerFloatFxGroupEffect*>*> const& __get__floatFxGroupEffects() const;

  constexpr void __set__floatFxGroupEffects(::System::Collections::Generic::List_1<::GlobalNamespace::TriggerFloatFxGroupEffect*>* value);

  /// @brief Method Start addr 0x23a6908 size 0x4f8 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x23a6e00 size 0x158 virtual false final false
  inline void OnDestroy();

  static inline ::GlobalNamespace::TriggerFloatFxGroupEffectManager* New_ctor();

  /// @brief Method .ctor addr 0x23a6f74 size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TriggerFloatFxGroupEffectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TriggerFloatFxGroupEffectManager(TriggerFloatFxGroupEffectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TriggerFloatFxGroupEffectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TriggerFloatFxGroupEffectManager(TriggerFloatFxGroupEffectManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TriggerFloatFxGroupEffectManager();

public:
  /// @brief Field _floatFxGroups, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::FloatFxGroup*, ::Array<::GlobalNamespace::FloatFxGroup*>*> ____floatFxGroups;

  /// @brief Field _container, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _floatFxGroupEffects, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::TriggerFloatFxGroupEffect*>* ____floatFxGroupEffects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TriggerFloatFxGroupEffectManager, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TriggerFloatFxGroupEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TriggerFloatFxGroupEffectManager*, "", "TriggerFloatFxGroupEffectManager");
NEED_NO_BOX(::GlobalNamespace::__TriggerFloatFxGroupEffectManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TriggerFloatFxGroupEffectManager____c*, "", "TriggerFloatFxGroupEffectManager/<>c");
