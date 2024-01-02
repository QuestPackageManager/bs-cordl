#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TweeningManager)
namespace Tweening {
class Tween;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Tweening {
class TweeningManager;
}
// Write type traits
MARK_REF_PTR_T(::Tweening::TweeningManager);
// Type: Tweening::TweeningManager
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Tweening {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16100))
// CS Name: ::Tweening::TweeningManager*
class CORDL_TYPE TweeningManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _activeTweens, offset 0x18, size 0x8
  __declspec(property(get = __get__activeTweens, put = __set__activeTweens))::System::Collections::Generic::List_1<::Tweening::Tween*>* _activeTweens;

  /// @brief Field _activeTweensSet, offset 0x20, size 0x8
  __declspec(property(get = __get__activeTweensSet, put = __set__activeTweensSet))::System::Collections::Generic::HashSet_1<::Tweening::Tween*>* _activeTweensSet;

  /// @brief Field _tweensByOwner, offset 0x28, size 0x8
  __declspec(property(get = __get__tweensByOwner,
                      put = __set__tweensByOwner))::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>* _tweensByOwner;

  /// @brief Field _ownerByTween, offset 0x30, size 0x8
  __declspec(property(get = __get__ownerByTween, put = __set__ownerByTween))::System::Collections::Generic::Dictionary_2<::Tweening::Tween*, ::System::Object*>* _ownerByTween;

  /// @brief Field _reusableTweenHashSets, offset 0x38, size 0x8
  __declspec(property(get = __get__reusableTweenHashSets,
                      put = __set__reusableTweenHashSets))::System::Collections::Generic::Queue_1<::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>* _reusableTweenHashSets;

  constexpr ::System::Collections::Generic::List_1<::Tweening::Tween*>*& __get__activeTweens();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Tweening::Tween*>*> const& __get__activeTweens() const;

  constexpr void __set__activeTweens(::System::Collections::Generic::List_1<::Tweening::Tween*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*& __get__activeTweensSet();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*> const& __get__activeTweensSet() const;

  constexpr void __set__activeTweensSet(::System::Collections::Generic::HashSet_1<::Tweening::Tween*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>*& __get__tweensByOwner();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>*> const&
  __get__tweensByOwner() const;

  constexpr void __set__tweensByOwner(::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::Tweening::Tween*, ::System::Object*>*& __get__ownerByTween();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::Tweening::Tween*, ::System::Object*>*> const& __get__ownerByTween() const;

  constexpr void __set__ownerByTween(::System::Collections::Generic::Dictionary_2<::Tweening::Tween*, ::System::Object*>* value);

  constexpr ::System::Collections::Generic::Queue_1<::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>*& __get__reusableTweenHashSets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>*> const& __get__reusableTweenHashSets() const;

  constexpr void __set__reusableTweenHashSets(::System::Collections::Generic::Queue_1<::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>* value);

  /// @brief Method Start, addr 0x2a0e648, size 0x64, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method LateUpdate, addr 0x2a0e6ac, size 0x1ec, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method GetTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t GetTime();

  /// @brief Method AddTween, addr 0x2a0ea5c, size 0x4c, virtual false, abstract: false, final false
  inline ::Tweening::Tween* AddTween(::Tweening::Tween* tween, ::System::Object* owner);

  /// @brief Method RestartTween, addr 0x2a0ebdc, size 0x58, virtual false, abstract: false, final false
  inline ::Tweening::Tween* RestartTween(::Tweening::Tween* tween, ::System::Object* owner);

  /// @brief Method ResumeTween, addr 0x2a0ec34, size 0x24, virtual false, abstract: false, final false
  inline ::Tweening::Tween* ResumeTween(::Tweening::Tween* tween, ::System::Object* owner);

  /// @brief Method KillAllTweens, addr 0x2a0ec58, size 0x17c, virtual false, abstract: false, final false
  inline void KillAllTweens(::System::Object* owner);

  /// @brief Method RemoveTweenFromOwnerDictionary, addr 0x2a0e898, size 0x1c4, virtual false, abstract: false, final false
  inline void RemoveTweenFromOwnerDictionary(::Tweening::Tween* tween);

  /// @brief Method AddTweenToDataStructures, addr 0x2a0eaa8, size 0x134, virtual false, abstract: false, final false
  inline bool AddTweenToDataStructures(::Tweening::Tween* tween, ::System::Object* owner);

  /// @brief Method AddTweenToOwnerDictionary, addr 0x2a0edd4, size 0x198, virtual false, abstract: false, final false
  inline void AddTweenToOwnerDictionary(::Tweening::Tween* tween, ::System::Object* owner);

  static inline ::Tweening::TweeningManager* New_ctor();

  /// @brief Method .ctor, addr 0x2a0e3d4, size 0x18c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TweeningManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TweeningManager(TweeningManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TweeningManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TweeningManager(TweeningManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TweeningManager();

public:
  /// @brief Field _activeTweens, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Tweening::Tween*>* ____activeTweens;

  /// @brief Field _activeTweensSet, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>* ____activeTweensSet;

  /// @brief Field _tweensByOwner, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>* ____tweensByOwner;

  /// @brief Field _ownerByTween, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::Tweening::Tween*, ::System::Object*>* ____ownerByTween;

  /// @brief Field _reusableTweenHashSets, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>* ____reusableTweenHashSets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tweening::TweeningManager, 0x40>, "Size mismatch!");

static_assert(offsetof(::Tweening::TweeningManager, ____activeTweens) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Tweening::TweeningManager, ____activeTweensSet) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tweening::TweeningManager, ____tweensByOwner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tweening::TweeningManager, ____ownerByTween) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tweening::TweeningManager, ____reusableTweenHashSets) == 0x38, "Offset mismatch!");

} // namespace Tweening
NEED_NO_BOX(::Tweening::TweeningManager);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::TweeningManager*, "Tweening", "TweeningManager");
