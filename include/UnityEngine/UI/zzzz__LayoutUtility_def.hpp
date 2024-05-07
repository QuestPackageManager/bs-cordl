#pragma once
// IWYU pragma private; include "UnityEngine/UI/LayoutUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutUtility)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace UnityEngine::UI {
class __LayoutUtility____c;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine::UI {
class LayoutUtility;
}
namespace UnityEngine::UI {
class __LayoutUtility____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::LayoutUtility);
MARK_REF_PTR_T(::UnityEngine::UI::__LayoutUtility____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::LayoutUtility::<>c*
class CORDL_TYPE __LayoutUtility____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UI::__LayoutUtility____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* __9__3_0;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0))::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* __9__4_0;

  /// @brief Field <>9__4_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_1, put = setStaticF___9__4_1))::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* __9__4_1;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0))::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* __9__5_0;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0))::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* __9__6_0;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0))::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* __9__7_0;

  /// @brief Field <>9__7_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_1, put = setStaticF___9__7_1))::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* __9__7_1;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0))::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* __9__8_0;

  static inline ::UnityEngine::UI::__LayoutUtility____c* New_ctor();

  /// @brief Method <GetFlexibleHeight>b__8_0, addr 0x34cf394, size 0xa0, virtual false, abstract: false, final false
  inline float_t _GetFlexibleHeight_b__8_0(::UnityEngine::UI::ILayoutElement* e);

  /// @brief Method <GetFlexibleWidth>b__5_0, addr 0x34cf114, size 0xa0, virtual false, abstract: false, final false
  inline float_t _GetFlexibleWidth_b__5_0(::UnityEngine::UI::ILayoutElement* e);

  /// @brief Method <GetMinHeight>b__6_0, addr 0x34cf1b4, size 0xa0, virtual false, abstract: false, final false
  inline float_t _GetMinHeight_b__6_0(::UnityEngine::UI::ILayoutElement* e);

  /// @brief Method <GetMinWidth>b__3_0, addr 0x34cef34, size 0xa0, virtual false, abstract: false, final false
  inline float_t _GetMinWidth_b__3_0(::UnityEngine::UI::ILayoutElement* e);

  /// @brief Method <GetPreferredHeight>b__7_0, addr 0x34cf254, size 0xa0, virtual false, abstract: false, final false
  inline float_t _GetPreferredHeight_b__7_0(::UnityEngine::UI::ILayoutElement* e);

  /// @brief Method <GetPreferredHeight>b__7_1, addr 0x34cf2f4, size 0xa0, virtual false, abstract: false, final false
  inline float_t _GetPreferredHeight_b__7_1(::UnityEngine::UI::ILayoutElement* e);

  /// @brief Method <GetPreferredWidth>b__4_0, addr 0x34cefd4, size 0xa0, virtual false, abstract: false, final false
  inline float_t _GetPreferredWidth_b__4_0(::UnityEngine::UI::ILayoutElement* e);

  /// @brief Method <GetPreferredWidth>b__4_1, addr 0x34cf074, size 0xa0, virtual false, abstract: false, final false
  inline float_t _GetPreferredWidth_b__4_1(::UnityEngine::UI::ILayoutElement* e);

  /// @brief Method .ctor, addr 0x34cef2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UI::__LayoutUtility____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* getStaticF___9__3_0();

  static inline ::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* getStaticF___9__4_0();

  static inline ::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* getStaticF___9__4_1();

  static inline ::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* getStaticF___9__5_0();

  static inline ::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* getStaticF___9__6_0();

  static inline ::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* getStaticF___9__7_0();

  static inline ::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* getStaticF___9__7_1();

  static inline ::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* getStaticF___9__8_0();

  static inline void setStaticF___9(::UnityEngine::UI::__LayoutUtility____c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* value);

  static inline void setStaticF___9__4_0(::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* value);

  static inline void setStaticF___9__4_1(::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* value);

  static inline void setStaticF___9__5_0(::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* value);

  static inline void setStaticF___9__6_0(::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* value);

  static inline void setStaticF___9__7_0(::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* value);

  static inline void setStaticF___9__7_1(::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* value);

  static inline void setStaticF___9__8_0(::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LayoutUtility____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LayoutUtility____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LayoutUtility____c(__LayoutUtility____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LayoutUtility____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LayoutUtility____c(__LayoutUtility____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__LayoutUtility____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::LayoutUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::LayoutUtility*
class CORDL_TYPE LayoutUtility : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UI::__LayoutUtility____c;

  /// @brief Method GetFlexibleHeight, addr 0x34ce9c0, size 0xf0, virtual false, abstract: false, final false
  static inline float_t GetFlexibleHeight(::UnityEngine::RectTransform* rect);

  /// @brief Method GetFlexibleSize, addr 0x34cc26c, size 0xc, virtual false, abstract: false, final false
  static inline float_t GetFlexibleSize(::UnityEngine::RectTransform* rect, int32_t axis);

  /// @brief Method GetFlexibleWidth, addr 0x34ceab0, size 0xf0, virtual false, abstract: false, final false
  static inline float_t GetFlexibleWidth(::UnityEngine::RectTransform* rect);

  /// @brief Method GetLayoutProperty, addr 0x34ceba0, size 0x18, virtual false, abstract: false, final false
  static inline float_t GetLayoutProperty(::UnityEngine::RectTransform* rect, ::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* property, float_t defaultValue);

  /// @brief Method GetLayoutProperty, addr 0x34cebb8, size 0x310, virtual false, abstract: false, final false
  static inline float_t GetLayoutProperty(::UnityEngine::RectTransform* rect, ::System::Func_2<::UnityEngine::UI::ILayoutElement*, float_t>* property, float_t defaultValue,
                                          ByRef<::UnityEngine::UI::ILayoutElement*> source);

  /// @brief Method GetMinHeight, addr 0x34ce4b8, size 0xf0, virtual false, abstract: false, final false
  static inline float_t GetMinHeight(::UnityEngine::RectTransform* rect);

  /// @brief Method GetMinSize, addr 0x34c9954, size 0xc, virtual false, abstract: false, final false
  static inline float_t GetMinSize(::UnityEngine::RectTransform* rect, int32_t axis);

  /// @brief Method GetMinWidth, addr 0x34ce5a8, size 0xf0, virtual false, abstract: false, final false
  static inline float_t GetMinWidth(::UnityEngine::RectTransform* rect);

  /// @brief Method GetPreferredHeight, addr 0x34ce698, size 0x194, virtual false, abstract: false, final false
  static inline float_t GetPreferredHeight(::UnityEngine::RectTransform* rect);

  /// @brief Method GetPreferredSize, addr 0x34c9960, size 0xc, virtual false, abstract: false, final false
  static inline float_t GetPreferredSize(::UnityEngine::RectTransform* rect, int32_t axis);

  /// @brief Method GetPreferredWidth, addr 0x34ce82c, size 0x194, virtual false, abstract: false, final false
  static inline float_t GetPreferredWidth(::UnityEngine::RectTransform* rect);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayoutUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayoutUtility(LayoutUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayoutUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayoutUtility(LayoutUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::LayoutUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::LayoutUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::LayoutUtility*, "UnityEngine.UI", "LayoutUtility");
NEED_NO_BOX(::UnityEngine::UI::__LayoutUtility____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__LayoutUtility____c*, "UnityEngine.UI", "LayoutUtility/<>c");
