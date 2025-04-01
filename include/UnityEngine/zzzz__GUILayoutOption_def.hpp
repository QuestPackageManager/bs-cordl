#pragma once
// IWYU pragma private; include "UnityEngine/GUILayoutOption.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GUILayoutOption)
namespace System {
class Object;
}
namespace UnityEngine {
struct GUILayoutOption_Type;
}
// Forward declare root types
namespace UnityEngine {
struct GUILayoutOption_Type;
}
namespace UnityEngine {
class GUILayoutOption;
}
// Write type traits
MARK_VAL_T(::UnityEngine::GUILayoutOption_Type);
MARK_REF_PTR_T(::UnityEngine::GUILayoutOption);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.GUILayoutOption/Type
struct CORDL_TYPE GUILayoutOption_Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GUILayoutOption_Type_Unwrapped
  enum struct __GUILayoutOption_Type_Unwrapped : int32_t {
    __E_fixedWidth = static_cast<int32_t>(0x0),
    __E_fixedHeight = static_cast<int32_t>(0x1),
    __E_minWidth = static_cast<int32_t>(0x2),
    __E_maxWidth = static_cast<int32_t>(0x3),
    __E_minHeight = static_cast<int32_t>(0x4),
    __E_maxHeight = static_cast<int32_t>(0x5),
    __E_stretchWidth = static_cast<int32_t>(0x6),
    __E_stretchHeight = static_cast<int32_t>(0x7),
    __E_alignStart = static_cast<int32_t>(0x8),
    __E_alignMiddle = static_cast<int32_t>(0x9),
    __E_alignEnd = static_cast<int32_t>(0xa),
    __E_alignJustify = static_cast<int32_t>(0xb),
    __E_equalSize = static_cast<int32_t>(0xc),
    __E_spacing = static_cast<int32_t>(0xd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GUILayoutOption_Type_Unwrapped() const noexcept {
    return static_cast<__GUILayoutOption_Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GUILayoutOption_Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GUILayoutOption_Type(int32_t value__) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16646 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field alignEnd value: I32(10)
  static ::UnityEngine::GUILayoutOption_Type const alignEnd;

  /// @brief Field alignJustify value: I32(11)
  static ::UnityEngine::GUILayoutOption_Type const alignJustify;

  /// @brief Field alignMiddle value: I32(9)
  static ::UnityEngine::GUILayoutOption_Type const alignMiddle;

  /// @brief Field alignStart value: I32(8)
  static ::UnityEngine::GUILayoutOption_Type const alignStart;

  /// @brief Field equalSize value: I32(12)
  static ::UnityEngine::GUILayoutOption_Type const equalSize;

  /// @brief Field fixedHeight value: I32(1)
  static ::UnityEngine::GUILayoutOption_Type const fixedHeight;

  /// @brief Field fixedWidth value: I32(0)
  static ::UnityEngine::GUILayoutOption_Type const fixedWidth;

  /// @brief Field maxHeight value: I32(5)
  static ::UnityEngine::GUILayoutOption_Type const maxHeight;

  /// @brief Field maxWidth value: I32(3)
  static ::UnityEngine::GUILayoutOption_Type const maxWidth;

  /// @brief Field minHeight value: I32(4)
  static ::UnityEngine::GUILayoutOption_Type const minHeight;

  /// @brief Field minWidth value: I32(2)
  static ::UnityEngine::GUILayoutOption_Type const minWidth;

  /// @brief Field spacing value: I32(13)
  static ::UnityEngine::GUILayoutOption_Type const spacing;

  /// @brief Field stretchHeight value: I32(7)
  static ::UnityEngine::GUILayoutOption_Type const stretchHeight;

  /// @brief Field stretchWidth value: I32(6)
  static ::UnityEngine::GUILayoutOption_Type const stretchWidth;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GUILayoutOption_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::GUILayoutOption_Type, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object, UnityEngine.GUILayoutOption::Type
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUILayoutOption
class CORDL_TYPE GUILayoutOption : public ::System::Object {
public:
  // Declarations
  using Type = ::UnityEngine::GUILayoutOption_Type;

  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::UnityEngine::GUILayoutOption_Type type;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::Object* value;

  static inline ::UnityEngine::GUILayoutOption* New_ctor(::UnityEngine::GUILayoutOption_Type type, ::System::Object* value);

  constexpr ::UnityEngine::GUILayoutOption_Type const& __cordl_internal_get_type() const;

  constexpr ::UnityEngine::GUILayoutOption_Type& __cordl_internal_get_type();

  constexpr ::System::Object* const& __cordl_internal_get_value() const;

  constexpr ::System::Object*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_type(::UnityEngine::GUILayoutOption_Type value);

  constexpr void __cordl_internal_set_value(::System::Object* value);

  /// @brief Method .ctor, addr 0x48d6224, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::GUILayoutOption_Type type, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUILayoutOption();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GUILayoutOption", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUILayoutOption(GUILayoutOption&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUILayoutOption", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUILayoutOption(GUILayoutOption const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16647 };

  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::GUILayoutOption_Type ___type;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GUILayoutOption, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutOption, ___value) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::GUILayoutOption, 0x20>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayoutOption_Type, "UnityEngine", "GUILayoutOption/Type");
NEED_NO_BOX(::UnityEngine::GUILayoutOption);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayoutOption*, "UnityEngine", "GUILayoutOption");
