#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(StyleValue)
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValue;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::StyleValue);
// Type: UnityEngine.UIElements.StyleSheets::StyleValue
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// CS Name: ::UnityEngine.UIElements.StyleSheets::StyleValue
struct CORDL_TYPE StyleValue {
public:
  // Declarations
  /// @brief Field color, offset 0x8, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color))::UnityEngine::Color color;

  /// @brief Field id, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id))::UnityEngine::UIElements::StyleSheets::StylePropertyId id;

  /// @brief Field keyword, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_keyword, put = __cordl_internal_set_keyword))::UnityEngine::UIElements::StyleKeyword keyword;

  /// @brief Field length, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length))::UnityEngine::UIElements::Length length;

  /// @brief Field number, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_number, put = __cordl_internal_set_number)) float_t number;

  /// @brief Field resource, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_resource, put = __cordl_internal_set_resource))::System::Runtime::InteropServices::GCHandle resource;

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId const& __cordl_internal_get_id() const;

  constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId& __cordl_internal_get_id();

  constexpr ::UnityEngine::UIElements::StyleKeyword const& __cordl_internal_get_keyword() const;

  constexpr ::UnityEngine::UIElements::StyleKeyword& __cordl_internal_get_keyword();

  constexpr ::UnityEngine::UIElements::Length const& __cordl_internal_get_length() const;

  constexpr ::UnityEngine::UIElements::Length& __cordl_internal_get_length();

  constexpr float_t const& __cordl_internal_get_number() const;

  constexpr float_t& __cordl_internal_get_number();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_resource() const;

  constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_resource();

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_id(::UnityEngine::UIElements::StyleSheets::StylePropertyId value);

  constexpr void __cordl_internal_set_keyword(::UnityEngine::UIElements::StyleKeyword value);

  constexpr void __cordl_internal_set_length(::UnityEngine::UIElements::Length value);

  constexpr void __cordl_internal_set_number(float_t value);

  constexpr void __cordl_internal_set_resource(::System::Runtime::InteropServices::GCHandle value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleValue();

  // Ctor Parameters [CppParam { name: "id", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None }, CppParam { name: "keyword", ty:
  // "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }, CppParam { name: "number", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "length", ty:
  // "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "resource", ty:
  // "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
  constexpr StyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleKeyword keyword, float_t number, ::UnityEngine::UIElements::Length length,
                       ::UnityEngine::Color color, ::System::Runtime::InteropServices::GCHandle resource) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___id_padding[0x0];
      /// @brief Field id, offset: 0x0, size: 0x4, def value: None
      ::UnityEngine::UIElements::StyleSheets::StylePropertyId ___id;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___id_padding_forAlignment[0x0];
      /// @brief Field id, offset: 0x0, size: 0x4, def value: None
      ::UnityEngine::UIElements::StyleSheets::StylePropertyId ___id_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___keyword_padding[0x4];
      /// @brief Field keyword, offset: 0x4, size: 0x4, def value: None
      ::UnityEngine::UIElements::StyleKeyword ___keyword;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___keyword_padding_forAlignment[0x4];
      /// @brief Field keyword, offset: 0x4, size: 0x4, def value: None
      ::UnityEngine::UIElements::StyleKeyword ___keyword_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___number_padding[0x8];
      /// @brief Field number, offset: 0x8, size: 0x4, def value: None
      float_t ___number;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___number_padding_forAlignment[0x8];
      /// @brief Field number, offset: 0x8, size: 0x4, def value: None
      float_t ___number_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___length_padding[0x8];
      /// @brief Field length, offset: 0x8, size: 0x8, def value: None
      ::UnityEngine::UIElements::Length ___length;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___length_padding_forAlignment[0x8];
      /// @brief Field length, offset: 0x8, size: 0x8, def value: None
      ::UnityEngine::UIElements::Length ___length_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___color_padding[0x8];
      /// @brief Field color, offset: 0x8, size: 0x10, def value: None
      ::UnityEngine::Color ___color;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___color_padding_forAlignment[0x8];
      /// @brief Field color, offset: 0x8, size: 0x10, def value: None
      ::UnityEngine::Color ___color_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___resource_padding[0x8];
      /// @brief Field resource, offset: 0x8, size: 0x8, def value: None
      ::System::Runtime::InteropServices::GCHandle ___resource;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___resource_padding_forAlignment[0x8];
      /// @brief Field resource, offset: 0x8, size: 0x8, def value: None
      ::System::Runtime::InteropServices::GCHandle ___resource_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StyleValue, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleValue, "UnityEngine.UIElements.StyleSheets", "StyleValue");
