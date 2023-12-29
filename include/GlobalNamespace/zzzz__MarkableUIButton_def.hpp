#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MarkableUIButton)
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class MarkableUIButton;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MarkableUIButton);
// Type: ::MarkableUIButton
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13875))
// CS Name: ::MarkableUIButton*
class CORDL_TYPE MarkableUIButton : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animator, offset 0x18, size 0x8
  __declspec(property(get = __get__animator, put = __set__animator))::UnityEngine::Animator* _animator;

  /// @brief Field _marked, offset 0x20, size 0x1
  __declspec(property(get = __get__marked, put = __set__marked)) bool _marked;

  /// @brief Field _markedTriggerId, offset 0x24, size 0x4
  __declspec(property(get = __get__markedTriggerId, put = __set__markedTriggerId)) int32_t _markedTriggerId;

  __declspec(property(get = get_marked, put = set_marked)) bool marked;

  constexpr ::UnityEngine::Animator*& __get__animator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> const& __get__animator() const;

  constexpr void __set__animator(::UnityEngine::Animator* value);

  constexpr bool& __get__marked();

  constexpr bool const& __get__marked() const;

  constexpr void __set__marked(bool value);

  constexpr int32_t& __get__markedTriggerId();

  constexpr int32_t const& __get__markedTriggerId() const;

  constexpr void __set__markedTriggerId(int32_t value);

  /// @brief Method get_marked addr 0x1f9756c size 0x8 virtual false final false
  inline bool get_marked();

  /// @brief Method set_marked addr 0x1f97574 size 0x2c virtual false final false
  inline void set_marked(bool value);

  /// @brief Method Awake addr 0x1f975a0 size 0x50 virtual false final false
  inline void Awake();

  /// @brief Method ToggleMarked addr 0x1f975f0 size 0x10 virtual false final false
  inline void ToggleMarked();

  static inline ::GlobalNamespace::MarkableUIButton* New_ctor();

  /// @brief Method .ctor addr 0x1f97600 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MarkableUIButton", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MarkableUIButton(MarkableUIButton&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MarkableUIButton", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MarkableUIButton(MarkableUIButton const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MarkableUIButton();

public:
  /// @brief Field _animator, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Animator* ____animator;

  /// @brief Field _marked, offset: 0x20, size: 0x1, def value: None
  bool ____marked;

  /// @brief Field _markedTriggerId, offset: 0x24, size: 0x4, def value: None
  int32_t ____markedTriggerId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MarkableUIButton, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkableUIButton, ____animator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkableUIButton, ____marked) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkableUIButton, ____markedTriggerId) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MarkableUIButton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MarkableUIButton*, "", "MarkableUIButton");
