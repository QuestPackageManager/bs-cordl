#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleEnum_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleEnum_1)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> struct StyleEnum_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::UIElements::StyleEnum_1);
// Type: UnityEngine.UIElements::StyleEnum`1
// SizeInfo { instance_size: 16, native_size: 28, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::UnityEngine.UIElements::StyleEnum`1<T>
struct CORDL_TYPE StyleEnum_1 {
public:
  // Declarations
  __declspec(property(get = get_keyword)) ::UnityEngine::UIElements::StyleKeyword keyword;

  __declspec(property(get = get_value)) T value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<T>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<T>*();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleEnum_1<T> other);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T v);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method get_keyword, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method get_value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>* i___System__IEquatable_1___UnityEngine__UIElements__StyleEnum_1_T__();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<T>"
  constexpr ::UnityEngine::UIElements::IStyleValue_1<T>* i___UnityEngine__UIElements__IStyleValue_1_T_();

  /// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleEnum_1<T> lhs, ::UnityEngine::UIElements::StyleEnum_1<T> rhs);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleEnum_1<T> op_Implicit___UnityEngine__UIElements__StyleEnum_1_T_(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleEnum_1<T> op_Implicit___UnityEngine__UIElements__StyleEnum_1_T_(T v);

  /// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::StyleEnum_1<T> lhs, ::UnityEngine::UIElements::StyleEnum_1<T> rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleEnum_1();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "T", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None
  // }]
  constexpr StyleEnum_1(T m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;

  /// @brief Field m_Value, offset: 0x0, size: 0x8, def value: None
  T m_Value;

  /// @brief Field m_Keyword, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6065 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::StyleEnum_1, "UnityEngine.UIElements", "StyleEnum`1");
