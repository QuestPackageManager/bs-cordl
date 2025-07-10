#pragma once
// IWYU pragma private; include "Tweening/TweeningManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tweening/zzzz__FrameParity_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TweeningManager)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
class Object;
}
namespace Tweening {
class Tween;
}
// Forward declare root types
namespace Tweening {
class TweeningManager;
}
// Write type traits
MARK_REF_PTR_T(::Tweening::TweeningManager);
// Dependencies Tweening.FrameParity, UnityEngine.MonoBehaviour
namespace Tweening {
// Is value type: false
// CS Name: Tweening.TweeningManager
class CORDL_TYPE TweeningManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _activeTweens, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__activeTweens, put = __cordl_internal_set__activeTweens)) ::System::Collections::Generic::List_1<::Tweening::Tween*>* _activeTweens;

  /// @brief Field _activeTweensSet, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__activeTweensSet, put = __cordl_internal_set__activeTweensSet)) ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>* _activeTweensSet;

  /// @brief Field _ownerByTween, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__ownerByTween,
                      put = __cordl_internal_set__ownerByTween)) ::System::Collections::Generic::Dictionary_2<::Tweening::Tween*, ::System::Object*>* _ownerByTween;

  /// @brief Field _parityOfNextNewTween, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__parityOfNextNewTween, put = __cordl_internal_set__parityOfNextNewTween)) ::Tweening::FrameParity _parityOfNextNewTween;

  /// @brief Field _reusableTweenHashSets, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__reusableTweenHashSets,
                      put =
                          __cordl_internal_set__reusableTweenHashSets)) ::System::Collections::Generic::Queue_1<::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>* _reusableTweenHashSets;

  /// @brief Field _tweensByOwner, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get__tweensByOwner,
      put = __cordl_internal_set__tweensByOwner)) ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>* _tweensByOwner;

  /// @brief Method AddTween, addr 0x44dc13c, size 0x50, virtual false, abstract: false, final false
  inline ::Tweening::Tween* AddTween(::Tweening::Tween* tween, ::System::Object* owner, bool updateEveryOtherFrame);

  /// @brief Method AddTweenToDataStructures, addr 0x44dc18c, size 0x168, virtual false, abstract: false, final false
  inline bool AddTweenToDataStructures(::Tweening::Tween* tween, ::System::Object* owner, bool updateEveryOtherFrame);

  /// @brief Method AddTweenToOwnerDictionary, addr 0x44dc55c, size 0x198, virtual false, abstract: false, final false
  inline void AddTweenToOwnerDictionary(::Tweening::Tween* tween, ::System::Object* owner);

  /// @brief Method GetTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t GetTime();

  /// @brief Method KillAllTweens, addr 0x44dc3e0, size 0x17c, virtual false, abstract: false, final false
  inline void KillAllTweens(::System::Object* owner);

  /// @brief Method LateUpdate, addr 0x44dbd4c, size 0x220, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::Tweening::TweeningManager* New_ctor();

  /// @brief Method RemoveTweenFromOwnerDictionary, addr 0x44dbf6c, size 0x1d0, virtual false, abstract: false, final false
  inline void RemoveTweenFromOwnerDictionary(::Tweening::Tween* tween);

  /// @brief Method RestartTween, addr 0x44dc2f4, size 0xc4, virtual false, abstract: false, final false
  inline ::Tweening::Tween* RestartTween(::Tweening::Tween* tween, ::System::Object* owner, bool updateEveryOtherFrame);

  /// @brief Method ResumeTween, addr 0x44dc3b8, size 0x28, virtual false, abstract: false, final false
  inline ::Tweening::Tween* ResumeTween(::Tweening::Tween* tween, ::System::Object* owner, bool updateEveryOtherFrame);

  /// @brief Method Start, addr 0x44dbce8, size 0x64, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::System::Collections::Generic::List_1<::Tweening::Tween*>* const& __cordl_internal_get__activeTweens() const;

  constexpr ::System::Collections::Generic::List_1<::Tweening::Tween*>*& __cordl_internal_get__activeTweens();

  constexpr ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>* const& __cordl_internal_get__activeTweensSet() const;

  constexpr ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*& __cordl_internal_get__activeTweensSet();

  constexpr ::System::Collections::Generic::Dictionary_2<::Tweening::Tween*, ::System::Object*>* const& __cordl_internal_get__ownerByTween() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::Tweening::Tween*, ::System::Object*>*& __cordl_internal_get__ownerByTween();

  constexpr ::Tweening::FrameParity const& __cordl_internal_get__parityOfNextNewTween() const;

  constexpr ::Tweening::FrameParity& __cordl_internal_get__parityOfNextNewTween();

  constexpr ::System::Collections::Generic::Queue_1<::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>* const& __cordl_internal_get__reusableTweenHashSets() const;

  constexpr ::System::Collections::Generic::Queue_1<::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>*& __cordl_internal_get__reusableTweenHashSets();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>* const& __cordl_internal_get__tweensByOwner() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>*& __cordl_internal_get__tweensByOwner();

  constexpr void __cordl_internal_set__activeTweens(::System::Collections::Generic::List_1<::Tweening::Tween*>* value);

  constexpr void __cordl_internal_set__activeTweensSet(::System::Collections::Generic::HashSet_1<::Tweening::Tween*>* value);

  constexpr void __cordl_internal_set__ownerByTween(::System::Collections::Generic::Dictionary_2<::Tweening::Tween*, ::System::Object*>* value);

  constexpr void __cordl_internal_set__parityOfNextNewTween(::Tweening::FrameParity value);

  constexpr void __cordl_internal_set__reusableTweenHashSets(::System::Collections::Generic::Queue_1<::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>* value);

  constexpr void __cordl_internal_set__tweensByOwner(::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>* value);

  /// @brief Method .ctor, addr 0x44dba3c, size 0x19c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TweeningManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TweeningManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TweeningManager(TweeningManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TweeningManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TweeningManager(TweeningManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18681 };

  /// @brief Field _activeTweens, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Tweening::Tween*>* ____activeTweens;

  /// @brief Field _activeTweensSet, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>* ____activeTweensSet;

  /// @brief Field _tweensByOwner, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>* ____tweensByOwner;

  /// @brief Field _ownerByTween, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::Tweening::Tween*, ::System::Object*>* ____ownerByTween;

  /// @brief Field _reusableTweenHashSets, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>* ____reusableTweenHashSets;

  /// @brief Field _parityOfNextNewTween, offset: 0x48, size: 0x4, def value: None
  ::Tweening::FrameParity ____parityOfNextNewTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Tweening::TweeningManager, ____activeTweens) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tweening::TweeningManager, ____activeTweensSet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tweening::TweeningManager, ____tweensByOwner) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tweening::TweeningManager, ____ownerByTween) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tweening::TweeningManager, ____reusableTweenHashSets) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Tweening::TweeningManager, ____parityOfNextNewTween) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tweening::TweeningManager, 0x50>, "Size mismatch!");

} // namespace Tweening
NEED_NO_BOX(::Tweening::TweeningManager);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::TweeningManager*, "Tweening", "TweeningManager");
