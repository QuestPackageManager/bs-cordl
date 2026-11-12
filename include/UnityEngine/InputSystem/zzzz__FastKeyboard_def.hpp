#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/FastKeyboard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Keyboard_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FastKeyboard)
namespace UnityEngine::InputSystem::Controls {
class AnyKeyControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class DiscreteButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class KeyControl;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class FastKeyboard;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::FastKeyboard*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::FastKeyboard*, "UnityEngine.InputSystem", "FastKeyboard");
// Dependencies UnityEngine.InputSystem.Keyboard
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.FastKeyboard
class CORDL_TYPE FastKeyboard : public ::UnityEngine::InputSystem::Keyboard {
public:
  // Declarations
  /// @brief Method Initialize_ctrlKeyboard0, addr 0x6991e70, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard0(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboard1, addr 0x6990e8c, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard1(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboard2, addr 0x6991050, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard2(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboard3, addr 0x6991214, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard3(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboard4, addr 0x69913d8, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard4(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboard5, addr 0x699159c, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard5(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboard6, addr 0x6991760, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard6(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboard7, addr 0x6991924, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard7(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboard8, addr 0x6991ae8, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard8(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboard9, addr 0x6991cac, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard9(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardIMESelected, addr 0x699a82c, size 0x1bc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlKeyboardIMESelected(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                 ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardIMESelectedObsoleteKey, addr 0x699a9e8, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardIMESelectedObsoleteKey(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                         ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardOEM1, addr 0x6998374, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM1(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardOEM2, addr 0x6998538, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM2(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardOEM3, addr 0x69986fc, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM3(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardOEM4, addr 0x69988c0, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM4(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardOEM5, addr 0x6998a84, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM5(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboarda, addr 0x698de34, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboarda(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardalt, addr 0x69929c8, size 0x1f4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DiscreteButtonControl* Initialize_ctrlKeyboardalt(::UnityEngine::InputSystem::Utilities::InternedString kDiscreteButtonLayout,
                                                                                                 ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardanyKey, addr 0x698b8fc, size 0x1cc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AnyKeyControl* Initialize_ctrlKeyboardanyKey(::UnityEngine::InputSystem::Utilities::InternedString kAnyKeyLayout,
                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardb, addr 0x698e010, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardb(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardbackquote, addr 0x698c250, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardbackquote(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardbackslash, addr 0x698cd78, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardbackslash(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardbackspace, addr 0x6993738, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardbackspace(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardc, addr 0x698e1ec, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardc(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardcapsLock, addr 0x699443c, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardcapsLock(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardcomma, addr 0x698c7e4, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardcomma(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardcontextMenu, addr 0x6993550, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardcontextMenu(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardctrl, addr 0x6992f8c, size 0x1f4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DiscreteButtonControl* Initialize_ctrlKeyboardctrl(::UnityEngine::InputSystem::Utilities::InternedString kDiscreteButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardd, addr 0x698e3c8, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardd(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboarddelete, addr 0x6994260, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboarddelete(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboarddownArrow, addr 0x698d8a0, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboarddownArrow(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboarde, addr 0x698e5a4, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboarde(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardend, addr 0x6993ea8, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardend(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardenter, addr 0x698be8c, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardenter(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardequals, addr 0x698d4e8, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardequals(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardescape, addr 0x698bac8, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardescape(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf, addr 0x698e780, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf1, addr 0x6996d24, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf1(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf10, addr 0x6997de0, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf10(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf11, addr 0x6997fbc, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf11(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf12, addr 0x6998198, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf12(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf13, addr 0x6998c48, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf13(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf14, addr 0x6998e24, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf14(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf15, addr 0x6999000, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf15(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf16, addr 0x69991dc, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf16(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf17, addr 0x69993b8, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf17(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf18, addr 0x6999594, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf18(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf19, addr 0x6999770, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf19(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf2, addr 0x6996f00, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf2(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf20, addr 0x699994c, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf20(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf21, addr 0x6999b28, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf21(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf22, addr 0x6999d04, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf22(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf23, addr 0x6999ee0, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf23(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf24, addr 0x699a0bc, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf24(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf3, addr 0x69970dc, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf3(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf4, addr 0x69972b8, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf4(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf5, addr 0x6997494, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf5(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf6, addr 0x6997670, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf6(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf7, addr 0x699784c, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf7(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf8, addr 0x6997a28, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf8(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardf9, addr 0x6997c04, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf9(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardg, addr 0x698e95c, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardg(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardh, addr 0x698eb38, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardh(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardhome, addr 0x6993ccc, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardhome(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardi, addr 0x698ed14, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardi(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardinsert, addr 0x6994084, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardinsert(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardj, addr 0x698eef0, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardj(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardk, addr 0x698f0cc, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardk(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardl, addr 0x698f2a8, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardl(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardleftAlt, addr 0x69925f8, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftAlt(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardleftArrow, addr 0x698da7c, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftArrow(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardleftBracket, addr 0x698cf54, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftBracket(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardleftCtrl, addr 0x6992bbc, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftCtrl(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardleftMeta, addr 0x6993180, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftMeta(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardleftShift, addr 0x6992034, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftShift(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardm, addr 0x698f484, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardm(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardmediaForward, addr 0x699a650, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardmediaForward(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                               ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardmediaPlayPause, addr 0x699a298, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardmediaPlayPause(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                 ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardmediaRewind, addr 0x699a474, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardmediaRewind(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardminus, addr 0x698d30c, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardminus(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardn, addr 0x698f660, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardn(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardnumLock, addr 0x6994618, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumLock(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardnumpad0, addr 0x6996b48, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad0(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardnumpad1, addr 0x6995a8c, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad1(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardnumpad2, addr 0x6995c68, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad2(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardnumpad3, addr 0x6995e44, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad3(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardnumpad4, addr 0x6996020, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad4(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardnumpad5, addr 0x69961fc, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad5(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardnumpad6, addr 0x69963d8, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad6(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardnumpad7, addr 0x69965b4, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad7(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardnumpad8, addr 0x6996790, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad8(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardnumpad9, addr 0x699696c, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad9(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardnumpadDivide, addr 0x6994f64, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadDivide(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                               ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardnumpadEnter, addr 0x6994d88, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadEnter(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardnumpadEquals, addr 0x69958b0, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadEquals(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                               ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardnumpadMinus, addr 0x69954f8, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadMinus(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardnumpadMultiply, addr 0x6995140, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadMultiply(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                                 ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardnumpadPeriod, addr 0x69956d4, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadPeriod(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                               ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardnumpadPlus, addr 0x699531c, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadPlus(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardo, addr 0x698f83c, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardo(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardp, addr 0x698fa18, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardp(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardpageDown, addr 0x6993914, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardpageDown(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardpageUp, addr 0x6993af0, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardpageUp(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardpause, addr 0x6994bac, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardpause(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardperiod, addr 0x698c9c0, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardperiod(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                         ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardprintScreen, addr 0x69947f4, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardprintScreen(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardq, addr 0x698fbf4, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardq(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardquote, addr 0x698c42c, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardquote(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardr, addr 0x698fdd0, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardr(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardrightAlt, addr 0x69927e0, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightAlt(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardrightArrow, addr 0x698dc58, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightArrow(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardrightBracket, addr 0x698d130, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightBracket(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                               ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardrightCtrl, addr 0x6992da4, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightCtrl(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardrightMeta, addr 0x6993368, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightMeta(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardrightShift, addr 0x699221c, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightShift(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboards, addr 0x698ffac, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboards(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardscrollLock, addr 0x69949d0, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardscrollLock(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardsemicolon, addr 0x698c608, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardsemicolon(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardshift, addr 0x6992404, size 0x1f4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DiscreteButtonControl* Initialize_ctrlKeyboardshift(::UnityEngine::InputSystem::Utilities::InternedString kDiscreteButtonLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardslash, addr 0x698cb9c, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardslash(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardspace, addr 0x698bcb0, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardspace(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardt, addr 0x6990188, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardt(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardtab, addr 0x698c074, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardtab(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardu, addr 0x6990364, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardu(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardupArrow, addr 0x698d6c4, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardupArrow(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout,
                                                                                          ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardv, addr 0x6990540, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardv(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardw, addr 0x699071c, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardw(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardx, addr 0x69908f8, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardx(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardy, addr 0x6990ad4, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardy(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlKeyboardz, addr 0x6990cb0, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardz(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent);

  static inline ::UnityEngine::InputSystem::FastKeyboard* New_ctor();

  /// @brief Method .ctor, addr 0x6988bc0, size 0x2d3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FastKeyboard();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FastKeyboard", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FastKeyboard(FastKeyboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FastKeyboard", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FastKeyboard(FastKeyboard const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10702 };

  /// @brief Field metadata offset 0xffffffff size 0x8
  static constexpr ::ConstString metadata{ u";AnyKey;Button;Axis;Key;DiscreteButton;Keyboard" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::FastKeyboard) == 0x1f0, "Size mismatch!");

} // namespace UnityEngine::InputSystem
