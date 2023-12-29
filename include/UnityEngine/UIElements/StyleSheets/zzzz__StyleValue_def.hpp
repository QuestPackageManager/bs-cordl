#pragma once
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
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7399)), TypeDefinitionIndex(TypeDefinitionIndex(7386)), TypeDefinitionIndex(TypeDefinitionIndex(3332)),
// TypeDefinitionIndex(TypeDefinitionIndex(7573)), TypeDefinitionIndex(TypeDefinitionIndex(10178))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7552)) CS Name:
// ::UnityEngine.UIElements.StyleSheets::StyleValue
struct CORDL_TYPE StyleValue {
public:
  // Declarations
  /// @brief Field id, offset 0x0, size 0x4
  __declspec(property(get = __get_id, put = __set_id))::UnityEngine::UIElements::StyleSheets::StylePropertyId id;

  /// @brief Field keyword, offset 0x4, size 0x4
  __declspec(property(get = __get_keyword, put = __set_keyword))::UnityEngine::UIElements::StyleKeyword keyword;

  /// @brief Field number, offset 0x8, size 0x4
  __declspec(property(get = __get_number, put = __set_number)) float_t number;

  /// @brief Field length, offset 0x8, size 0x8
  __declspec(property(get = __get_length, put = __set_length))::UnityEngine::UIElements::Length length;

  /// @brief Field color, offset 0x8, size 0x10
  __declspec(property(get = __get_color, put = __set_color))::UnityEngine::Color color;

  /// @brief Field resource, offset 0x8, size 0x8
  __declspec(property(get = __get_resource, put = __set_resource))::System::Runtime::InteropServices::GCHandle resource;

  constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId& __get_id();

  constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId const& __get_id() const;

  constexpr void __set_id(::UnityEngine::UIElements::StyleSheets::StylePropertyId value);

  constexpr ::UnityEngine::UIElements::StyleKeyword& __get_keyword();

  constexpr ::UnityEngine::UIElements::StyleKeyword const& __get_keyword() const;

  constexpr void __set_keyword(::UnityEngine::UIElements::StyleKeyword value);

  constexpr float_t& __get_number();

  constexpr float_t const& __get_number() const;

  constexpr void __set_number(float_t value);

  constexpr ::UnityEngine::UIElements::Length& __get_length();

  constexpr ::UnityEngine::UIElements::Length const& __get_length() const;

  constexpr void __set_length(::UnityEngine::UIElements::Length value);

  constexpr ::UnityEngine::Color& __get_color();

  constexpr ::UnityEngine::Color const& __get_color() const;

  constexpr void __set_color(::UnityEngine::Color value);

  constexpr ::System::Runtime::InteropServices::GCHandle& __get_resource();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __get_resource() const;

  constexpr void __set_resource(::System::Runtime::InteropServices::GCHandle value);

  // Ctor Parameters [CppParam { name: "id", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None }, CppParam { name: "keyword", ty:
  // "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }, CppParam { name: "number", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "length", ty:
  // "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "resource", ty:
  // "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
  constexpr StyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleKeyword keyword, float_t number, ::UnityEngine::UIElements::Length length,
                       ::UnityEngine::Color color, ::System::Runtime::InteropServices::GCHandle resource) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleValue();

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
