#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MissionHelpViewController)
namespace GlobalNamespace {
class MissionHelpSO;
}
namespace GlobalNamespace {
class __MissionHelpViewController__MissionHelpGameObjectPair;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionHelpViewController;
}
namespace GlobalNamespace {
class __MissionHelpViewController__MissionHelpGameObjectPair;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionHelpViewController);
MARK_REF_PTR_T(::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair);
// Type: ::MissionHelpGameObjectPair
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionHelpViewController::MissionHelpGameObjectPair*
class CORDL_TYPE __MissionHelpViewController__MissionHelpGameObjectPair : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObject, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObject, put = __cordl_internal_set_gameObject))::UnityW<::UnityEngine::GameObject> gameObject;

  /// @brief Field missionHelp, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_missionHelp, put = __cordl_internal_set_missionHelp))::UnityW<::GlobalNamespace::MissionHelpSO> missionHelp;

  static inline ::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair* New_ctor();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject();

  constexpr ::UnityW<::GlobalNamespace::MissionHelpSO> const& __cordl_internal_get_missionHelp() const;

  constexpr ::UnityW<::GlobalNamespace::MissionHelpSO>& __cordl_internal_get_missionHelp();

  constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_missionHelp(::UnityW<::GlobalNamespace::MissionHelpSO> value);

  /// @brief Method .ctor, addr 0x264e5fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionHelpViewController__MissionHelpGameObjectPair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MissionHelpViewController__MissionHelpGameObjectPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionHelpViewController__MissionHelpGameObjectPair(__MissionHelpViewController__MissionHelpGameObjectPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionHelpViewController__MissionHelpGameObjectPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionHelpViewController__MissionHelpGameObjectPair(__MissionHelpViewController__MissionHelpGameObjectPair const&) = delete;

  /// @brief Field missionHelp, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionHelpSO> ___missionHelp;

  /// @brief Field gameObject, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___gameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair, ___missionHelp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair, ___gameObject) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MissionHelpViewController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionHelpViewController*
class CORDL_TYPE MissionHelpViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using MissionHelpGameObjectPair = ::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair;

  /// @brief Field _missionHelp, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__missionHelp, put = __cordl_internal_set__missionHelp))::UnityW<::GlobalNamespace::MissionHelpSO> _missionHelp;

  /// @brief Field _missionHelpGameObjectPairs, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__missionHelpGameObjectPairs, put = __cordl_internal_set__missionHelpGameObjectPairs))::ArrayW<
      ::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*, ::Array<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*>*> _missionHelpGameObjectPairs;

  /// @brief Field _okButton, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__okButton, put = __cordl_internal_set__okButton))::UnityW<::UnityEngine::UI::Button> _okButton;

  /// @brief Field didFinishEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent))::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>* didFinishEvent;

  /// @brief Method DidActivate, addr 0x264e528, size 0xac, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::MissionHelpViewController* New_ctor();

  /// @brief Method OkButtonPressed, addr 0x264e5d4, size 0x20, virtual false, abstract: false, final false
  inline void OkButtonPressed();

  /// @brief Method RefreshContent, addr 0x264e458, size 0xd0, virtual false, abstract: false, final false
  inline void RefreshContent();

  /// @brief Method Setup, addr 0x264e42c, size 0x2c, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::MissionHelpSO* missionHelp);

  constexpr ::UnityW<::GlobalNamespace::MissionHelpSO> const& __cordl_internal_get__missionHelp() const;

  constexpr ::UnityW<::GlobalNamespace::MissionHelpSO>& __cordl_internal_get__missionHelp();

  constexpr ::ArrayW<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*, ::Array<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*>*> const&
  __cordl_internal_get__missionHelpGameObjectPairs() const;

  constexpr ::ArrayW<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*, ::Array<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*>*>&
  __cordl_internal_get__missionHelpGameObjectPairs();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__okButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__okButton();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>*> const& __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set__missionHelp(::UnityW<::GlobalNamespace::MissionHelpSO> value);

  constexpr void __cordl_internal_set__missionHelpGameObjectPairs(
      ::ArrayW<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*, ::Array<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*>*> value);

  constexpr void __cordl_internal_set__okButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>* value);

  /// @brief Method .ctor, addr 0x264e5f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x264e2cc, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>* value);

  /// @brief Method remove_didFinishEvent, addr 0x264e37c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionHelpViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionHelpViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionHelpViewController(MissionHelpViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionHelpViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionHelpViewController(MissionHelpViewController const&) = delete;

  /// @brief Field _okButton, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____okButton;

  /// @brief Field _missionHelpGameObjectPairs, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*, ::Array<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*>*>
      ____missionHelpGameObjectPairs;

  /// @brief Field didFinishEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>* ___didFinishEvent;

  /// @brief Field _missionHelp, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionHelpSO> ____missionHelp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionHelpViewController, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionHelpViewController, ____okButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionHelpViewController, ____missionHelpGameObjectPairs) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionHelpViewController, ___didFinishEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionHelpViewController, ____missionHelp) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionHelpViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionHelpViewController*, "", "MissionHelpViewController");
NEED_NO_BOX(::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*, "", "MissionHelpViewController/MissionHelpGameObjectPair");
