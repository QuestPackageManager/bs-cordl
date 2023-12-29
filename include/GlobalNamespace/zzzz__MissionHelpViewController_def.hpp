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
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class __MissionHelpViewController__MissionHelpGameObjectPair;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5793))
// CS Name: ::MissionHelpViewController::MissionHelpGameObjectPair*
class CORDL_TYPE __MissionHelpViewController__MissionHelpGameObjectPair : public ::System::Object {
public:
  // Declarations
  /// @brief Field missionHelp, offset 0x10, size 0x8
  __declspec(property(get = __get_missionHelp, put = __set_missionHelp))::GlobalNamespace::MissionHelpSO* missionHelp;

  /// @brief Field gameObject, offset 0x18, size 0x8
  __declspec(property(get = __get_gameObject, put = __set_gameObject))::UnityEngine::GameObject* gameObject;

  constexpr ::GlobalNamespace::MissionHelpSO*& __get_missionHelp();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionHelpSO*> const& __get_missionHelp() const;

  constexpr void __set_missionHelp(::GlobalNamespace::MissionHelpSO* value);

  constexpr ::UnityEngine::GameObject*& __get_gameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_gameObject() const;

  constexpr void __set_gameObject(::UnityEngine::GameObject* value);

  static inline ::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair* New_ctor();

  /// @brief Method .ctor addr 0x2187250 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MissionHelpViewController__MissionHelpGameObjectPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionHelpViewController__MissionHelpGameObjectPair(__MissionHelpViewController__MissionHelpGameObjectPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionHelpViewController__MissionHelpGameObjectPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionHelpViewController__MissionHelpGameObjectPair(__MissionHelpViewController__MissionHelpGameObjectPair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionHelpViewController__MissionHelpGameObjectPair();

public:
  /// @brief Field missionHelp, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MissionHelpSO* ___missionHelp;

  /// @brief Field gameObject, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___gameObject;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13722))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5794))
// CS Name: ::MissionHelpViewController*
class CORDL_TYPE MissionHelpViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using MissionHelpGameObjectPair = ::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair;

  /// @brief Field _okButton, offset 0x70, size 0x8
  __declspec(property(get = __get__okButton, put = __set__okButton))::UnityEngine::UI::Button* _okButton;

  /// @brief Field _missionHelpGameObjectPairs, offset 0x78, size 0x8
  __declspec(property(get = __get__missionHelpGameObjectPairs,
                      put = __set__missionHelpGameObjectPairs))::ArrayW<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*,
                                                                        ::Array<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*>*> _missionHelpGameObjectPairs;

  /// @brief Field didFinishEvent, offset 0x80, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action_1<::GlobalNamespace::MissionHelpViewController*>* didFinishEvent;

  /// @brief Field _missionHelp, offset 0x88, size 0x8
  __declspec(property(get = __get__missionHelp, put = __set__missionHelp))::GlobalNamespace::MissionHelpSO* _missionHelp;

  constexpr ::UnityEngine::UI::Button*& __get__okButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__okButton() const;

  constexpr void __set__okButton(::UnityEngine::UI::Button* value);

  constexpr ::ArrayW<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*, ::Array<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*>*>&
  __get__missionHelpGameObjectPairs();

  constexpr ::ArrayW<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*, ::Array<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*>*> const&
  __get__missionHelpGameObjectPairs() const;

  constexpr void __set__missionHelpGameObjectPairs(
      ::ArrayW<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*, ::Array<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*>*> value);

  constexpr ::System::Action_1<::GlobalNamespace::MissionHelpViewController*>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MissionHelpViewController*>*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::MissionHelpViewController*>* value);

  constexpr ::GlobalNamespace::MissionHelpSO*& __get__missionHelp();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionHelpSO*> const& __get__missionHelp() const;

  constexpr void __set__missionHelp(::GlobalNamespace::MissionHelpSO* value);

  /// @brief Method add_didFinishEvent addr 0x2186f20 size 0xb0 virtual false final false
  inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::MissionHelpViewController*>* value);

  /// @brief Method remove_didFinishEvent addr 0x2186fd0 size 0xb0 virtual false final false
  inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::MissionHelpViewController*>* value);

  /// @brief Method Setup addr 0x2187080 size 0x2c virtual false final false
  inline void Setup(::GlobalNamespace::MissionHelpSO* missionHelp);

  /// @brief Method DidActivate addr 0x218717c size 0xac virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method RefreshContent addr 0x21870ac size 0xd0 virtual false final false
  inline void RefreshContent();

  /// @brief Method OkButtonPressed addr 0x2187228 size 0x20 virtual false final false
  inline void OkButtonPressed();

  static inline ::GlobalNamespace::MissionHelpViewController* New_ctor();

  /// @brief Method .ctor addr 0x2187248 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionHelpViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionHelpViewController(MissionHelpViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionHelpViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionHelpViewController(MissionHelpViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionHelpViewController();

public:
  /// @brief Field _okButton, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____okButton;

  /// @brief Field _missionHelpGameObjectPairs, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*, ::Array<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*>*>
      ____missionHelpGameObjectPairs;

  /// @brief Field didFinishEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MissionHelpViewController*>* ___didFinishEvent;

  /// @brief Field _missionHelp, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::MissionHelpSO* ____missionHelp;

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
