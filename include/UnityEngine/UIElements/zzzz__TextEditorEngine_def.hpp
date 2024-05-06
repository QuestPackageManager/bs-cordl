#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextEditorEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__TextEditor_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextEditorEngine)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class __TextEditorEngine__OnDetectFocusChangeFunction;
}
namespace UnityEngine::UIElements {
class __TextEditorEngine__OnIndexChangeFunction;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextEditorEngine;
}
namespace UnityEngine::UIElements {
class __TextEditorEngine__OnDetectFocusChangeFunction;
}
namespace UnityEngine::UIElements {
class __TextEditorEngine__OnIndexChangeFunction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TextEditorEngine);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction);
// Type: ::OnDetectFocusChangeFunction
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::TextEditorEngine::OnDetectFocusChangeFunction*
class CORDL_TYPE __TextEditorEngine__OnDetectFocusChangeFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x358837c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x35882c0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextEditorEngine__OnDetectFocusChangeFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TextEditorEngine__OnDetectFocusChangeFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextEditorEngine__OnDetectFocusChangeFunction(__TextEditorEngine__OnDetectFocusChangeFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextEditorEngine__OnDetectFocusChangeFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextEditorEngine__OnDetectFocusChangeFunction(__TextEditorEngine__OnDetectFocusChangeFunction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::OnIndexChangeFunction
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::TextEditorEngine::OnIndexChangeFunction*
class CORDL_TYPE __TextEditorEngine__OnIndexChangeFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x358844c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x3588390, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextEditorEngine__OnIndexChangeFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TextEditorEngine__OnIndexChangeFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextEditorEngine__OnIndexChangeFunction(__TextEditorEngine__OnIndexChangeFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextEditorEngine__OnIndexChangeFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextEditorEngine__OnIndexChangeFunction(__TextEditorEngine__OnIndexChangeFunction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::TextEditorEngine
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::TextEditorEngine*
class CORDL_TYPE TextEditorEngine : public ::UnityEngine::TextEditor {
public:
  // Declarations
  using OnDetectFocusChangeFunction = ::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction;

  using OnIndexChangeFunction = ::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction;

  __declspec(property(get = get_localPosition))::UnityEngine::Rect localPosition;

  /// @brief Field m_DetectFocusChangeFunction, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DetectFocusChangeFunction,
                      put = __cordl_internal_set_m_DetectFocusChangeFunction))::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction* m_DetectFocusChangeFunction;

  /// @brief Field m_IndexChangeFunction, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IndexChangeFunction,
                      put = __cordl_internal_set_m_IndexChangeFunction))::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction* m_IndexChangeFunction;

  static inline ::UnityEngine::UIElements::TextEditorEngine* New_ctor(::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction* detectFocusChange,
                                                                      ::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction* indexChangeFunction);

  /// @brief Method OnCursorIndexChange, addr 0x3588278, size 0x24, virtual true, abstract: false, final false
  inline void OnCursorIndexChange();

  /// @brief Method OnDetectFocusChange, addr 0x3588254, size 0x24, virtual true, abstract: false, final false
  inline void OnDetectFocusChange();

  /// @brief Method OnSelectIndexChange, addr 0x358829c, size 0x24, virtual true, abstract: false, final false
  inline void OnSelectIndexChange();

  constexpr ::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction*& __cordl_internal_get_m_DetectFocusChangeFunction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction*> const& __cordl_internal_get_m_DetectFocusChangeFunction() const;

  constexpr ::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction*& __cordl_internal_get_m_IndexChangeFunction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction*> const& __cordl_internal_get_m_IndexChangeFunction() const;

  constexpr void __cordl_internal_set_m_DetectFocusChangeFunction(::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction* value);

  constexpr void __cordl_internal_set_m_IndexChangeFunction(::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction* value);

  /// @brief Method .ctor, addr 0x35881a0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction* detectFocusChange,
                    ::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction* indexChangeFunction);

  /// @brief Method get_localPosition, addr 0x35881cc, size 0x88, virtual true, abstract: false, final false
  inline ::UnityEngine::Rect get_localPosition();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextEditorEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextEditorEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextEditorEngine(TextEditorEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextEditorEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextEditorEngine(TextEditorEngine const&) = delete;

  /// @brief Field m_DetectFocusChangeFunction, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction* ___m_DetectFocusChangeFunction;

  /// @brief Field m_IndexChangeFunction, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction* ___m_IndexChangeFunction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextEditorEngine, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEditorEngine, ___m_DetectFocusChangeFunction) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEditorEngine, ___m_IndexChangeFunction) == 0x98, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextEditorEngine);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextEditorEngine*, "UnityEngine.UIElements", "TextEditorEngine");
NEED_NO_BOX(::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction*, "UnityEngine.UIElements", "TextEditorEngine/OnDetectFocusChangeFunction");
NEED_NO_BOX(::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction*, "UnityEngine.UIElements", "TextEditorEngine/OnIndexChangeFunction");
