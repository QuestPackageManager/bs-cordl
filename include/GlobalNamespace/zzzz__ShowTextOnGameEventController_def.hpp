#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ShowTextOnGameEventController)
namespace GlobalNamespace {
class __ShowTextOnGameEventController__EventTextBinding;
}
namespace GlobalNamespace {
class TextFadeTransitions;
}
namespace GlobalNamespace {
class Signal;
}
// Forward declare root types
namespace GlobalNamespace {
class ShowTextOnGameEventController;
}
namespace GlobalNamespace {
class __ShowTextOnGameEventController__EventTextBinding;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ShowTextOnGameEventController);
MARK_REF_PTR_T(::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding);
// Type: ::EventTextBinding
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5274))
// CS Name: ::ShowTextOnGameEventController::EventTextBinding*
class CORDL_TYPE __ShowTextOnGameEventController__EventTextBinding : public ::System::Object {
public:
  // Declarations
  /// @brief Field _signal, offset 0x10, size 0x8
  __declspec(property(get = __get__signal, put = __set__signal))::GlobalNamespace::Signal* _signal;

  /// @brief Field _text, offset 0x18, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::StringW _text;

  /// @brief Field _textFadeTransitions, offset 0x20, size 0x8
  __declspec(property(get = __get__textFadeTransitions, put = __set__textFadeTransitions))::GlobalNamespace::TextFadeTransitions* _textFadeTransitions;

  constexpr ::GlobalNamespace::Signal*& __get__signal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> const& __get__signal() const;

  constexpr void __set__signal(::GlobalNamespace::Signal* value);

  constexpr ::StringW& __get__text();

  constexpr ::StringW const& __get__text() const;

  constexpr void __set__text(::StringW value);

  constexpr ::GlobalNamespace::TextFadeTransitions*& __get__textFadeTransitions();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TextFadeTransitions*> const& __get__textFadeTransitions() const;

  constexpr void __set__textFadeTransitions(::GlobalNamespace::TextFadeTransitions* value);

  /// @brief Method Init addr 0x2260aac size 0x9c virtual false final false
  inline void Init(::GlobalNamespace::TextFadeTransitions* textFadeTransitions);

  /// @brief Method Deinit addr 0x2260ba4 size 0x8c virtual false final false
  inline void Deinit();

  /// @brief Method HandleGameEvent addr 0x2260c38 size 0x2c virtual false final false
  inline void HandleGameEvent();

  static inline ::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding* New_ctor();

  /// @brief Method .ctor addr 0x2260cd8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ShowTextOnGameEventController__EventTextBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ShowTextOnGameEventController__EventTextBinding(__ShowTextOnGameEventController__EventTextBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ShowTextOnGameEventController__EventTextBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ShowTextOnGameEventController__EventTextBinding(__ShowTextOnGameEventController__EventTextBinding const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ShowTextOnGameEventController__EventTextBinding();

public:
  /// @brief Field _signal, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::Signal* ____signal;

  /// @brief Field _text, offset: 0x18, size: 0x8, def value: None
  ::StringW ____text;

  /// @brief Field _textFadeTransitions, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::TextFadeTransitions* ____textFadeTransitions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ShowTextOnGameEventController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5275))
// CS Name: ::ShowTextOnGameEventController*
class CORDL_TYPE ShowTextOnGameEventController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using EventTextBinding = ::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding;

  /// @brief Field _textFadeTransitions, offset 0x18, size 0x8
  __declspec(property(get = __get__textFadeTransitions, put = __set__textFadeTransitions))::GlobalNamespace::TextFadeTransitions* _textFadeTransitions;

  /// @brief Field _eventTextBindings, offset 0x20, size 0x8
  __declspec(property(get = __get__eventTextBindings, put = __set__eventTextBindings))::ArrayW<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*,
                                                                                               ::Array<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>*> _eventTextBindings;

  constexpr ::GlobalNamespace::TextFadeTransitions*& __get__textFadeTransitions();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TextFadeTransitions*> const& __get__textFadeTransitions() const;

  constexpr void __set__textFadeTransitions(::GlobalNamespace::TextFadeTransitions* value);

  constexpr ::ArrayW<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*, ::Array<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>*>&
  __get__eventTextBindings();

  constexpr ::ArrayW<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*, ::Array<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>*> const&
  __get__eventTextBindings() const;

  constexpr void
  __set__eventTextBindings(::ArrayW<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*, ::Array<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>*> value);

  /// @brief Method Awake addr 0x2260a48 size 0x64 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x2260b48 size 0x5c virtual false final false
  inline void OnDestroy();

  static inline ::GlobalNamespace::ShowTextOnGameEventController* New_ctor();

  /// @brief Method .ctor addr 0x2260c30 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ShowTextOnGameEventController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShowTextOnGameEventController(ShowTextOnGameEventController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShowTextOnGameEventController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShowTextOnGameEventController(ShowTextOnGameEventController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShowTextOnGameEventController();

public:
  /// @brief Field _textFadeTransitions, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::TextFadeTransitions* ____textFadeTransitions;

  /// @brief Field _eventTextBindings, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*, ::Array<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>*> ____eventTextBindings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShowTextOnGameEventController, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ShowTextOnGameEventController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShowTextOnGameEventController*, "", "ShowTextOnGameEventController");
NEED_NO_BOX(::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*, "", "ShowTextOnGameEventController/EventTextBinding");
