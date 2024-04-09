#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Translate)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct Length;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Translate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Translate);
// Type: UnityEngine.UIElements::Translate
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 37, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::Translate
struct CORDL_TYPE Translate {
public:
  // Declarations
  __declspec(property(get = get_x))::UnityEngine::UIElements::Length x;

  __declspec(property(get = get_y))::UnityEngine::UIElements::Length y;

  __declspec(property(get = get_z)) float_t z;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Translate>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::Translate>*();

  /// @brief Method Equals, addr 0x33bd780, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x33bd704, size 0x7c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::Translate other);

  /// @brief Method GetHashCode, addr 0x33bb76c, size 0x74, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method None, addr 0x33bd628, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Translate None();

  /// @brief Method ToString, addr 0x33bd810, size 0x1cc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x33bd664, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Length x, ::UnityEngine::UIElements::Length y, float_t z);

  /// @brief Method get_x, addr 0x33bd674, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length get_x();

  /// @brief Method get_y, addr 0x33bd67c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length get_y();

  /// @brief Method get_z, addr 0x33bd684, size 0x8, virtual false, abstract: false, final false
  inline float_t get_z();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::Translate>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::Translate>* i___System__IEquatable_1___UnityEngine__UIElements__Translate_();

  /// @brief Method op_Equality, addr 0x33bb5c0, size 0x7c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::Translate lhs, ::UnityEngine::UIElements::Translate rhs);

  /// @brief Method op_Inequality, addr 0x33bd68c, size 0x78, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::Translate lhs, ::UnityEngine::UIElements::Translate rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Translate();

  // Ctor Parameters [CppParam { name: "m_X", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "m_Y", ty: "::UnityEngine::UIElements::Length", modifiers: "",
  // def_value: None }, CppParam { name: "m_Z", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_isNone", ty: "bool", modifiers: "", def_value: None }]
  constexpr Translate(::UnityEngine::UIElements::Length m_X, ::UnityEngine::UIElements::Length m_Y, float_t m_Z, bool m_isNone) noexcept;

  /// @brief Field m_X, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length m_X;

  /// @brief Field m_Y, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length m_Y;

  /// @brief Field m_Z, offset: 0x10, size: 0x4, def value: None
  float_t m_Z;

  /// @brief Field m_isNone, offset: 0x14, size: 0x1, def value: None
  bool m_isNone;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Translate, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Translate, m_X) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Translate, m_Y) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Translate, m_Z) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Translate, m_isNone) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Translate, "UnityEngine.UIElements", "Translate");
